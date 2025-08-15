/*
 * Function: apply_scaling_factor_from_lookup_table
 * Entry:    0005f60c
 * Prototype: undefined apply_scaling_factor_from_lookup_table()
 */


undefined4 apply_scaling_factor_from_lookup_table(uint param_1,int *param_2)

{
  if (((param_1 < 0x14) && ((byte)(&DAT_000f54db)[param_1 * 2] != 0)) &&
     ((byte)(&DAT_000f54dc)[param_1 * 2] != 0)) {
    *param_2 = (int)(*param_2 * (uint)(byte)(&DAT_000f54db)[param_1 * 2]) /
               (int)(uint)(byte)(&DAT_000f54dc)[param_1 * 2];
    return 0;
  }
  return 0xffffffea;
}


