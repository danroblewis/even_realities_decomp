/*
 * Function: insert_ble_connection_by_priority
 * Entry:    00073840
 * Prototype: undefined insert_ble_connection_by_priority()
 */


void insert_ble_connection_by_priority(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (((*(char *)((int)param_1 + 0xd) < '\0') || ((*(byte *)((int)param_1 + 0xd) & 0x1f) != 0)) ||
     (param_1[6] != 0)) {
    return;
  }
  *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 0x80;
  if (param_1 == (undefined4 *)&DAT_20006720) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!z_is_idle_thread_object(thread)",
                 "WEST_TOPDIR/zephyr/kernel/sched.c",0xc1);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/kernel/sched.c",0xc1);
  }
  puVar2 = (undefined4 *)0x0;
  if ((undefined4 **)DMIC_BUFFER_POINTER != &DMIC_BUFFER_POINTER) {
    puVar2 = DMIC_BUFFER_POINTER;
  }
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if ((*(char *)((int)param_1 + 0xe) != *(char *)((int)puVar2 + 0xe)) &&
       (*(char *)((int)param_1 + 0xe) < *(char *)((int)puVar2 + 0xe))) {
      puVar1 = (undefined4 *)puVar2[1];
      *param_1 = puVar2;
      param_1[1] = puVar1;
      *puVar1 = param_1;
      puVar2[1] = param_1;
      goto LAB_000738ac;
    }
    if (puVar2 == BLE_CONNECTION_PRIORITY_MANAGER) break;
  }
  *param_1 = &DMIC_BUFFER_POINTER;
  param_1[1] = BLE_CONNECTION_PRIORITY_MANAGER;
  *BLE_CONNECTION_PRIORITY_MANAGER = param_1;
  BLE_CONNECTION_PRIORITY_MANAGER = param_1;
LAB_000738ac:
  manage_ble_connection_priority(0);
  return;
}


