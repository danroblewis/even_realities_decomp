/*
 * Function: FUN_00047a84
 * Entry:    00047a84
 * Prototype: undefined FUN_00047a84()
 */


undefined4 FUN_00047a84(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_3 = 200;
  if (DAT_2001b811 != '\0') {
    *param_2 = 0x27e;
    *param_3 = 199;
    return 0;
  }
  *param_2 = 0x240;
  *param_3 = 0x88;
  return *(undefined4 *)(&DAT_0008ac20 + param_1 * 4);
}


