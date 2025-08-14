/*
 * Function: FUN_0004b2b0
 * Entry:    0004b2b0
 * Prototype: undefined FUN_0004b2b0()
 */


int FUN_0004b2b0(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = *param_1;
  uVar4 = *(uint *)(iVar7 + 8);
  if (uVar4 < 0x8000) {
    uVar3 = 4;
  }
  else {
    uVar3 = 8;
  }
  uVar5 = param_2 - 1 & param_2;
  if (uVar5 == 0) {
    if (param_2 <= uVar3) {
      iVar7 = *param_1;
      if ((param_3 != 0) && (param_3 >> 3 < *(uint *)(iVar7 + 8))) {
        uVar4 = FUN_0007de70();
        iVar6 = FUN_0007df24(iVar7,uVar4);
        if (iVar6 != 0) {
          uVar3 = FUN_0007de18(iVar7,iVar6);
          if (uVar4 < uVar3) {
            FUN_0007df98(iVar7,iVar6,uVar4 + iVar6);
            FUN_0007e022(iVar7,uVar4 + iVar6);
          }
          iVar2 = FUN_0007de24(iVar7,iVar6,1);
          if (*(uint *)(iVar7 + 8) < 0x8000) {
            iVar7 = 4;
          }
          else {
            iVar7 = 8;
          }
          return iVar2 + iVar7 + iVar6 * 8;
        }
      }
      return 0;
    }
    uVar8 = 0;
    uVar5 = param_2;
  }
  else {
    uVar8 = -param_2 & param_2;
    if (uVar8 <= uVar3) {
      uVar3 = uVar8;
    }
    if ((uVar5 - 1 & uVar5) != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","(align & (align - 1)) == 0",
                   "WEST_TOPDIR/zephyr/lib/os/heap.c",0x144,param_4);
      DEBUG_PRINT2("\talign must be a power of 2\n");
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/zephyr/lib/os/heap.c",0x144);
    }
  }
  if ((param_3 != 0) && (param_3 >> 3 < uVar4)) {
    uVar1 = FUN_0007de70(uVar4,(param_3 + uVar5) - uVar3);
    uVar4 = FUN_0007df24(iVar7,uVar1);
    if (uVar4 != 0) {
      if (*(uint *)(iVar7 + 8) < 0x8000) {
        iVar6 = 4;
      }
      else {
        iVar6 = 8;
      }
      iVar6 = uVar5 * ((uVar8 + uVar4 * 8 + iVar6 + iVar7 + (uVar5 - 1)) / uVar5) - uVar8;
      uVar5 = FUN_0007de5c(iVar7,iVar6);
      uVar3 = (int)((param_3 + iVar6 + 7 & 0xfffffff8) - iVar7) >> 3;
      if (uVar4 < uVar5) {
        FUN_0007df98(iVar7,uVar4,uVar5);
        FUN_0007e022(iVar7,uVar4);
      }
      iVar2 = FUN_0007de18(iVar7,uVar5);
      if (uVar3 < iVar2 + uVar5) {
        FUN_0007df98(iVar7,uVar5,uVar3);
        FUN_0007e022(iVar7,uVar3);
      }
      FUN_0007de24(iVar7,uVar5,1);
      return iVar6;
    }
  }
  return 0;
}


