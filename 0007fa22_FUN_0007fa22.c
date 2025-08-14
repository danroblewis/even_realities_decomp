/*
 * Function: FUN_0007fa22
 * Entry:    0007fa22
 * Prototype: undefined FUN_0007fa22()
 */


void FUN_0007fa22(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18;
  uint local_14;
  undefined4 uStack_10;
  
  local_18 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_0007f97c(param_1,0x14,&local_18,1);
  if (iVar1 == 0) {
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0x7f | (byte)((param_2 >> 1 & 1) << 7));
    iVar1 = FUN_0007f98a(param_1,0x14,&local_18,1);
    if ((iVar1 == 0) && (iVar1 = FUN_0007f97c(param_1,0x15,&local_14,1), iVar1 == 0)) {
      local_14 = CONCAT31(local_14._1_3_,(byte)local_14 & 0xef | (byte)((param_2 & 1) << 4));
      FUN_0007f98a(param_1,0x15,&local_14,1);
    }
  }
  return;
}


