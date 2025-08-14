/*
 * Function: FUN_00080786
 * Entry:    00080786
 * Prototype: undefined FUN_00080786()
 */


uint FUN_00080786(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = TT(param_1);
  uVar1 = uVar2 & 0xff;
  if ((uVar2 & 0x10000) == 0) {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}


