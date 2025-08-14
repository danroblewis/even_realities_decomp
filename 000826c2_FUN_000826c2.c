/*
 * Function: FUN_000826c2
 * Entry:    000826c2
 * Prototype: undefined FUN_000826c2()
 */


byte * FUN_000826c2(byte *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (*param_1 == param_3) {
    iVar1 = FUN_000826b2(param_1 + 1);
    if (iVar1 == 0) {
      param_1 = (byte *)0x0;
    }
  }
  else {
    param_1 = (byte *)0x0;
  }
  return param_1;
}


