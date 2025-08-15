/*
 * Function: handle_validated_event
 * Entry:    000177c4
 * Prototype: undefined handle_validated_event()
 */


int handle_validated_event(int param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint local_c;
  
  uVar3 = 1 << (param_2 & 0xff);
  local_c = param_2;
  if ((uVar3 & **(uint **)(param_1 + 4)) != 0) {
    pcVar2 = *(code **)(*(int *)(param_1 + 8) + 4);
    iVar1 = (*pcVar2)(param_1,&local_c,**(uint **)(param_1 + 4),pcVar2,param_1);
    if (iVar1 == 0) {
      if ((uVar3 & local_c) == 0) {
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
               "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x5d1);
  DEBUG_PRINT2("\tUnsupported pin\n");
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x5d1);
}


