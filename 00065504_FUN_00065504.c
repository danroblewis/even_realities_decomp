/*
 * Function: FUN_00065504
 * Entry:    00065504
 * Prototype: undefined FUN_00065504()
 */


void FUN_00065504(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  iVar2 = FUN_00065434();
  uVar1 = *(ushort *)((int)&DAT_20002bc0 + (iVar2 + 8) * 2);
  if ((int)((uint)uVar1 << 0x17) < 0) {
    uVar3 = ((uint)uVar1 << 0x13) >> 0x1c;
    *(ushort *)((int)&DAT_20002bc0 + (iVar2 + 8) * 2) = uVar1 & 0xe0ff;
    iVar2 = 0;
    puVar4 = (ushort *)((int)&DAT_20002bcc + 2);
    do {
      puVar4 = puVar4 + 1;
      if (((*puVar4 & 0x100) != 0) && (uVar3 == ((uint)*puVar4 << 0x13) >> 0x1c)) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x30);
    (&DAT_20002bc0)[uVar3 * 2] = 0;
    iVar2 = FUN_00064ef8(&DAT_20002c34);
    if (iVar2 != 0xbad0000) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == NRFX_SUCCESS",
                   "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",0x15f);
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",0x15f);
    }
  }
  return;
}


