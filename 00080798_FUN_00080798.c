/*
 * Function: FUN_00080798
 * Entry:    00080798
 * Prototype: undefined FUN_00080798()
 */


void FUN_00080798(uint param_1,uint *param_2)

{
  uint local_20 [2];
  byte local_18;
  uint local_14;
  
  local_20[0] = *param_2;
  local_18 = (byte)(short)param_2[2] & 0x1f | (byte)(*(short *)((int)param_2 + 10) << 5);
  local_14 = (local_20[0] & 0xffffffe0) + (param_2[1] - 1) & 0xffffffe0;
  if (7 < param_1) {
    FUN_00050c24();
    return;
  }
  FUN_00050bf0(param_1,local_20);
  return;
}


