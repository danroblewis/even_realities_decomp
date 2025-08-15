/*
 * Function: process_buffer_overflow
 * Entry:    000870ea
 * Prototype: undefined process_buffer_overflow()
 */


undefined4 process_buffer_overflow(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  
  uVar2 = FUN_00078bf8(param_1);
  if ((param_3 != 0) && (iVar1 = 0x6b - ((uint)(param_2 << 1) >> 0x15), 0 < iVar1)) {
    uVar2 = float_multiply_64bit_alt(uVar2,extraout_s1,0,iVar1 * 0x100000 + 0x3ff00000);
  }
  return uVar2;
}


