/*
 * Function: handle_ble_connection_memory_allocation
 * Entry:    000830b0
 * Prototype: undefined handle_ble_connection_memory_allocation()
 */


int handle_ble_connection_memory_allocation(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = extract_bit_from_value(param_1 + 4,4);
  if (iVar1 == 0) {
    uVar3 = 0xf0000;
  }
  else {
    uVar3 = 0;
  }
  iVar1 = transition_ble_connection_state_with_callback(0,0,uVar3,0);
  if (iVar1 == 0) {
    set_bit_in_value(param_1 + 4,4);
  }
  else {
    puVar2 = (undefined1 *)ble_memory_allocation_utility(iVar1 + 0xc,1);
    *puVar2 = param_2;
  }
  return iVar1;
}


