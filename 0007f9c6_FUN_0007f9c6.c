/*
 * Function: FUN_0007f9c6
 * Entry:    0007f9c6
 * Prototype: undefined FUN_0007f9c6()
 */


void FUN_0007f9c6(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_0007f97c(param_1,0x11,&local_14,1,param_1);
  if (iVar1 == 0) {
    local_14 = CONCAT31(local_14._1_3_,(byte)local_14 & 0xf1 | (byte)((param_2 & 7) << 1));
    FUN_0007f98a(param_1,0x11,&local_14,1);
  }
  return;
}


