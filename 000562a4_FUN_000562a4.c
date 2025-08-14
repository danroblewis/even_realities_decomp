/*
 * Function: FUN_000562a4
 * Entry:    000562a4
 * Prototype: undefined FUN_000562a4()
 */


int FUN_000562a4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  while( true ) {
    if (iVar1 == param_2) {
      return 0;
    }
    piVar2 = (int *)(param_1 + 0xd0);
    if (*piVar2 == 0) break;
    param_1 = param_1 + 0xd8;
    iVar1 = iVar1 + 1;
  }
  *piVar2 = 1;
  if (param_1 == 0) {
    return 0;
  }
  fill_memory_buffer(param_1,0,0xd0,piVar2,param_4);
  FUN_000732d4(param_1 + 0x60,0x570a1);
  FUN_00072e50(param_1 + 0x28,&LAB_000813d0_1);
  return param_1;
}


