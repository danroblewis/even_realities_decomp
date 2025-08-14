/*
 * Function: FUN_000870ea
 * Entry:    000870ea
 * Prototype: undefined FUN_000870ea()
 */


undefined4 FUN_000870ea(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  
  uVar2 = FUN_00078bf8(param_1);
  if ((param_3 != 0) && (iVar1 = 0x6b - ((uint)(param_2 << 1) >> 0x15), 0 < iVar1)) {
    uVar2 = FUN_0000d8f8(uVar2,extraout_s1,0,iVar1 * 0x100000 + 0x3ff00000);
  }
  return uVar2;
}


