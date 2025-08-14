/*
 * Function: FUN_0007e5da
 * Entry:    0007e5da
 * Prototype: undefined FUN_0007e5da()
 */


int FUN_0007e5da(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_38 [32];
  
  uVar2 = -**(int **)(param_1 + 0x2c) & 0x20;
  fill_memory_buffer(auStack_38,param_3,uVar2);
  while( true ) {
    if (param_4 == 0) {
      return 0;
    }
    uVar3 = param_4;
    if (uVar2 <= param_4) {
      uVar3 = uVar2;
    }
    iVar1 = FUN_0007e574(param_1,param_2,auStack_38,uVar3);
    if (iVar1 != 0) break;
    param_4 = param_4 - uVar3;
    param_2 = param_2 + uVar3;
  }
  return iVar1;
}


