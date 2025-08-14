/*
 * Function: FUN_00083cfc
 * Entry:    00083cfc
 * Prototype: undefined FUN_00083cfc()
 */


int FUN_00083cfc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar1 = FUN_00083cde(*(undefined4 *)(iVar2 + 0x20),0);
      if (-1 < iVar1) {
        FUN_00067884(iVar2);
      }
    }
    else {
      iVar1 = -0x86;
    }
    return iVar1;
  }
  FUN_000678d0(iVar2);
  iVar2 = FUN_00083cde(*(undefined4 *)(iVar2 + 0x20),1,extraout_r2,param_4);
  return iVar2;
}


