/*
 * Function: FUN_0002e648
 * Entry:    0002e648
 * Prototype: undefined FUN_0002e648()
 */


int FUN_0002e648(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_20018da1 == '\0') ||
     (uStack_c = param_2, uStack_8 = param_3,
     iVar1 = opt3001_reg_read(0,(int)&uStack_c + 2,param_3,DAT_20018da1,param_1), iVar1 != 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = (uStack_c._2_2_ & 0xfff) << (uint)(uStack_c._2_2_ >> 0xc);
  }
  return iVar1;
}


