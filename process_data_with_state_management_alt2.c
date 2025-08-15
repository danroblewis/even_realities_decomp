/*
 * Function: process_data_with_state_management_alt2
 * Entry:    0005139c
 * Prototype: undefined process_data_with_state_management_alt2()
 */


undefined4 process_data_with_state_management_alt2(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = LINKED_LIST_HEAD_POINTER_ALT;
  puVar2 = LINKED_LIST_HEAD_POINTER_ALT;
  if (LINKED_LIST_HEAD_POINTER_ALT != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*LINKED_LIST_HEAD_POINTER_ALT;
  }
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (*(ushort *)((int)puVar2 + 10) == param_1) break;
    puVar2 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  return puVar2[3];
}


