/*
 * Function: send_multiple_control_messages_with_data_manipulation
 * Entry:    0007c968
 * Prototype: undefined send_multiple_control_messages_with_data_manipulation()
 */


int send_multiple_control_messages_with_data_manipulation
              (undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_14;
  undefined4 uStack_10;
  
  local_14 = param_2 & 0xffff0000;
  if (param_2 == 0) {
    iVar1 = -0x16;
  }
  else {
    uVar2 = param_1;
    uStack_10 = param_3;
    iVar1 = send_control_message_with_retry(param_1,0x14,&local_14,2,param_1);
    if (iVar1 == 0) {
      *(undefined2 *)(param_2 + 2) = (undefined2)local_14;
      iVar1 = send_control_message_with_retry(param_1,0x16,param_2,1,uVar2);
    }
  }
  return iVar1;
}


