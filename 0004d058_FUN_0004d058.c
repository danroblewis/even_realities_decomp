/*
 * Function: FUN_0004d058
 * Entry:    0004d058
 * Prototype: undefined FUN_0004d058()
 */


void FUN_0004d058(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0xb0);
  iVar2 = iVar4 + -0x15c;
  while( true ) {
    iVar1 = FUN_0000eefe(param_2,iVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_00070fb4(iVar2 + -0x40,param_1,param_2,0xffffffff,param_3,
                           *(undefined4 *)(iVar4 + 0x10),&LAB_0007ed26_1);
      if (iVar1 != 0) {
        return;
      }
      *(undefined1 *)(iVar3 * 0x70 + iVar4 + -0x138) = 1;
      if (*(code **)(iVar4 + 0xc) != (code *)0x0) {
        (**(code **)(iVar4 + 0xc))(iVar2 + -0x40);
      }
    }
    iVar2 = iVar2 + 0x70;
    if (iVar3 != 0) break;
    iVar3 = 1;
  }
  return;
}


