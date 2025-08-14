/*
 * Function: FUN_00052c40
 * Entry:    00052c40
 * Prototype: undefined FUN_00052c40()
 */


undefined4 FUN_00052c40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = param_2;
  iVar1 = FUN_0008638c(&DAT_00087b90);
  if (iVar1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","device_is_ready(entropy_dev)",
                 "WEST_TOPDIR/zephyr/subsys/random/rand32_entropy_device.c",0x15,param_1);
    DEBUG_PRINT2("\tEntropy device %s not ready\n","crypto@50844000");
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/random/rand32_entropy_device.c",0x15);
  }
  iVar1 = FUN_00052bf8(&local_c);
  if (iVar1 < 0) {
    local_c = FUN_00084c76();
  }
  return local_c;
}


