/*
 * Function: check_float_special_values
 * Entry:    000876d0
 * Prototype: undefined check_float_special_values()
 */


int check_float_special_values(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = memory_allocate(param_1,param_3 * param_2,param_3,param_4,param_4);
  if (iVar1 != 0) {
    fill_memory_buffer(iVar1,0,param_3 * param_2);
  }
  return iVar1;
}


