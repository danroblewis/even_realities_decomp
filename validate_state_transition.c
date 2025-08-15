/*
 * Function: validate_state_transition
 * Entry:    000809f6
 * Prototype: undefined __stdcall validate_state_transition(undefined4 current_state, undefined4 target_state)
 */


bool validate_state_transition(uint current_state,uint target_state)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_r2;
  bool bVar3;
  uint uVar4;
  undefined4 uStack_14;
  
  uVar1 = current_state;
  uVar4 = current_state;
  uStack_14 = target_state;
  if (3 < current_state) {
    uVar1 = process_data_with_validation_and_callback_alt3();
  }
  uVar2 = shift_left_by_one((int)uVar1 >> 1);
  uStack_14 = uStack_14 & 0xffffff;
  uVar1 = process_state_machine((int)uVar1 >> 1,(int)&uStack_14 + 3,extraout_r2,0,uVar4);
  if (((uVar1 == current_state) && (uStack_14._3_1_ - 1 < 2)) ||
     ((uVar1 != uVar2 && (uStack_14._3_1_ == 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = uVar2 == current_state;
  }
  return bVar3;
}


