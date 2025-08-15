/*
 * Function: FUN_00079780
 * Entry:    00079780
 * Prototype: undefined FUN_00079780()
 */


void FUN_00079780(undefined4 *param_1,undefined4 *param_2)

{
  DAT_20002f10 = param_1[1];
  DAT_20002f0c = (code *)*param_1;
  DAT_20002f14 = param_1[2];
  DAT_20002f18 = param_1[3];
  DAT_20002ef8 = *param_2;
  DAT_20002efc = param_2[1];
  DAT_20002f00 = param_2[2];
  DAT_20002f04 = param_2[3];
  DAT_20002f08 = param_2[4];
  if ((DAT_2000cd48 & 0x3a000000) != 0) {
    DAT_2000cd44 = 0;
    DAT_2000cde8 = 0;
    DAT_2000cd48 = 0xa95c5f2c;
    DAT_2000cdec = 0xa95c5f2c;
    (*DAT_20002f0c)(&DAT_2000cd44);
                    /* WARNING: Could not recover jumptable at 0x000797dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_20002f0c)(&DAT_2000cde8);
    return;
  }
  return;
}


