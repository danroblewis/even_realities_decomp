/*
 * Function: FUN_00073840
 * Entry:    00073840
 * Prototype: undefined FUN_00073840()
 */


void FUN_00073840(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (((*(char *)((int)param_1 + 0xd) < '\0') || ((*(byte *)((int)param_1 + 0xd) & 0x1f) != 0)) ||
     (param_1[6] != 0)) {
    return;
  }
  *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 0x80;
  if (param_1 == (undefined4 *)&DAT_20006720) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!z_is_idle_thread_object(thread)",
                 "WEST_TOPDIR/zephyr/kernel/sched.c",0xc1);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/kernel/sched.c",0xc1);
  }
  puVar2 = (undefined4 *)0x0;
  if ((undefined4 **)DAT_2000b464 != &DAT_2000b464) {
    puVar2 = DAT_2000b464;
  }
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if ((*(char *)((int)param_1 + 0xe) != *(char *)((int)puVar2 + 0xe)) &&
       (*(char *)((int)param_1 + 0xe) < *(char *)((int)puVar2 + 0xe))) {
      puVar1 = (undefined4 *)puVar2[1];
      *param_1 = puVar2;
      param_1[1] = puVar1;
      *puVar1 = param_1;
      puVar2[1] = param_1;
      goto LAB_000738ac;
    }
    if (puVar2 == DAT_2000b468) break;
  }
  *param_1 = &DAT_2000b464;
  param_1[1] = DAT_2000b468;
  *DAT_2000b468 = param_1;
  DAT_2000b468 = param_1;
LAB_000738ac:
  FUN_000737d8(0);
  return;
}


