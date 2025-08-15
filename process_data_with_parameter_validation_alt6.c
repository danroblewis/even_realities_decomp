/*
 * Function: process_data_with_parameter_validation_alt6
 * Entry:    00052854
 * Prototype: undefined process_data_with_parameter_validation_alt6()
 */


int process_data_with_parameter_validation_alt6(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = get_data_status(&DAT_2000abac);
  if ((-1 < iVar1) && (param_2 == 0)) {
    puVar2 = (undefined4 *)get_buffer_data_ptr(&DAT_2000abac);
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    if (DAT_2000abec == 0) {
      iVar1 = -0x16;
    }
    else {
      decrement_reference_count_and_cleanup_memory();
      iVar1 = 0;
      DATA_PARAMETER_VALIDATION_ALTERNATIVE_6_STATE = 0;
      DAT_2000abec = 0;
    }
    return iVar1;
  }
  return iVar1;
}


