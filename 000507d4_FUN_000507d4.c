/*
 * Function: FUN_000507d4
 * Entry:    000507d4
 * Prototype: undefined FUN_000507d4()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000507d4(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 local_a8;
  char *local_a4;
  char *local_a0;
  char *local_9c;
  undefined4 local_98;
  char local_89;
  undefined1 auStack_88 [16];
  undefined4 local_78;
  char *local_74;
  uint local_6c;
  
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((param_3 & 0xff000000) != 0xff000000) {
LAB_00050818:
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","esf != ((void *)0)",
                 "WEST_TOPDIR/zephyr/arch/arm/core/aarch32/cortex_m/fault.c",0x458);
    DEBUG_PRINT2("\tESF could not be retrieved successfully. Shall never occur.\n");
    uVar1 = 0x458;
LAB_00050830:
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/arch/arm/core/aarch32/cortex_m/fault.c",uVar1);
  }
  if ((param_3 & 0xc) == 8) {
    local_74 = "SPSEL in thread mode does not indicate PSP";
    local_78 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_78);
    goto LAB_00050818;
  }
  bVar2 = (int)(param_3 << 0x1c) < 0;
  if (!bVar2) {
    param_2 = param_1;
  }
  if (param_2 == (undefined4 *)0x0) goto LAB_00050818;
  local_89 = '\0';
  switch(_DAT_e000ed04 & 0x1ff) {
  case 3:
    local_74 = "***** HARD FAULT *****";
    local_78 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_78);
    local_89 = '\0';
    if (_DAT_e000ed2c << 0x1e < 0) {
      local_74 = "  Bus fault on vector table read";
    }
    else {
      if (-1 < _DAT_e000ed2c) {
        if (-1 < _DAT_e000ed2c << 1) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                       "WEST_TOPDIR/zephyr/arch/arm/core/aarch32/cortex_m/fault.c",0x32e);
          DEBUG_PRINT2("\tHardFault without HFSR info Shall never occur\n");
          uVar1 = 0x32e;
          goto LAB_00050830;
        }
        local_78 = 2;
        local_74 = "  Fault escalation (see below)";
        FUN_00080780(&DAT_00088258,0x1040,&local_78);
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
        _DAT_e000ed14 = _DAT_e000ed14 & 0xfffffeff;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
        if (*(short *)(param_2[6] + -2) == -0x20fe) {
          local_98 = *param_2;
          local_9c = "ARCH_EXCEPT with reason %x\n";
          local_a0 = (char *)0x3;
          FUN_00080780(&DAT_00088258,0x1840,&local_a0);
          uVar1 = *param_2;
          goto LAB_0005090e;
        }
        if ((_DAT_e000ed28 & 0xff) == 0) {
          if ((_DAT_e000ed28 & 0xff00) == 0) {
            if (_DAT_e000ed28 < 0x10000) {
              DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                           "WEST_TOPDIR/zephyr/arch/arm/core/aarch32/cortex_m/fault.c",0x32a);
              DEBUG_PRINT2("\tFault escalation without FSR info\n");
              uVar1 = 0x32a;
              goto LAB_00050830;
            }
            goto switchD_0005084e_caseD_6;
          }
          uVar1 = 1;
          goto LAB_00050964;
        }
        uVar1 = 1;
        goto LAB_00050950;
      }
      local_74 = "  Debug event";
    }
    break;
  case 4:
    uVar1 = 0;
LAB_00050950:
    uVar1 = FUN_000503d8(uVar1,&local_89);
    goto LAB_0005090e;
  case 5:
    uVar1 = 0;
LAB_00050964:
    uVar1 = FUN_00050558(uVar1,&local_89);
    goto LAB_0005090e;
  case 6:
switchD_0005084e_caseD_6:
    uVar1 = FUN_000506ac();
    goto LAB_0005090e;
  default:
    local_a0 = "Reserved Exception (";
    if ((_DAT_e000ed04 & 0x1f0) != 0) {
      local_a0 = "Spurious interrupt (IRQ ";
    }
    local_9c = (char *)((_DAT_e000ed04 & 0x1ff) - 0x10);
    local_98 = CONCAT22(local_98._2_2_,0x200);
    local_a4 = "***** %s %d) *****";
    local_a8 = 0x1000004;
    FUN_00080780(&DAT_00088258,0x2440,&local_a8);
    goto LAB_00050898;
  case 0xc:
    local_74 = "***** Debug monitor exception *****";
  }
  local_78 = 2;
  local_89 = '\0';
  FUN_00080780(&DAT_00088258,0x1040,&local_78);
LAB_00050898:
  uVar1 = 0;
LAB_0005090e:
  if (local_89 == '\0') {
    memcpy(auStack_88,param_2,0x68);
    if (bVar2) {
      local_6c = local_6c & 0xfffffe00;
    }
    else if ((local_6c & 0x1ff) == 0) {
      local_6c = ~(~(local_6c >> 9) << 9);
    }
    FUN_0004ff6c(uVar1,auStack_88);
  }
  return;
}


