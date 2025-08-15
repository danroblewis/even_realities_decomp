/*
 * Function: FUN_000737d8
 * Entry:    000737d8
 * Prototype: undefined FUN_000737d8()
 */


void FUN_000737d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  if (((undefined4 **)DMIC_BUFFER_POINTER == &DMIC_BUFFER_POINTER) ||
     (puVar1 = DMIC_BUFFER_POINTER, DMIC_BUFFER_POINTER == (undefined4 *)0x0)) {
    puVar1 = DAT_2000b454;
  }
  if (param_1 == 0) {
    if (DMIC_BUFFER_SIZE == (undefined4 *)0x0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","_kernel.cpus[0].current != ((void *)0)",
                   "WEST_TOPDIR/zephyr/kernel/sched.c",0x8f,param_4);
      DEBUG_PRINT2(&DAT_000f53ff);
                    /* WARNING: Subroutine does not return */
      assertion_failure("WEST_TOPDIR/zephyr/kernel/sched.c",0x8f);
    }
    if ((((*(byte *)((int)DMIC_BUFFER_SIZE + 0xd) & 0x1f) == 0) && (puVar1[6] == 0)) &&
       (0x7f < *(ushort *)((int)DMIC_BUFFER_SIZE + 0xe))) {
      DAT_2000b460 = DMIC_BUFFER_SIZE;
      return;
    }
  }
  if (puVar1 != DMIC_BUFFER_SIZE) {
    FUN_00073788(puVar1);
  }
  DAT_2000b460 = puVar1;
  return;
}


