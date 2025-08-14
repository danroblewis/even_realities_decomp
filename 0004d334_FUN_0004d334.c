/*
 * Function: FUN_0004d334
 * Entry:    0004d334
 * Prototype: undefined FUN_0004d334()
 */


/* WARNING: Removing unreachable block (ram,0x0004d34a) */

uint FUN_0004d334(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = &DAT_000882a0;
  iVar1 = FUN_0007ee2c(&DAT_2000a0dc);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar4 = 0;
    while( true ) {
      if (&DAT_000882b0 < piVar3) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","backend <= _log_backend_list_end",
                     "WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x126);
        DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
        FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x126);
      }
      if (&UNK_000882af < piVar3) break;
      if ((char)piVar3[3] != '\0') {
        if (*(code **)(*piVar3 + 0xc) != (code *)0x0) {
          (**(code **)(*piVar3 + 0xc))(piVar3);
        }
        if ((*(code **)(*piVar3 + 0x10) == (code *)0x0) ||
           (iVar1 = (**(code **)(*piVar3 + 0x10))(piVar3), iVar1 == 0)) {
          FUN_0004d8f8(piVar3,*(undefined4 *)piVar3[1],4);
        }
        else {
          uVar2 = uVar2 | 1 << (uVar4 & 0xff);
        }
        uVar4 = uVar4 + 1;
      }
      piVar3 = piVar3 + 4;
    }
    if (param_1 == 0) {
      return uVar2;
    }
    while (uVar2 != 0) {
      uVar2 = FUN_0004d2d0(uVar2);
      if (param_2 != 0) {
        get_schedule_timing(0x148,0);
      }
    }
  }
  return 0;
}


