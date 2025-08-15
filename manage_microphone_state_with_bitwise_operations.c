/*
 * Function: manage_microphone_state_with_bitwise_operations
 * Entry:    0007f594
 * Prototype: undefined manage_microphone_state_with_bitwise_operations()
 */


undefined4
manage_microphone_state_with_bitwise_operations
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = apply_bitwise_and_mask(param_1 + 0x138,0xfffffffd,param_3,param_4,param_4);
  if (iVar1 << 0x1e < 0) {
    clear_and_reinitialize_linked_list_with_microphone_initialization(param_1);
    apply_bitwise_and_mask(param_1 + 0x138,0xfffffffe);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff88;
  }
  return uVar2;
}


