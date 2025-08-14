/*
 * Function: FUN_00070e28
 * Entry:    00070e28
 * Prototype: undefined FUN_00070e28(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int FUN_00070e28(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    iVar1 = -0x16;
  }
  else {
    if ((*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) &&
       (UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(param_1 + 0x20),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00070e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    if (*(uint *)(param_1 + 0x28) < param_3) {
      iVar1 = -0xbc0;
    }
    else {
      for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
        iVar5 = *(int *)(param_1 + 0x2c);
        iVar1 = iVar5 + uVar4 * 0x18;
        if (*(int *)(param_1 + 0x18) == 0) {
          piVar2 = *(int **)(iVar1 + 0x14);
          uVar3 = *(int *)(iVar1 + 4) - *piVar2;
          if ((uint)piVar2[2] <= uVar3) {
            uVar3 = 0xffffffff;
          }
          FUN_0008557c(piVar2,uVar3,0,
                       (*(int *)(iVar1 + 8) + (uint)*(ushort *)(iVar1 + 0xc) * 0x12 + 5 &
                       -*(int *)(iVar1 + 8)) + (uint)*(ushort *)(iVar1 + 0xc) * 8 + 6);
        }
        iVar1 = FUN_00085622(param_1,uVar4 & 0xffff,*(undefined4 *)(param_4 + uVar4 * 4),iVar1 + 4,
                             *(undefined4 *)(param_5 + uVar4 * 4),
                             *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x28),
                             *(undefined4 *)(iVar5 + uVar4 * 0x18));
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}


