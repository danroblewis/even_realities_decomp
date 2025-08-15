/*
 * Function: handle_event_processing
 * Entry:    00017688
 * Prototype: undefined handle_event_processing()
 */


void handle_event_processing(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = *param_1;
  param_2 = *(ushort *)((int)param_1 + 6) | param_2;
  puVar5 = *(undefined4 **)(iVar1 + 8);
  if ((param_2 & 0x30) == 0x30) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "(flags & ((1 << 4) | (1 << 5))) != ((1 << 4) | (1 << 5))",
                 "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x3ca);
    DEBUG_PRINT2("\tPull Up and Pull Down should not be enabled simultaneously\n");
    uVar2 = 0x3ca;
  }
  else if ((param_2 & 0x30002) == 0x10002) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "!((flags & (1U << 16)) && !(flags & (1U << 17)) && (flags & (1 << 1)))",
                 "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x3ce);
    DEBUG_PRINT2(
                "\tInput cannot be enabled for \'Open Drain\', \'Open Source\' modes without Output\n"
                );
    uVar2 = 0x3ce;
  }
  else if ((param_2 & 6) == 4) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "(flags & (1 << 1)) != 0 || (flags & (1 << 2)) == 0",
                 "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x3d1);
    uVar2 = 0x3d1;
  }
  else {
    uVar4 = 1 << (uint)*(byte *)(param_1 + 1);
    if ((uVar4 & **(uint **)(iVar1 + 4)) != 0) {
      uVar3 = **(uint **)(iVar1 + 0x10);
      if ((int)(param_2 << 0x1f) < 0) {
        uVar3 = uVar3 | uVar4;
      }
      else {
        uVar3 = uVar3 & ~uVar4;
      }
      **(uint **)(iVar1 + 0x10) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001773a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)();
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "(cfg->port_pin_mask & (gpio_port_pins_t)(1UL << (pin))) != 0U",
                 "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x3e4);
    DEBUG_PRINT2("\tUnsupported pin\n");
    uVar2 = 0x3e4;
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",uVar2);
}


