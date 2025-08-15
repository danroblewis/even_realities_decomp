/*
 * Function: process_data_with_callback_and_validation_alt
 * Entry:    0004ed8c
 * Prototype: undefined process_data_with_callback_and_validation_alt()
 */


int process_data_with_callback_and_validation_alt
              (undefined4 param_1,byte *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_28;
  char *local_24;
  int iStack_20;
  undefined4 uStack_18;
  
  if (((param_2 == (byte *)0x0) || ((*param_2 & 0xfd) == 0)) && (param_3 != 0)) {
    uVar1 = TASK_STATE_FLAGS | 1;
    uVar4 = TASK_STATE_FLAGS & 1;
    TASK_STATE_FLAGS = uVar1;
    if (uVar4 == 0) {
      DAT_2000a2b4 = param_2 != (byte *)0x0;
      TASK_CALLBACK_PARAMETER_1 = param_1;
      TASK_CALLBACK_PARAMETER_2 = param_4;
      CONFIGURATION_SETTING_AND_DATA_PROCESSING_STATE = uVar4;
      DAT_2000a2a4 = uVar4;
      DAT_2000a2a8 = uVar4;
      CONFIGURATION_SETTING_CONTEXT_AND_STATE_MANAGEMENT = uVar4;
      TASK_CALLBACK_FUNCTION_PTR = param_3;
      uStack_18 = param_4;
      if ((bool)DAT_2000a2b4) {
        uVar2 = handle_configuration_setting_with_size(*param_2);
        validate_memory_bounds(&DAT_2000a290,param_2,uVar2,0x28);
        DATA_PROCESSING_CALLBACK_STATE_MANAGEMENT = &DAT_2000a290;
      }
      else {
        DATA_PROCESSING_CALLBACK_STATE_MANAGEMENT = (undefined *)0x0;
      }
      DAT_2000a160 = 0x4ea79;
      DAT_2000a164 = 1;
      DAT_2000a16a = 0xffff;
      DAT_2000a16c = 0;
      iVar3 = process_ble_characteristic_operation_by_type
                        (param_1,&DATA_PROCESSING_CALLBACK_STATE_MANAGEMENT);
      if (iVar3 != 0) {
        local_24 = "Discover failed, error: %d.";
        local_28 = 3;
        iStack_20 = iVar3;
        process_and_compress_data_with_validation_wrapper(&DAT_00088130,0x1840,&local_28);
        apply_bitwise_and_mask(&TASK_STATE_FLAGS,0xfffffffe);
      }
    }
    else {
      iVar3 = -0x78;
    }
  }
  else {
    iVar3 = -0x16;
  }
  return iVar3;
}


