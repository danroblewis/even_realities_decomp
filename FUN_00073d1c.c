/*
 * Function: FUN_00073d1c
 * Entry:    00073d1c
 * Prototype: undefined FUN_00073d1c()
 */


void FUN_00073d1c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(char *)((int)param_1 + 0xd) < '\0') {
    *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) & 0x7f;
    FUN_00073cdc(&DMIC_BUFFER_POINTER,param_1);
  }
  *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 0x80;
  if (param_1 == (undefined4 *)&DAT_20006720) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!z_is_idle_thread_object(thread)",
                 "WEST_TOPDIR/zephyr/kernel/sched.c",0xc1);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/kernel/sched.c",0xc1);
  }
  puVar2 = DMIC_BUFFER_POINTER;
  if ((undefined4 **)DMIC_BUFFER_POINTER == &DMIC_BUFFER_POINTER) {
    puVar2 = (undefined4 *)0x0;
  }
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if ((*(char *)((int)param_1 + 0xe) != *(char *)((int)puVar2 + 0xe)) &&
       (*(char *)((int)param_1 + 0xe) < *(char *)((int)puVar2 + 0xe))) {
      puVar1 = (undefined4 *)puVar2[1];
      *param_1 = puVar2;
      param_1[1] = puVar1;
      *puVar1 = param_1;
      puVar2[1] = param_1;
      goto LAB_00073d90;
    }
    if (DAT_2000b468 == puVar2) break;
  }
  *param_1 = &DMIC_BUFFER_POINTER;
  param_1[1] = DAT_2000b468;
  *DAT_2000b468 = param_1;
  DAT_2000b468 = param_1;
LAB_00073d90:
  FUN_000737d8(DMIC_BUFFER_SIZE == param_1);
  return;
}


