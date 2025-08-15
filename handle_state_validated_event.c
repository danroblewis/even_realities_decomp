/*
 * Function: handle_state_validated_event
 * Entry:    00017980
 * Prototype: undefined handle_state_validated_event()
 */


int handle_state_validated_event(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint local_14;
  undefined4 uStack_10;
  
  uVar2 = 1 << (param_1 & 0xff);
  local_14 = param_2;
  uStack_10 = param_3;
  if (uVar2 != 0) {
    iVar1 = FUN_00083b1a(&DAT_00087b60,&local_14,param_3,(undefined *)0x83b1b,param_1);
    if (iVar1 == 0) {
      if (((local_14 ^ DAT_2000b178) & uVar2) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
    }
    return iVar1;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
               "(cfg->port_pin_mask & (gpio_port_pins_t)(1UL << (pin))) != 0U",
               "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x5f6);
  DEBUG_PRINT2("\tUnsupported pin\n");
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x5f6);
}


