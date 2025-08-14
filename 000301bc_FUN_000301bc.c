/*
 * Function: FUN_000301bc
 * Entry:    000301bc
 * Prototype: undefined FUN_000301bc()
 */


int FUN_000301bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00030178(0xff20,0x3c00f091,param_3,param_4,param_4);
  if ((-1 < iVar1) && (iVar1 = FUN_00030178(0x4700,0x110), -1 < iVar1)) {
    FUN_0003016c(1);
    iVar1 = FUN_00030178(0x4444,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_0003016c(0x14);
    iVar1 = FUN_00030178(0xff18,0x3c);
    if (-1 < iVar1) {
      FUN_0003016c(0x19);
      iVar1 = FUN_00030178(0x4700,0x102);
      return iVar1 >> 0x1f;
    }
  }
  return -1;
}


