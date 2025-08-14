/*
 * Function: FUN_0008523e
 * Entry:    0008523e
 * Prototype: undefined FUN_0008523e()
 */


undefined4 FUN_0008523e(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_1c;
  
  local_1c = 0;
  uVar1 = param_1;
  FUN_00085214(param_1,param_2,0x14c,&local_1c,param_1);
  FUN_00085214(param_1,param_2,0x104);
  FUN_00085214(param_1,param_2,0x118);
  FUN_00085214(param_1,param_2,0x110,&local_1c,uVar1);
  FUN_00085214(param_1,param_2,0x120,&local_1c,uVar1);
  return local_1c;
}


