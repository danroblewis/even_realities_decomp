/*
 * Function: FUN_000876d0
 * Entry:    000876d0
 * Prototype: undefined FUN_000876d0()
 */


int FUN_000876d0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00076e20(param_1,param_3 * param_2,param_3,param_4,param_4);
  if (iVar1 != 0) {
    fill_memory_buffer(iVar1,0,param_3 * param_2);
  }
  return iVar1;
}


