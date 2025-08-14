/*
 * Function: FUN_00065d8c
 * Entry:    00065d8c
 * Prototype: undefined FUN_00065d8c()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065d8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_config",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x46,param_4);
    uVar1 = 0x46;
  }
  else {
    if (DAT_2000b328 == '\x01') {
      iVar4 = 0;
      do {
        iVar5 = iVar4 * 4;
        iVar2 = iVar4 + 0x144;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(iVar2 * 4 + 0x5002a000) = *(undefined4 *)(param_1 + iVar5);
      } while (iVar4 != 0x10);
      iVar4 = 0;
      puVar3 = (undefined4 *)(param_1 + 0x3c);
      do {
        iVar5 = iVar4 + 0x164;
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(iVar5 * 4 + 0x5002a000) = *puVar3;
      } while (iVar4 != 0x10);
      _DAT_5002a304 = *(undefined4 *)(param_1 + 0x80);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state == NRFX_DRV_STATE_INITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x47,param_4);
    uVar1 = 0x47;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",uVar1);
}


