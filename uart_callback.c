/*
 * Function: uart_callback
 * Entry:    00033384
 * Prototype: undefined uart_callback()
 */


void uart_callback(undefined4 param_1,undefined1 *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *local_1c;
  
  local_1c = param_2;
  switch(*param_2) {
  case 0:
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): Tx sent %d bytes\n","uart_callback",*(undefined4 *)(param_2 + 8),0,
                    param_1);
      }
      else {
        handle_heartbeat();
      }
    }
    for (uVar5 = 0; uVar5 < *(uint *)(param_2 + 8); uVar5 = uVar5 + 1) {
      DEBUG_PRINT("%02x ",(uint)*(byte *)(*(int *)(param_2 + 4) + uVar5));
    }
    break;
  case 1:
    if (LOG_LEVEL < 1) {
      return;
    }
    if (IS_DEBUG != 0) {
      handle_heartbeat();
      return;
    }
    DEBUG_PRINT("%s(): Tx aborted\n","uart_callback");
    return;
  case 2:
    uVar5 = *(uint *)(param_2 + 8);
    for (uVar7 = uVar5 & 0xffff; (uVar7 & 0xffff) < 0xf8; uVar7 = uVar7 + 1) {
      iVar2 = *(int *)(param_2 + 4);
      param_3 = (uint)*(byte *)(iVar2 + uVar7);
      pcVar3 = (char *)(iVar2 + uVar7);
      if (((param_3 == 0x5a) && (param_3 = (uint)(byte)pcVar3[1], param_3 == 0xa5)) &&
         (param_3 = (uint)(byte)pcVar3[2], param_3 == 0x7f)) {
        param_3 = (uint)(byte)(pcVar3[3] + 5U);
        if ((int)param_3 <= (int)(0x100 - uVar7)) {
          cVar1 = '\0';
          pcVar8 = pcVar3;
          for (iVar6 = 0; iVar6 < (int)(param_3 - 1); iVar6 = iVar6 + 1) {
            cVar1 = cVar1 + *pcVar8;
            pcVar8 = pcVar8 + 1;
          }
          if (*(char *)(iVar2 + param_3 + uVar7 + -1) == cVar1) {
            DAT_2001a128 = pcVar3[3] + 5U;
            memcpy(&DAT_2001a129);
            fill_memory_buffer(*(undefined4 *)(param_2 + 4),0,0x100);
            return;
          }
        }
      }
    }
    DEBUG_PRINT("recv data %d bytes:",*(undefined4 *)(param_2 + 0xc),param_3,uVar7 & 0xffff,param_1)
    ;
    for (uVar7 = 0; uVar7 < *(uint *)(param_2 + 0xc); uVar7 = uVar7 + 1) {
      DEBUG_PRINT("%02x ",(uint)*(byte *)(*(int *)(param_2 + 4) + uVar5 + uVar7));
    }
    break;
  case 3:
    DEBUG_PRINT("*************alloc new rx buf*************\n");
    iVar2 = process_ble_connection_data(&DAT_200037b8,&local_1c,0,0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)(param_3 + 8) + 0x10))(param_3,local_1c,0x100);
      if (iVar2 == 0) {
        return;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == 0","../src/production_test/serial_port.c"
                   ,0x54);
      DEBUG_PRINT2("\tFailed to provide new buffer\n");
      uVar4 = 0x54;
    }
    else {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == 0","../src/production_test/serial_port.c"
                   ,0x51);
      DEBUG_PRINT2("\tFailed to allocate slab\n");
      uVar4 = 0x51;
    }
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("../src/production_test/serial_port.c",uVar4);
  case 4:
    DEBUG_PRINT(
               "****************************UART_RX_BUF_RELEASED***************************************\n"
               );
    enqueue_message_to_priority_queue(&DAT_200037b8,*(undefined4 *)(param_2 + 4));
    return;
  default:
    return;
  }
  DEBUG_PRINT(&DAT_000f5400);
  return;
}


