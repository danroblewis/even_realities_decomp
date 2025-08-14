/*
 * Function: FUN_00053e74
 * Entry:    00053e74
 * Prototype: undefined FUN_00053e74()
 */


int FUN_00053e74(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int extraout_r3;
  uint uVar3;
  int iVar4;
  uint local_1c;
  undefined4 uStack_18;
  
  iVar2 = (int)DAT_2000209b;
  iVar4 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  if (iVar2 < 0) {
    for (; param_2 != 0; param_2 = param_2 - uVar3) {
      uVar3 = param_2;
      if (7 < param_2) {
        uVar3 = 8;
      }
      iVar2 = FUN_00053d70(0x2018,0,&local_1c,iVar2,iVar4);
      uVar1 = local_1c;
      if (iVar2 != 0) {
        return iVar2;
      }
      memcpy(param_1,*(int *)(local_1c + 0xc) + 1,uVar3);
      FUN_0005f24c(uVar1);
      param_1 = param_1 + uVar3;
      iVar2 = extraout_r3;
    }
    iVar2 = 0;
  }
  else {
    iVar2 = -0x86;
  }
  return iVar2;
}


