/*
 * Function: FUN_0004d6ec
 * Entry:    0004d6ec
 * Prototype: undefined FUN_0004d6ec()
 */


/* WARNING: Removing unreachable block (ram,0x0004d6fa) */

void FUN_0004d6ec(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  iVar1 = FUN_0004d334(0);
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
    uVar7 = 0xffffffff;
  }
  else {
    uVar6 = 0x667;
    uVar7 = 0;
  }
  DAT_2000a0d0 = FUN_000748ac();
  if ((DAT_2000a0d0 != 0) && (9 < DAT_2000a0d8)) {
    z_spin_lock_valid(&DAT_200039f8);
  }
  iVar2 = 0;
  do {
    do {
      iVar4 = iVar2;
      if ((iVar1 != 0) && (iVar1 = FUN_0004d2d0(iVar1), iVar1 == 0)) {
        uVar6 = 0xffffffff;
        uVar7 = 0xffffffff;
      }
      uVar8 = FUN_0004d594();
      uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
      iVar2 = (int)uVar8;
    } while (iVar2 != 0);
    if (iVar4 != 0) {
      piVar5 = &DAT_000882a0;
      while( true ) {
        if (&DAT_000882b0 < piVar5) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","backend <= _log_backend_list_end",
                       "WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x350);
          DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
          FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x350);
        }
        if (&UNK_000882af < piVar5) break;
        if (*(code **)(*piVar5 + 0x18) != (code *)0x0) {
          (**(code **)(*piVar5 + 0x18))(piVar5,0);
          uVar3 = extraout_r1;
        }
        piVar5 = piVar5 + 4;
      }
    }
    FUN_00072908(&DAT_200039f8,uVar3,uVar6,uVar7);
  } while( true );
}


