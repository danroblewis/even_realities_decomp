/*
 * Function: FUN_0007fb7a
 * Entry:    0007fb7a
 * Prototype: undefined FUN_0007fb7a()
 */


int FUN_0007fb7a(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  uint local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  iVar1 = FUN_0007f97c(param_1,0x18,&local_14,1);
  local_14 = CONCAT31(local_14._1_3_,(byte)local_14 & 0xfd | (byte)((param_2 >> 7 & 1) << 1));
  iVar2 = FUN_0007f98a(param_1,0x18,&local_14,1);
  iVar1 = iVar1 + iVar2;
  if (iVar1 == 0) {
    iVar2 = FUN_0007f97c(param_1,0x62,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0xe7 | (byte)((param_2 & 3) << 3));
    iVar1 = FUN_0007f98a(param_1,0x62,&local_18,1);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


