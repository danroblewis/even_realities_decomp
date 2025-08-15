/*
 * Function: manage_device_driver_states
 * Entry:    000620cc
 * Prototype: undefined manage_device_driver_states()
 */


int manage_device_driver_states(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar6 = iVar5 + 0x28;
  do {
    if (*(int *)(iVar5 + 4) != 0) {
      iVar2 = check_driver_ready();
      if (iVar2 == 0) {
        return -0x13;
      }
      uVar7 = (uint)*(ushort *)(iVar5 + 10);
      iVar2 = *(int *)(iVar5 + 4);
      bVar1 = *(byte *)(iVar5 + 8);
      puVar8 = *(undefined4 **)(iVar2 + 8);
      if ((uVar7 & 0x30) == 0x30) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                     "(flags & ((1 << 4) | (1 << 5))) != ((1 << 4) | (1 << 5))",
                     "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x3ca);
        DEBUG_PRINT2("\tPull Up and Pull Down should not be enabled simultaneously\n");
        uVar3 = 0x3ca;
LAB_00062124:
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",uVar3);
      }
      if ((uVar7 & 6) == 4) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                     "(flags & (1 << 1)) != 0 || (flags & (1 << 2)) == 0",
                     "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x3d1);
        uVar3 = 0x3d1;
        goto LAB_00062124;
      }
      uVar9 = 1 << (uint)bVar1;
      if ((uVar9 & **(uint **)(iVar2 + 4)) == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                     "(cfg->port_pin_mask & (gpio_port_pins_t)(1UL << (pin))) != 0U",
                     "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x3e4);
        DEBUG_PRINT2("\tUnsupported pin\n");
        uVar3 = 0x3e4;
        goto LAB_00062124;
      }
      uVar4 = **(uint **)(iVar2 + 0x10);
      if ((int)(uVar7 << 0x1f) < 0) {
        uVar9 = uVar9 | uVar4;
      }
      else {
        uVar9 = uVar4 & ~uVar9;
      }
      **(uint **)(iVar2 + 0x10) = uVar9;
      iVar2 = (*(code *)*puVar8)(iVar2,(uint)bVar1,uVar7 | 0x20000);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar5 = iVar5 + 8;
    if (iVar6 == iVar5) {
      return 0;
    }
  } while( true );
}


