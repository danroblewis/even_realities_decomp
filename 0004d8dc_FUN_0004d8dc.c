/*
 * Function: FUN_0004d8dc
 * Entry:    0004d8dc
 * Prototype: undefined FUN_0004d8dc()
 */


undefined4 FUN_0004d8dc(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x46) {
    uVar1 = *(undefined4 *)(&DAT_00088070 + param_2 * 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


