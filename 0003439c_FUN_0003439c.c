/*
 * Function: FUN_0003439c
 * Entry:    0003439c
 * Prototype: undefined FUN_0003439c()
 */


void FUN_0003439c(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((&DAT_20007dac)[(uint)DAT_2001a22a * 0x6d] != 0) &&
     ((&DAT_20007dbb)[(uint)DAT_2001a22a * 0x1b4] == '\0')) {
    iVar2 = get_work_mode();
    uVar1 = FUN_00033cf8();
    *(undefined1 *)(iVar2 + 0xdd) = uVar1;
    iVar2 = get_work_mode();
    uVar5 = (uint)*(byte *)(iVar2 + 0xdd);
    if (uVar5 != 0) {
      iVar2 = get_work_mode();
      uVar5 = *(byte *)(iVar2 + 0xdd) - 1 & 0xff;
    }
    DAT_2001a22a = (byte)uVar5;
    uVar3 = FUN_0007d224();
    uVar4 = (uint)DAT_2001a22a;
    (&DAT_20007db0)[uVar5 * 0x6d] = uVar3;
    (&DAT_20007dbb)[uVar4 * 0x1b4] = 1;
    iVar2 = get_work_mode();
    uVar1 = FUN_00033cf8();
    *(undefined1 *)(iVar2 + 0xdd) = uVar1;
  }
  FUN_00033b0c();
  return;
}


