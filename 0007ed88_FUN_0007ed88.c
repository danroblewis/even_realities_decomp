/*
 * Function: FUN_0007ed88
 * Entry:    0007ed88
 * Prototype: undefined FUN_0007ed88()
 */


int FUN_0007ed88(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 * 8 + 0x34;
  iVar1 = FUN_000868c2(iVar2);
  if (iVar1 != 0) {
    fill_memory_buffer(iVar1,0,iVar2);
  }
  return iVar1;
}


