/*
 * Function: FUN_0007fe2a
 * Entry:    0007fe2a
 * Prototype: undefined FUN_0007fe2a()
 */


int FUN_0007fe2a(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  iVar1 = FUN_0007fb20(param_1,1,param_3,param_4,param_1);
  if (iVar1 == 0) {
    iVar2 = FUN_0007f97c(param_1,0x14,&local_1c,1);
    local_1c = CONCAT31(local_1c._1_3_,(byte)local_1c & 0xfb | (byte)((param_2 & 1) << 2));
    iVar3 = FUN_0007f98a(param_1,0x14,&local_1c,1);
    iVar1 = FUN_0007fb20(param_1,0);
    iVar1 = iVar2 + iVar3 + iVar1;
  }
  return iVar1;
}


