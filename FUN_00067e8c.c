/*
 * Function: FUN_00067e8c
 * Entry:    00067e8c
 * Prototype: undefined FUN_00067e8c()
 */


undefined4 FUN_00067e8c(int *param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_2 == (byte *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_channel_id",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",0xa2);
    uVar6 = 0xa2;
  }
  else {
    if ((&DAT_2000b41c)[(uint)*(byte *)(param_1 + 1) * 8] == '\x01') {
      uVar6 = 0;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        uVar6 = getBasePriority();
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if ((bVar3) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar1 = (uint)*(byte *)(param_1 + 1) * 8;
      bVar2 = (&DAT_2000b41d)[iVar1];
      if (bVar2 < 8) {
        *param_2 = bVar2;
        (&DAT_2000b41d)[iVar1] = bVar2 + 1;
        uVar5 = 0xbad0000;
        *(uint *)(*param_1 + 0x508) = 1 << (uint)bVar2 | *(uint *)(*param_1 + 0x508);
      }
      else {
        uVar5 = 0xbad0002;
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(uVar6);
      }
      InstructionSynchronizationBarrier(0xf);
      return uVar5;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_cb->state == NRFX_DRV_STATE_INITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",0xa3);
    uVar6 = 0xa3;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",uVar6);
}


