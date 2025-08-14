/*
 * Function: FUN_0005010c
 * Entry:    0005010c
 * Prototype: undefined FUN_0005010c()
 */


void FUN_0005010c(undefined4 param_1,int param_2,undefined1 *param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  
  if (param_2 + 1U < 8) {
    uVar2 = (uint)(char)param_1;
    bVar4 = -1 < (int)uVar2;
    if (bVar4) {
      uVar2 = uVar2 + 0xe0000000;
    }
    else {
      param_3 = &DAT_e000ed14;
    }
    cVar1 = (char)(param_2 + 1U) * ' ';
    if (bVar4) {
      puVar3 = &UNK_0000e100 + uVar2;
      *(char *)(uVar2 + 0xe400) = cVar1;
    }
    else {
      puVar3 = (undefined *)(uVar2 & 0xf);
    }
    if (!bVar4) {
      param_3[(int)puVar3] = cVar1;
    }
    return;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","prio <= ((1UL << (3)) - 1)",
               "WEST_TOPDIR/zephyr/arch/arm/core/aarch32/irq_manage.c",0x5c,param_4);
  DEBUG_PRINT2("\tinvalid priority %d for %d irq! values must be less than %lu\n\n",param_2,param_1,
               7);
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/arch/arm/core/aarch32/irq_manage.c",0x5c);
}


