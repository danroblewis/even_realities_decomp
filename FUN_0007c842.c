/*
 * Function: FUN_0007c842
 * Entry:    0007c842
 * Prototype: undefined FUN_0007c842()
 */


void FUN_0007c842(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = determine_work_mode_state();
  if (iVar1 == 1) {
    uVar2 = 4;
  }
  else if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}


