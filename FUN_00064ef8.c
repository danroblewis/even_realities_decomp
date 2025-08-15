/*
 * Function: FUN_00064ef8
 * Entry:    00064ef8
 * Prototype: undefined FUN_00064ef8()
 */


undefined4 FUN_00064ef8(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((int)((*param_1 >> (param_2 & 0xff)) << 0x1f) < 0) {
    uVar1 = 0xbad0004;
  }
  else {
    do {
    } while (*param_1 != *param_1);
    *param_1 = 1 << (param_2 & 0xff) | *param_1;
    uVar1 = 0xbad0000;
  }
  return uVar1;
}


