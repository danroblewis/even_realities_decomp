/*
 * Function: FUN_000639d4
 * Entry:    000639d4
 * Prototype: undefined FUN_000639d4()
 */


undefined4 FUN_000639d4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  iVar2 = check_driver_ready(*puVar5);
  if (iVar2 != 0) {
    if (puVar5[1] == 0) {
      return 0;
    }
    iVar2 = check_driver_ready();
    if (iVar2 != 0) {
      uVar7 = (uint)*(ushort *)((int)puVar5 + 10);
      iVar2 = puVar5[1];
      bVar1 = *(byte *)(puVar5 + 2);
      puVar5 = *(undefined4 **)(iVar2 + 8);
      if ((uVar7 & 0x30) == 0x30) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                     "(flags & ((1 << 4) | (1 << 5))) != ((1 << 4) | (1 << 5))",
                     "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x3ca);
        DEBUG_PRINT2("\tPull Up and Pull Down should not be enabled simultaneously\n");
        uVar3 = 0x3ca;
      }
      else if ((uVar7 & 6) == 4) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                     "(flags & (1 << 1)) != 0 || (flags & (1 << 2)) == 0",
                     "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x3d1);
        uVar3 = 0x3d1;
      }
      else {
        uVar6 = 1 << (uint)bVar1;
        if ((uVar6 & **(uint **)(iVar2 + 4)) != 0) {
          uVar4 = **(uint **)(iVar2 + 0x10);
          if ((int)(uVar7 << 0x1f) < 0) {
            uVar4 = uVar4 | uVar6;
          }
          else {
            uVar4 = uVar4 & ~uVar6;
          }
          **(uint **)(iVar2 + 0x10) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00063a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*(code *)*puVar5)(iVar2,(uint)bVar1,uVar7 | 0x400);
          return uVar3;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                     "(cfg->port_pin_mask & (gpio_port_pins_t)(1UL << (pin))) != 0U",
                     "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",0x3e4);
        DEBUG_PRINT2("\tUnsupported pin\n");
        uVar3 = 0x3e4;
      }
                    /* WARNING: Subroutine does not return */
      assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio.h",uVar3);
    }
  }
  return 0xffffffed;
}


