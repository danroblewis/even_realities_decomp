/*
 * Function: FUN_000188d8
 * Entry:    000188d8
 * Prototype: undefined FUN_000188d8()
 */


void FUN_000188d8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *format_string;
  
  uVar1 = FUN_0007f4c8();
  DEBUG_PRINT("The discovery procedure for ANCS succeeded\n");
  iVar2 = FUN_0004ee68(param_1,param_2);
  if (iVar2 == 0) {
    DAT_20006ab4 = DAT_20006ab4 | 2;
    iVar2 = FUN_0004f040(param_2,&LAB_00018ef4_1);
    if (iVar2 != 0) {
      DEBUG_PRINT("Failed to enable Notification Source notification (err %d)\n",iVar2);
    }
    iVar2 = FUN_0004f0ec(param_2,0x18c49);
    if (iVar2 == 0) goto LAB_000188fc;
    format_string = "Failed to enable Data Source notification (err %d)\n";
  }
  else {
    format_string = "Could not init ANCS client object, error: %d\n";
  }
  DEBUG_PRINT(format_string,iVar2);
LAB_000188fc:
  iVar2 = FUN_0007f594(param_1);
  if (iVar2 != 0) {
    DEBUG_PRINT("Could not release the discovery data, error code: %d\n",iVar2);
  }
  FUN_0007c08e(&DAT_20006ab4,0xfffffffe);
  FUN_000187e8(uVar1,1);
  return;
}


