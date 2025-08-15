/*
 * Function: set_data_structure_flags_and_values
 * Entry:    0007c430
 * Prototype: undefined set_data_structure_flags_and_values()
 */


undefined4 set_data_structure_flags_and_values(byte *param_1,byte param_2,int *param_3)

{
  if (((param_1 != (byte *)0x0) && (param_3 != (int *)0x0)) &&
     ((*param_3 != 0 || ((char)param_3[1] == '\0')))) {
    *param_1 = *param_1 | param_2 & 7;
    param_1[1] = *(byte *)(param_3 + 1);
    *(int *)(param_1 + 4) = *param_3;
    return 0;
  }
  return 7;
}


