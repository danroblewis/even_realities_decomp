/*
 * Function: manage_ble_connection_state_with_linked_list
 * Entry:    00072c98
 * Prototype: undefined manage_ble_connection_state_with_linked_list()
 */


uint manage_ble_connection_state_with_linked_list(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  puVar1 = DAT_2000b478;
  puVar2 = DAT_2000b47c;
  if (iVar3 << 0x1e < 0) {
    setup_bluetooth_stack(param_2 + 2,0,1);
    *param_2 = 0;
    param_2[1] = param_1;
    puVar1 = param_2;
    puVar2 = param_2;
    if (DAT_2000b47c != (undefined4 *)0x0) {
      *DAT_2000b47c = param_2;
      puVar1 = DAT_2000b478;
      puVar2 = param_2;
    }
  }
  DAT_2000b47c = puVar2;
  DAT_2000b478 = puVar1;
  return (uint)(iVar3 << 0x1e) >> 0x1f;
}


