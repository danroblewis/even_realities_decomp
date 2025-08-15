/*
 * Function: FUN_0005f60c
 * Entry:    0005f60c
 * Prototype: undefined FUN_0005f60c()
 */


undefined4 FUN_0005f60c(uint param_1,int *param_2)

{
  if (((param_1 < 0x14) && ((byte)(&DAT_000f54db)[param_1 * 2] != 0)) &&
     ((byte)(&DAT_000f54dc)[param_1 * 2] != 0)) {
    *param_2 = (int)(*param_2 * (uint)(byte)(&DAT_000f54db)[param_1 * 2]) /
               (int)(uint)(byte)(&DAT_000f54dc)[param_1 * 2];
    return 0;
  }
  return 0xffffffea;
}


