/*
 * Function: FUN_000857b2
 * Entry:    000857b2
 * Prototype: undefined FUN_000857b2()
 */


void FUN_000857b2(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x18);
  if (*(int *)(*param_1 + 0x10) << 2 < 0) {
    if (iVar1 == 0) {
      *(short *)(param_1[7] + param_1[5] * 2 + 4) =
           (*(short *)((int)param_1 + 0x2e) + -1) - *(short *)((int)param_1 + 10);
      return;
    }
  }
  else if (iVar1 == 0) {
    *(ushort *)param_1[7] = *(ushort *)param_1[7] | 1;
  }
  return;
}


