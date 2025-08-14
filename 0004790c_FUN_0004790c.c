/*
 * Function: FUN_0004790c
 * Entry:    0004790c
 * Prototype: undefined FUN_0004790c()
 */


void FUN_0004790c(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(param_3 + iVar1 * 4) =
         *(undefined4 *)(&DAT_000d753a + (uint)*(byte *)(param_1 + iVar1) * 4);
  }
  return;
}


