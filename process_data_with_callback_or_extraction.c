/*
 * Function: process_data_with_callback_or_extraction
 * Entry:    0007c670
 * Prototype: undefined process_data_with_callback_or_extraction()
 */


int process_data_with_callback_or_extraction(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (param_2 == (int *)0x0) {
      param_1 = 0;
    }
    else {
      *param_2 = 0;
      param_2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x14);
      if ((iVar1 == 0) || (*(code **)(iVar1 + 8) == (code *)0x0)) {
        if (param_3 != 0) {
          extract_data_structure_values_at_offsets(param_1,param_2);
        }
      }
      else {
        (**(code **)(iVar1 + 8))(iVar1);
      }
      param_1 = *param_2;
    }
  }
  return param_1;
}


