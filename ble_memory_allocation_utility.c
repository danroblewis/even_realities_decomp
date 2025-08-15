/*
 * Function: ble_memory_allocation_utility
 * Entry:    0005f5d0
 * Prototype: undefined ble_memory_allocation_utility()
 */


int ble_memory_allocation_utility(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_1 + 1);
  iVar3 = *param_1;
  uVar2 = calculate_ble_buffer_available_space();
  if (uVar2 < param_2) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","net_buf_simple_tailroom(buf) >= len",
                 "WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",0x3e,param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",0x3e);
  }
  *(ushort *)(param_1 + 1) = uVar1 + (short)param_2;
  return iVar3 + (uint)uVar1;
}


