/*
 * Function: FUN_00059c48
 * Entry:    00059c48
 * Prototype: undefined FUN_00059c48()
 */


undefined1 * FUN_00059c48(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_000826b2(param_2 + 1,&DAT_000f2b3a);
  }
  else {
    iVar1 = FUN_000814e6(param_1,*param_2);
  }
  if (iVar1 == 0) {
    param_2 = (undefined1 *)0x0;
  }
  return param_2;
}


