/*
 * Function: handle_validation_operation
 * Entry:    000189a0
 * Prototype: undefined handle_validation_operation()
 */


void handle_validation_operation(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *format_string;
  
  uVar1 = FUN_0007f4c8();
  uVar2 = FUN_0007f4cc(param_1);
  if (uVar2 < 2) {
    DEBUG_PRINT("GATT Service could not be found during the discovery\n");
  }
  else {
    DEBUG_PRINT("The discovery procedure for GATT Service succeeded\n");
    iVar3 = FUN_0007f8dc(param_1,param_2);
    if (iVar3 == 0) {
      iVar3 = process_data_with_callback_validation_alt(param_2,0x18a39);
      if (iVar3 == 0) goto LAB_000189ce;
      format_string = "Cannot subscribe to Service Changed indication (err %d)\n";
    }
    else {
      format_string = "Could not init GATT Service client object, error: %d\n";
    }
    DEBUG_PRINT(format_string,iVar3);
  }
LAB_000189ce:
  iVar3 = FUN_0007f594(param_1);
  if (iVar3 != 0) {
    DEBUG_PRINT("Could not release the discovery data, error code: %d\n",iVar3);
  }
  handle_conditional_operation(uVar1,0);
  return;
}


