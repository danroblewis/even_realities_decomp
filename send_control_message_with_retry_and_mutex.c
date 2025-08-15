/*
 * Function: send_control_message_with_retry_and_mutex
 * Entry:    00025788
 * Prototype: undefined send_control_message_with_retry_and_mutex()
 */


int send_control_message_with_retry_and_mutex
              (int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar4 = 0x14;
    puVar3 = *(undefined4 **)(param_1 + 4);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = param_2;
    uVar6 = param_2;
    while( true ) {
      resource_mutex_acquire(uVar5,uVar2,0xffffffff,0xffffffff,param_1,uVar6);
      param_1 = param_4;
      iVar1 = send_control_message_with_byte_swap
                        (*puVar3,*(undefined2 *)(puVar3 + 2),param_2,param_3);
      mutex_unlock(uVar5);
      if (iVar1 == 0) break;
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        DEBUG_PRINT("eeprom_st25dv_read addr %04X offset %04X failed %d\r\n",
                    (uint)*(ushort *)(puVar3 + 2),param_2,iVar1);
        return iVar1;
      }
      FUN_0007c87a();
      uVar2 = extraout_r1;
    }
  }
  return iVar1;
}


