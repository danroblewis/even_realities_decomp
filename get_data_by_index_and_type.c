/*
 * Function: get_data_by_index_and_type
 * Entry:    0007d4b2
 * Prototype: undefined get_data_by_index_and_type()
 */


void get_data_by_index_and_type(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = get_system_byte_1_alt();
  if (iVar1 != 6) {
    iVar1 = 2;
  }
  get_data_by_index_and_type(iVar1,param_1);
  return;
}


