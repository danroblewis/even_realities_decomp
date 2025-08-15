/*
 * Function: process_state_machine
 * Entry:    000809b0
 * Prototype: undefined __stdcall process_state_machine(undefined4 state_data, undefined4 output_state)
 */


uint process_state_machine(undefined4 state_data,undefined1 *output_state)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 extraout_r3;
  
  uVar1 = shift_left_by_one();
  uVar2 = thunk_FUN_00064134(state_data);
  if (3 < uVar1) {
    process_data_with_state_management_alt4();
    uVar2 = extraout_r3;
  }
  uVar3 = uVar1 ^ 1;
  switch(uVar2) {
  case 1:
    uVar3 = uVar1;
  case 3:
    uVar4 = 0;
    break;
  case 2:
    uVar4 = 1;
    break;
  case 4:
    uVar4 = 2;
    break;
  default:
    return 0xffffffff;
  }
  if (output_state != (undefined1 *)0x0) {
    *output_state = uVar4;
  }
  return uVar3;
}


