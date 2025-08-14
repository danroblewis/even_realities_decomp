/*
 * Function: ext_flash_write
 * Entry:    0002e440
 * Prototype: undefined ext_flash_write()
 */


int ext_flash_write(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  
  iVar1 = (uint)*(ushort *)(param_1 + 0x105c) << 0x1b;
  if (-1 < iVar1) {
    FUN_0007c080();
    iVar1 = extraout_r1;
  }
  if (DAT_20007b68 == 0) {
    if (-1 < (int)((uint)*(ushort *)(param_1 + 0x105c) << 0x1b)) {
      FUN_0007c082();
    }
  }
  else {
    resource_mutex_acquire(&DAT_20007b54,iVar1,0xffffffff,0xffffffff);
    iVar1 = (**(code **)(*(int *)(DAT_20007b68 + 8) + 4))(DAT_20007b68,param_2,param_3,param_4);
    mutex_unlock(&DAT_20007b54);
    if (-1 < (int)((uint)*(ushort *)(param_1 + 0x105c) << 0x1b)) {
      FUN_0007c082();
    }
    if (iVar1 != 0) {
      if (LOG_LEVEL < 1) {
        return iVar1;
      }
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return iVar1;
      }
      DEBUG_PRINT("%s(): flash write fail!\n","ext_flash_write");
      return iVar1;
    }
  }
  return 0;
}


