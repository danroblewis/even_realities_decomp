/*
 * Function: FUN_000654c4
 * Entry:    000654c4
 * Prototype: undefined FUN_000654c4()
 */


void FUN_000654c4(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00065434();
  uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar2 = (uint)*(ushort *)((int)&DAT_20002bc0 + ((int)uVar3 + 8) * 2);
  if ((int)(uVar2 << 0x17) < 0) {
    uVar2 = (uVar2 << 0x13) >> 0x1c;
    (*(code *)(&DAT_20002bc0)[uVar2 * 2])(param_1,uVar1,(&DAT_20002bc4)[uVar2 * 2]);
  }
  if (DAT_20002bc8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000654fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_20002bc8)(param_1,uVar1,DAT_20002bcc);
    return;
  }
  return;
}


