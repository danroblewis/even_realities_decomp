/*
 * Function: FUN_0004c418
 * Entry:    0004c418
 * Prototype: undefined FUN_0004c418()
 */


void FUN_0004c418(int param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  pcVar4 = *(code **)(*(int *)(param_1 + 8) + 0x10);
  if ((pcVar4 == (code *)0x0) ||
     (iVar2 = (*pcVar4)(param_1,param_2,0,pcVar4,param_1,param_2,param_3), iVar2 != 0)) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == 0",
                 "WEST_TOPDIR/zephyr/soc/arm/nordic_nrf/nrf53/sync_rtc.c",0xcb);
    uVar3 = 0xcb;
    pcVar1 = "WEST_TOPDIR/zephyr/soc/arm/nordic_nrf/nrf53/sync_rtc.c";
  }
  else {
    uVar6 = (param_3 << 0x10) >> 0x18;
    iVar2 = FUN_000635d8(uVar6);
    uVar7 = param_3 & 0xff;
    FUN_0004c278(uVar7,uVar6,param_3 >> 0x18,0);
    uVar3 = FUN_00063570(uVar6);
    uVar5 = (param_3 << 8) >> 0x18;
    if (uVar5 < 0x10) {
      *(uint *)((uVar5 & 0x3f) * 4 + 0x5002a080) = uVar7 | 0x80000000;
      FUN_00064f48(uVar7,uVar3);
      FUN_00063778(uVar6,extraout_r1,(iVar2 + 0x32) * 2,0,&LAB_0004c38c_1,param_3);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","index < 16",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_ipc.h",0x1e1);
    uVar3 = 0x1e1;
    pcVar1 = "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_ipc.h";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar1,uVar3);
}


