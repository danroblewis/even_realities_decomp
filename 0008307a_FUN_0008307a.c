/*
 * Function: FUN_0008307a
 * Entry:    0008307a
 * Prototype: undefined FUN_0008307a()
 */


int FUN_0008307a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined8 uVar1;
  
  uVar1 = FUN_00081aca(param_1,6);
  if ((int)uVar1 == 0) {
    FUN_00083074(&DAT_00088180,0x1040,&stack0xfffffff0,2,0,(int)((ulonglong)uVar1 >> 0x20),
                 extraout_r2,param_4);
    return 0;
  }
  return (int)uVar1 + -0xf0;
}


