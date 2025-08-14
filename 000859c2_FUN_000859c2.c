/*
 * Function: FUN_000859c2
 * Entry:    000859c2
 * Prototype: undefined FUN_000859c2()
 */


undefined4 FUN_000859c2(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + -8);
  FUN_000859b6(param_1 + 0x58);
  *(short *)(param_2 + -8) = (short)uVar1;
  *(undefined4 *)(param_2 + -0xc) = *(undefined4 *)(param_1 + 0xb8);
  *(int *)(param_2 + -0x10) = param_1 + 0xb4;
  *(int *)(param_1 + 0xb8) = param_2 + -0x10;
  **(int **)(param_2 + -0xc) = param_2 + -0x10;
  z_spin_lock_valid(param_1 + 0x58);
  return 0;
}


