/*
 * Function: FUN_0005eeb4
 * Entry:    0005eeb4
 * Prototype: undefined FUN_0005eeb4()
 */


int FUN_0005eeb4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_r1;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint local_24;
  
  local_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  local_24 = param_2;
  FUN_0008669c(&local_30);
  uVar4 = uStack_2c;
  iVar7 = local_30;
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","pool","WEST_TOPDIR/zephyr/subsys/net/buf.c",0xf8);
    uVar8 = 0xf8;
LAB_0005eeda:
    pcVar5 = "WEST_TOPDIR/zephyr/subsys/net/buf.c";
  }
  else {
    iVar9 = param_1 + 0x1c;
    uVar8 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar8 = getBasePriority();
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar6 = FUN_00072040(iVar9);
    if (iVar6 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",iVar9);
      uVar8 = 0x72;
    }
    else {
      FUN_00072078(iVar9);
      if (*(ushort *)(param_1 + 0x22) == 0) {
        uVar11 = FUN_0007205c(iVar9);
        if ((int)uVar11 != 0) {
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            setBasePriority(uVar8);
          }
          InstructionSynchronizationBarrier(0xf);
          uVar11 = FUN_000727ac(param_1,(int)((ulonglong)uVar11 >> 0x20),param_3,param_4);
          if ((int)uVar11 == 0) {
            return 0;
          }
          goto LAB_0005ef60;
        }
      }
      else if ((*(ushort *)(param_1 + 0x22) < *(ushort *)(param_1 + 0x20)) &&
              (iVar6 = FUN_000727ac(param_1,extraout_r1,0,0), iVar6 != 0)) {
        uVar10 = FUN_0007205c(iVar9);
        uVar11 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),iVar6);
        if ((int)uVar10 != 0) {
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            setBasePriority(uVar8);
          }
          InstructionSynchronizationBarrier(0xf);
LAB_0005ef60:
          uVar3 = local_24;
          iVar9 = (int)uVar11;
          if (local_24 == 0) {
            *(undefined4 *)(iVar9 + 0x14) = 0;
LAB_0005f02e:
            *(undefined4 *)(iVar9 + 4) = 0;
            *(undefined2 *)(iVar9 + 8) = 1;
            *(undefined2 *)(iVar9 + 0x10) = 0;
            *(short *)(iVar9 + 0x12) = (short)local_24;
            *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar9 + 0x14);
            return iVar9;
          }
          FUN_000866e4(&local_30,(int)((ulonglong)uVar11 >> 0x20),iVar7,uVar4);
          iVar7 = (**(code **)**(undefined4 **)(&DAT_20003aa8 + (uint)*(byte *)(iVar9 + 10) * 0x34))
                            (iVar9,&local_24,local_30,uStack_2c);
          *(int *)(iVar9 + 0x14) = iVar7;
          if (iVar7 == 0) {
            FUN_00086518(&DAT_20003a7c + (uint)*(byte *)(iVar9 + 10) * 0x34,iVar9);
            return 0;
          }
          if (uVar3 <= local_24) goto LAB_0005f02e;
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","req_size <= size",
                       "WEST_TOPDIR/zephyr/subsys/net/buf.c",0x14f);
          DEBUG_PRINT2(&DAT_000f53ff);
          uVar8 = 0x14f;
          goto LAB_0005eeda;
        }
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0x22);
        *(ushort *)(param_1 + 0x22) = uVar1 - 1;
        uVar11 = FUN_0007205c(iVar9);
        if ((int)uVar11 != 0) {
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            setBasePriority(uVar8);
          }
          InstructionSynchronizationBarrier(0xf);
          iVar9 = ((uint)*(ushort *)(param_1 + 0x20) - (uint)uVar1) *
                  (*(byte *)(param_1 + 0x24) + 0x1b & 0xfffffffc) + *(int *)(param_1 + 0x30);
          uVar11 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),iVar9);
          *(char *)(iVar9 + 10) = (char)(param_1 + -0x20003a7c >> 2) * -0x3b;
          *(undefined1 *)(iVar9 + 0xb) = *(undefined1 *)(param_1 + 0x24);
          goto LAB_0005ef60;
        }
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
      DEBUG_PRINT2("\tNot my spinlock %p\n",iVar9);
      uVar8 = 0xf0;
    }
    pcVar5 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar5,uVar8);
}


