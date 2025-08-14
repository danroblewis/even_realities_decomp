/*
 * Function: FUN_0002eba0
 * Entry:    0002eba0
 * Prototype: undefined FUN_0002eba0()
 */


uint FUN_0002eba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = DAT_20018da8;
  uVar2 = (uint)DAT_20018da8;
  if (DAT_20018da3 != uVar2) {
    DEBUG_PRINT("[csh_debug_box] isInCharge is %d \n",uVar2,param_3,(uint)DAT_20018da3,param_4);
  }
  DAT_20018da3 = bVar1;
  return uVar2;
}


