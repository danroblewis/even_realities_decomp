/*
 * Function: handle_configuration_setting_with_validation_and_callback
 * Entry:    0004e9a0
 * Prototype: undefined handle_configuration_setting_with_validation_and_callback()
 */


undefined4 *
handle_configuration_setting_with_validation_and_callback(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  char *local_1c;
  
  if (CONFIGURATION_SETTING_AND_DATA_PROCESSING_STATE < 0x23) {
    iVar2 = handle_configuration_setting_with_size(*(undefined1 *)*param_1);
    iVar3 = handle_configuration_setting_with_context(iVar2 + param_2);
    if (iVar3 != 0) {
      iVar4 = CONFIGURATION_SETTING_AND_DATA_PROCESSING_STATE + 3;
      CONFIGURATION_SETTING_AND_DATA_PROCESSING_STATE =
           CONFIGURATION_SETTING_AND_DATA_PROCESSING_STATE + 1;
      *(undefined2 *)(&DATA_PROCESSING_CALLBACK_STATE_MANAGEMENT + iVar4 * 2) =
           *(undefined2 *)(param_1 + 4);
      uVar1 = *(undefined2 *)((int)param_1 + 0x12);
      (&TASK_CALLBACK_PARAMETER_2)[iVar4 * 2] = iVar3 + param_2;
      *(char *)((int)&DATA_PROCESSING_CALLBACK_STATE_MANAGEMENT + iVar4 * 8 + 2) = (char)uVar1;
      memcpy(iVar3 + param_2,*param_1,iVar2);
      return &TASK_CALLBACK_PARAMETER_2 + iVar4 * 2;
    }
    local_1c = "No space for attribute data.";
  }
  else {
    local_1c = "No space for new attribute.";
  }
  local_20 = 2;
  process_and_compress_data_with_validation_wrapper(&DAT_00088130,0x1040,&local_20);
  return (undefined4 *)0x0;
}


