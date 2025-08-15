/*
 * Function: bluetooth_hci_command_processing_with_callback_and_parameter
 * Entry:    00054dd8
 * Prototype: undefined bluetooth_hci_command_processing_with_callback_and_parameter()
 */


void bluetooth_hci_command_processing_with_callback_and_parameter(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_30 [24];
  
  if (param_2 == (int *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conflict != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/id.c",0x36c);
    uVar3 = 0x36c;
  }
  else {
    iVar4 = *param_2;
    if (iVar4 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conflict->candidate != ((void *)0)",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/id.c",0x36d);
      uVar3 = 0x36d;
    }
    else if (param_1 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","resident != ((void *)0)",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/id.c",0x36e);
      uVar3 = 0x36e;
    }
    else {
      if (-1 < (int)((uint)*(byte *)(iVar4 + 8) << 0x1d)) {
        if ((param_2[1] == 0) && ((int)((uint)*(byte *)(param_1 + 8) << 0x1d) < 0)) {
          iVar1 = compare_byte_arrays_7_bytes(iVar4 + 1,param_1 + 1);
          fill_memory_buffer(auStack_30,0,0x16);
          iVar2 = memcmp_byte_arrays(iVar4 + 0x2a,auStack_30,0x10);
          if (((iVar2 != 0) &&
              (iVar4 = memcmp_byte_arrays(iVar4 + 0x2a,param_1 + 0x2a,0x10), iVar4 == 0)) ||
             (iVar1 != 0)) {
            param_2[1] = param_1;
          }
        }
        return;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "(conflict->candidate->state & BT_KEYS_ID_ADDED) == 0",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/id.c",0x370);
      uVar3 = 0x370;
    }
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/id.c",uVar3);
}


