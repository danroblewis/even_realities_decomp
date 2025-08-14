/*
 * Function: FUN_00025740
 * Entry:    00025740
 * Prototype: undefined FUN_00025740(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int FUN_00025740(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  ushort local_24 [2];
  ushort *local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_24[0] = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
  local_10 = param_5;
  local_20 = local_24;
  local_c = 7;
  local_1c = 2;
  local_18 = 0;
  local_14 = param_4;
  iVar1 = FUN_0007c85e(param_1,&local_20,2,param_2);
  FUN_0007c87a();
  if (iVar1 < 0) {
    DEBUG_PRINT("_st25dv_read  ret %d \n",iVar1);
  }
  return iVar1;
}


