/*
 * Function: FUN_0004d100
 * Entry:    0004d100
 * Prototype: undefined FUN_0004d100(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined param_6, undefined4 param_7)
 */


undefined4
FUN_0004d100(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,int param_6,
            undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  int *local_2c;
  undefined4 *puStack_28;
  int local_24 [2];
  
  if ((param_1 == 0) || (param_6 == 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    if (param_8 == 0) {
      param_8 = 0x4d059;
    }
    if (param_2 != 0) {
      local_2c = local_24;
      local_24[0] = 0x200;
      local_24[1] = 0x200;
      uVar1 = FUN_00071358(param_1 + 0xe0,param_5,param_8,param_4,0);
      return uVar1;
    }
    local_2c = param_3;
    puStack_28 = param_3;
    local_24[0] = param_2;
    FUN_00085be8(param_1 + 0x19c,param_6,param_7);
    uVar1 = FUN_00071358(param_1 + 0xe0,param_5,param_8,param_4,param_1 + 0x19c,&local_2c);
  }
  return uVar1;
}


