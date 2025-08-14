/*
 * Function: FUN_000801c0
 * Entry:    000801c0
 * Prototype: undefined FUN_000801c0()
 */


undefined4 FUN_000801c0(int param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    if (param_3 == 0) {
      return 1;
    }
    if (param_2 != 0) {
      iVar2 = *(int *)(param_1 + 0x50);
      if (iVar2 != 0 || *(int *)(param_1 + 0x54) != 0) {
        iVar5 = *(int *)(param_1 + 0x44);
        *(int *)(param_1 + 0x50) = iVar2 + -1;
        *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1 + (uint)(iVar2 != 0);
        if (iVar5 != 0) {
          uVar4 = 0x10 - iVar5;
          iVar2 = iVar5 + 0x30 + param_1;
          if (param_3 < uVar4) {
            FUN_0007feaa(iVar2,param_3,param_2,param_3);
            *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + param_3;
            return 1;
          }
          FUN_0007feaa(iVar2,uVar4,param_2,uVar4);
          *(undefined4 *)(param_1 + 0x44) = 0;
          param_3 = (param_3 - 0x10) + iVar5;
          param_2 = param_2 + uVar4;
          pbVar3 = (byte *)(param_1 + -1);
          do {
            pbVar1 = pbVar3 + 1;
            *pbVar1 = *pbVar1 ^ pbVar3[0x31];
            pbVar3 = pbVar1;
          } while (pbVar1 != (byte *)(param_1 + 0xf));
          FUN_00080058(param_1,param_1,*(undefined4 *)(param_1 + 0x48));
        }
        for (; 0x10 < param_3; param_3 = param_3 - 0x10) {
          pbVar3 = (byte *)(param_1 + -1);
          pbVar1 = (byte *)(param_2 + -1);
          do {
            pbVar3 = pbVar3 + 1;
            pbVar1 = pbVar1 + 1;
            *pbVar3 = *pbVar3 ^ *pbVar1;
          } while (pbVar3 != (byte *)(param_1 + 0xf));
          FUN_00080058(param_1,param_1,*(undefined4 *)(param_1 + 0x48));
          param_2 = param_2 + 0x10;
        }
        if (param_3 == 0) {
          return 1;
        }
        FUN_0007feaa(param_1 + 0x30,param_3,param_2,param_3);
        *(uint *)(param_1 + 0x44) = param_3;
        return 1;
      }
    }
  }
  return 0;
}


