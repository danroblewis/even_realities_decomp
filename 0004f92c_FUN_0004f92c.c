/*
 * Function: FUN_0004f92c
 * Entry:    0004f92c
 * Prototype: undefined FUN_0004f92c()
 */


void FUN_0004f92c(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_38;
  char *local_34;
  char *pcStack_30;
  undefined *local_2c;
  char *local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  
  if (*(undefined ***)(param_1 + 4) != &PTR_s_power_manager_restrict_event_000fa9e4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x4f9e0);
    (*pcVar1)();
  }
  iVar3 = (int)(char)*(byte *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 8) < 2) {
    if (iVar3 < 3) {
      if (iVar3 + 1 < 0 == SCARRY4(iVar3,1)) {
        pcVar4 = (char *)(uint)*(byte *)(param_1 + 0xc);
        local_28 = pcVar4;
        if (pcVar4 < (char *)0x3) {
          local_28 = *(char **)(&UNK_0008ada0 + (int)pcVar4 * 4);
        }
        pcStack_30 = "power_manager_restrict_event";
        if ((char *)0x2 < pcVar4) {
          local_28 = "ALIVE";
        }
        local_2c = (&PTR_DAT_000faa2c)[*(uint *)(param_1 + 8)];
        local_18 = 0x3010200;
        _local_14 = CONCAT22(uStack_12,0x402);
        local_34 = "e:%s module \"%s\" restricts to %s";
        local_24 = 0x3010200;
        local_20 = 0x402;
        local_38 = 0x3000005;
        FUN_0004d944(&DAT_000880f0,0x34c0,&local_38,0);
        return;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","lvl >= POWER_MANAGER_LEVEL_ALIVE",
                   "WEST_TOPDIR/nrf/subsys/caf/events/power_manager_event.c",0x17);
      uVar2 = 0x17;
    }
    else {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","lvl <= POWER_MANAGER_LEVEL_MAX",
                   "WEST_TOPDIR/nrf/subsys/caf/events/power_manager_event.c",0x16);
      uVar2 = 0x16;
    }
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event->module_idx < module_count()",
                 "WEST_TOPDIR/nrf/subsys/caf/events/power_manager_event.c",0x15);
    uVar2 = 0x15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/nrf/subsys/caf/events/power_manager_event.c",uVar2);
}


