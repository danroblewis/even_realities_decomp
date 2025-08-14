/*
 * Function: FUN_0004f860
 * Entry:    0004f860
 * Prototype: undefined FUN_0004f860()
 */


void FUN_0004f860(int param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 local_38;
  char *local_34;
  char *pcStack_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  
  if (*(undefined **)(param_1 + 4) != &DAT_000fa9b4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x4f8fa);
    (*pcVar1)();
  }
  if (*(byte *)(param_1 + 0xc) < 4) {
    local_28 = *(int *)(&DAT_0008ad90 + (uint)*(byte *)(param_1 + 0xc) * 4);
    if (local_28 != 0) {
      pcStack_30 = "module_state_event";
      if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
        local_2c = **(undefined4 **)(param_1 + 8);
        local_18 = 0x3010200;
        _local_14 = CONCAT22(uStack_12,0x402);
        local_34 = "e:%s module:%s state:%s";
        local_24 = 0x3010200;
        local_20 = 0x402;
        local_38 = 0x3000005;
        FUN_0004d944(&DAT_000880f0,0x34c0,&local_38,0);
        return;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","id",
                   "WEST_TOPDIR/nrf/include/caf/events/module_state_event.h",0x51);
      uVar3 = 0x51;
      pcVar2 = "WEST_TOPDIR/nrf/include/caf/events/module_state_event.h";
      goto LAB_0004f884;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","state_name[event->state] != ((void *)0)",
                 "WEST_TOPDIR/nrf/subsys/caf/events/module_state_event.c",0x1d);
    uVar3 = 0x1d;
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event->state < MODULE_STATE_COUNT",
                 "WEST_TOPDIR/nrf/subsys/caf/events/module_state_event.c",0x1c);
    uVar3 = 0x1c;
  }
  pcVar2 = "WEST_TOPDIR/nrf/subsys/caf/events/module_state_event.c";
LAB_0004f884:
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar2,uVar3);
}


