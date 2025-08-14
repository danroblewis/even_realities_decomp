/*
 * Function: FUN_0002ae84
 * Entry:    0002ae84
 * Prototype: undefined FUN_0002ae84()
 */


int FUN_0002ae84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  
  iVar2 = 5;
  do {
    iVar1 = FUN_00084c7e(&DAT_00087cc8,DAT_20007b50,param_3,0x84c7f,param_4);
    if (iVar1 == 0) {
      return 0;
    }
    get_schedule_timing(0x667,0);
    iVar2 = iVar2 + -1;
    param_3 = extraout_r2;
  } while (iVar2 != 0);
  return iVar1;
}


