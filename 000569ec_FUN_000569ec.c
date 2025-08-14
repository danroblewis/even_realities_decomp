/*
 * Function: FUN_000569ec
 * Entry:    000569ec
 * Prototype: undefined FUN_000569ec()
 */


int FUN_000569ec(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  
  iVar1 = FUN_00086406();
  if (iVar1 != 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!k_is_in_isr()",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x55f);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x55f);
  }
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_20003a7c;
  }
  iVar1 = FUN_000836de(param_1,&DAT_20003a7c,param_3,param_4);
  if (iVar1 == 0) {
    local_1c = "Unable to allocate buffer within timeout";
    local_20 = 2;
    FUN_000813ca(&DAT_00088108,0x1080,&local_20);
  }
  else {
    FUN_0005f4d4(iVar1 + 0xc,param_2 + 5);
  }
  return iVar1;
}


