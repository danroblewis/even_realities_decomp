/*
 * Function: FUN_0007d70a
 * Entry:    0007d70a
 * Prototype: undefined FUN_0007d70a()
 */


void FUN_0007d70a(undefined2 param_1,short param_2,undefined4 param_3,int param_4)

{
  for (; 0xf000 < param_4; param_4 = param_4 + -0xf000) {
    FUN_000476b4(param_1,param_2,param_3,0xf000);
    param_2 = param_2 + 0xc0;
  }
  FUN_000476b4(param_1,param_2,param_3,param_4);
  FUN_0007d77c(0x97);
  FUN_0007d772(1);
  return;
}


