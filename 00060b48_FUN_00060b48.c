/*
 * Function: FUN_00060b48
 * Entry:    00060b48
 * Prototype: undefined FUN_00060b48()
 */


uint FUN_00060b48(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  uint uStack_20;
  uint local_1c;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  local_1c = param_4;
  iVar1 = FUN_0007ef2e();
  if (iVar1 == 0) {
    if (param_2 != 0) {
      if (param_2 != 1) {
        return 0xffffff7a;
      }
      uVar2 = FUN_000838dc(*(undefined4 *)(iVar4 + 0x34),0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      iVar3 = FUN_00066994(iVar4,&LAB_000838ca_1,iVar5);
      if (iVar3 != 0xbad0000) {
        return 0xfffffffb;
      }
      uVar2 = FUN_0008397e(param_1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      FUN_00060a5c(param_1);
      return 0;
    }
    uVar2 = FUN_00060a10(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar2 = (uint)*(byte *)(iVar5 + 0x60);
    if ((uVar2 == 0) && (iVar1 = FUN_00066ae0(), iVar1 == 0xbad0000)) {
      local_24 = 0xb9;
      uStack_20 = uVar2;
      local_1c = uVar2;
      uVar2 = FUN_00060ab0(param_1,&local_24,0,0xb9,iVar3);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      FUN_00086384(10);
      FUN_00066b24();
      uVar2 = FUN_000838dc(*(undefined4 *)(iVar4 + 0x34),1);
      return uVar2 & (int)uVar2 >> 0x1f;
    }
  }
  return 0xfffffff0;
}


