/*
 * Function: is_data_structure_ready
 * Entry:    00085c12
 * Prototype: undefined is_data_structure_ready()
 */


bool is_data_structure_ready(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    return *(int *)(param_1 + 0xc) == 0;
  }
  return true;
}


