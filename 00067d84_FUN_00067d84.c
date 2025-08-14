/*
 * Function: FUN_00067d84
 * Entry:    00067d84
 * Prototype: undefined FUN_00067d84()
 */


void FUN_00067d84(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = (uint)param_2[1] >> 0x11;
  uVar4 = FUN_0000e244(param_2[1] << 0xf,uVar3,1000,0);
  if (999 < uVar3) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","ticks <= (0xffffffffUL)",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",0x3f);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_wdt.c",0x3f);
  }
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x50c) = *param_2;
  *(int *)(iVar2 + 0x504) = (int)uVar4;
  bVar1 = *(byte *)(param_1 + 1);
  if ((&DAT_2000b420)[(uint)bVar1 * 2] != 0) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x100) = 0;
    FUN_000500ac((iVar2 << 0xc) >> 0x18,(int)((ulonglong)uVar4 >> 0x20),(uint)bVar1,
                 *(undefined4 *)(iVar2 + 0x100));
    *(undefined4 *)(iVar2 + 0x304) = 1;
  }
  return;
}


