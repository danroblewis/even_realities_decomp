/*
 * Function: find_ble_connection_by_handle
 * Entry:    00081aca
 * Prototype: undefined find_ble_connection_by_handle()
 */


void find_ble_connection_by_handle(int param_1,uint param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x54);
      (piVar1 != (int *)0x0 && (*(ushort *)(piVar1 + 3) != param_2)); piVar1 = (int *)*piVar1) {
  }
  return;
}


