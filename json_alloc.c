/*
 * Function: json_alloc
 * Entry:    00084fd4
 * Prototype: undefined json_alloc()
 */


int json_alloc(code *param_1)

{
  int iVar1;
  
  iVar1 = (*param_1)(0x28);
  if (iVar1 != 0) {
    fill_memory_buffer(iVar1,0,0x28);
  }
  return iVar1;
}


