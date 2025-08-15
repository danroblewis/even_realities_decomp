/*
 * Function: handle_message_processing
 * Entry:    000243fc
 * Prototype: undefined handle_message_processing()
 */


undefined4 handle_message_processing(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = 0;
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  for (iVar2 = MESSAGE_PROCESSING_HANDLING_AND_SYSTEM_DATA_RETRIEVAL; 0 < iVar2; iVar2 = iVar2 + -1)
  {
    uVar1 = manage_ble_connection_state_comprehensive(&DAT_20003960,&uStack_18,0,0);
  }
  return uVar1;
}


