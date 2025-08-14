/*
 * Function: FUN_0004b908
 * Entry:    0004b908
 * Prototype: undefined FUN_0004b908()
 */


uint FUN_0004b908(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  uVar3 = FUN_0007e1c6();
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  puVar8 = param_1 + 5;
  uVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar9 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar4 = FUN_00072040(puVar8);
  if (iVar4 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",puVar8);
    uVar9 = 0x72;
  }
  else {
    FUN_00072078(puVar8);
    uVar1 = *(ushort *)(param_1 + 7);
    uVar3 = uVar1 & 7;
    if (*(short *)((int)param_1 + 0x1e) == -1) {
      uVar7 = 0xfffffff5;
LAB_0004b9a6:
      iVar4 = 0;
    }
    else {
      uVar7 = uVar3;
      if (uVar3 != 2) {
        switch(uVar3) {
        case 0:
        case 4:
        case 6:
          *param_2 = 0;
          if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
            *param_1 = param_2;
            param_1[1] = param_2;
          }
          else {
            *(undefined4 *)param_1[1] = param_2;
            param_1[1] = param_2;
          }
          if ((uVar1 & 7) == 0) {
            FUN_0004b4fc(param_1,2,uVar9);
            return uVar3;
          }
          break;
        case 1:
          uVar7 = 0xfffffffb;
          break;
        default:
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","state == (1UL << (0))",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x1c8);
          uVar9 = 0x1c8;
          pcVar5 = "WEST_TOPDIR/zephyr/lib/os/onoff.c";
          goto LAB_0004b9d2;
        case 5:
          uVar7 = 0xffffff7a;
        }
        goto LAB_0004b9a6;
      }
      *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
    }
    iVar6 = FUN_0007205c(puVar8);
    if (iVar6 != 0) {
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar9);
      }
      InstructionSynchronizationBarrier(0xf);
      if (iVar4 != 0) {
        FUN_0007e1e6(param_1,param_2,uVar3,0);
      }
      return uVar7;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",puVar8);
    uVar9 = 0xf0;
  }
  pcVar5 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_0004b9d2:
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar5,uVar9);
}


