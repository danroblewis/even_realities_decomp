/*
 * Function: is_data_structure_ready_alt
 * Entry:    00085d5c
 * Prototype: undefined is_data_structure_ready_alt()
 */


bool is_data_structure_ready_alt(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    return *(int *)(param_1 + 0xc) == 0;
  }
  return true;
}


