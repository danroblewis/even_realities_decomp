/*
 * Function: FUN_00067248
 * Entry:    00067248
 * Prototype: undefined FUN_00067248()
 */


void FUN_00067248(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 1);
  if ((&DAT_2000b3a0)[uVar2 * 0x24] == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_cb->state != NRFX_DRV_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x255,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x255);
  }
  FUN_000500c8((*param_1 << 0xc) >> 0x18);
  if ((&DAT_2000b384)[uVar2 * 9] != 0) {
    *(undefined4 *)(*param_1 + 0x308) = 0x80152;
    FUN_000852ba(*param_1,&DAT_2000b384 + uVar2 * 9);
  }
  iVar1 = *param_1;
  uVar3 = *(undefined4 *)(iVar1 + 0x50c);
  uVar4 = *(undefined4 *)(iVar1 + 0x510);
  if (-1 < (int)((uint)(byte)(&DAT_2000b3a2)[uVar2 * 0x24] << 0x1f)) {
    FUN_00067138(*(undefined4 *)(iVar1 + 0x508));
    FUN_00067138(uVar4);
    FUN_00067138(uVar3);
    FUN_00067138((&DAT_2000b3a4)[uVar2 * 9]);
    if ((char)param_1[1] != '\0') {
      uVar3 = *(undefined4 *)(*param_1 + 0x514);
      FUN_00067138(*(undefined4 *)(*param_1 + 0x56c));
      FUN_00067138(uVar3);
    }
  }
  (&DAT_2000b3a0)[uVar2 * 0x24] = 0;
  return;
}


