/*
 * Function: FUN_00056080
 * Entry:    00056080
 * Prototype: undefined FUN_00056080()
 */


void FUN_00056080(undefined4 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",&DAT_000f3aa8,
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x46);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x46);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_00086502(&DAT_20003a60);
                    /* WARNING: Could not recover jumptable at 0x000560ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,0xffffff92);
  return;
}


