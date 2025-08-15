/*
 * Function: FUN_0007ea64
 * Entry:    0007ea64
 * Prototype: undefined FUN_0007ea64(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
FUN_0007ea64(int param_1,int param_2,int *param_3,uint *param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_2 == 0) {
    uVar1 = 0xfffffffe;
  }
  else if ((param_3 == (int *)0x0) || (param_4 == (uint *)0x0)) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar2 = param_6 + (0xfffffffe < param_5);
    if (uVar2 == 0 && (1 < param_5 + 1) <= uVar2) {
      if ((*param_4 == 0) ||
         (uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x3c0), *param_4 <= uVar2)) {
        puVar4 = param_4;
        do {
          iVar3 = (param_5 & param_6) + 1;
          iVar3 = FUN_000858ec(param_2,param_4,iVar3 == 0,iVar3,puVar4);
          if (iVar3 != 0) {
            *param_3 = iVar3;
            return 0;
          }
        } while (param_6 == 0xffffffff && param_5 == 0xffffffff);
        uVar1 = 0xffffff97;
      }
      else {
        uVar1 = 0xfffffff4;
        *param_4 = uVar2;
      }
    }
    else {
      uVar1 = 0xffffff7a;
    }
  }
  return uVar1;
}


