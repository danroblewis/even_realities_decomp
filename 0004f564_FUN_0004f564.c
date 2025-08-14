/*
 * Function: FUN_0004f564
 * Entry:    0004f564
 * Prototype: undefined FUN_0004f564()
 */


void FUN_0004f564(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000868c2();
  if (iVar1 == 0) {
    FUN_0004d944(&DAT_000880f0,0x1040,&stack0xfffffff0,0,param_1,param_2,param_3,param_4);
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                 "WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c",0x7b);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c",0x7b);
  }
  return;
}


