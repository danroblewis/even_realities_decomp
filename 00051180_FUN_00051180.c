/*
 * Function: FUN_00051180
 * Entry:    00051180
 * Prototype: undefined FUN_00051180()
 */


void FUN_00051180(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  DEBUG_PRINT("abort()\n");
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  software_interrupt(2);
  uVar6 = 0x50;
  iVar5 = 0;
  puVar4 = &DAT_2000a80c;
  uVar3 = extraout_r3;
  do {
    iVar2 = FUN_000864c2(puVar4);
    if (iVar2 != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == 0",
                   "WEST_TOPDIR/zephyr/lib/posix/barrier.c",0xcd,uVar3,uVar6);
      uVar3 = 0xcd;
LAB_000511b4:
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/zephyr/lib/posix/barrier.c",uVar3);
    }
    iVar2 = FUN_00086688(puVar4 + 0x14);
    if (iVar2 != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == 0",
                   "WEST_TOPDIR/zephyr/lib/posix/barrier.c",0xcf,uVar3,uVar6);
      uVar3 = 0xcf;
      goto LAB_000511b4;
    }
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 0x24;
    if (iVar5 == 5) {
                    /* WARNING: Could not recover jumptable at 0x000511de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)0x51189)();
      return;
    }
  } while( true );
}


