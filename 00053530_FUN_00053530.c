/*
 * Function: FUN_00053530
 * Entry:    00053530
 * Prototype: undefined FUN_00053530()
 */


void FUN_00053530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_0005f074(&DAT_20002144,param_1);
  iStack_18 = FUN_000865fc(&DAT_20005f08,&DAT_20002980);
  if (iStack_18 < 0) {
    local_1c = "Could not submit rx_work: %d";
    local_20 = 3;
    FUN_00080ea2(&DAT_00088138,0x1840,&local_20);
  }
  return;
}


