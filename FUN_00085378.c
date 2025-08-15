/*
 * Function: FUN_00085378
 * Entry:    00085378
 * Prototype: undefined FUN_00085378()
 */


void FUN_00085378(int param_1,uint param_2,int param_3,uint *param_4)

{
  uint uVar1;
  
  uVar1 = 1 << (param_3 - 0x100U >> 2 & 0xff);
  if (((uVar1 & param_2) != 0) && (*(int *)(param_1 + param_3) != 0)) {
    *(undefined4 *)(param_1 + param_3) = 0;
    *param_4 = *param_4 | uVar1;
  }
  return;
}


