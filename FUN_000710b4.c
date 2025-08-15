/*
 * Function: FUN_000710b4
 * Entry:    000710b4
 * Prototype: undefined FUN_000710b4(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
FUN_000710b4(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  
  iVar5 = param_4 + -0x10;
  uVar6 = *(uint *)(param_4 + -8);
  local_28 = 0;
  local_22 = 0;
  piVar1 = *(int **)(param_1 + 0xac);
  local_24 = (undefined2)param_5;
  uVar3 = iVar5 - *piVar1;
  if ((uint)piVar1[2] <= uVar3) {
    uVar3 = 0xffffffff;
  }
  local_30 = param_2;
  uStack_2c = param_3;
  iVar2 = FUN_00085508(piVar1,uVar3,&local_30);
  if (iVar2 == 0x10) {
    FUN_000859b6(param_1 + 0x58);
    if (*(int *)(*(int *)(param_1 + 0xa0) + 0x18) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x94);
    }
    else {
      uVar4 = FUN_000857a8(*(undefined4 *)(param_1 + 0xa8),uVar6 & 0xffff);
      if (*(int *)(*(int *)(param_1 + 0xa0) + 0x18) != 0) goto LAB_00071166;
    }
    local_38 = iVar5;
    uStack_34 = uVar4;
    iVar5 = FUN_0008567c(*(undefined4 *)(param_1 + 0xa8),&local_38,1,0,iVar5);
    if (iVar5 == 0) {
LAB_00071166:
      FUN_000857e0(*(undefined4 *)(param_1 + 0xa8));
      z_spin_lock_valid(param_1 + 0x58);
      return param_5;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","status == 0",
                 "WEST_TOPDIR/modules/lib/open-amp/open-amp/lib/rpmsg/rpmsg_virtio.c",0x1bc);
    uVar4 = 0x1bc;
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","status == sizeof(rp_hdr)",
                 "WEST_TOPDIR/modules/lib/open-amp/open-amp/lib/rpmsg/rpmsg_virtio.c",0x1af);
    uVar4 = 0x1af;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/modules/lib/open-amp/open-amp/lib/rpmsg/rpmsg_virtio.c",uVar4);
}


