/*
 * Function: FUN_00047a4c
 * Entry:    00047a4c
 * Prototype: undefined FUN_00047a4c()
 */


undefined * FUN_00047a4c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 4) {
    memcpy(&DAT_2001d142,&DAT_00088697,0x120);
  }
  else {
    if (param_2 < 0) {
      param_2 = param_2 + 3;
    }
    FUN_0004790c(&DAT_000e123a + (param_2 >> 2) * param_1,param_2 >> 2,&DAT_2001d142,&DAT_000e123a,
                 param_4);
  }
  return &DAT_2001d142;
}


