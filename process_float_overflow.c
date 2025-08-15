/*
 * Function: process_float_overflow
 * Entry:    000876ec
 * Prototype: undefined process_float_overflow()
 */


int process_float_overflow(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    iVar1 = memory_allocate_with_mutex_protection(param_1,param_3,param_3,param_4);
    return iVar1;
  }
  if (param_3 == 0) {
    memory_free_with_mutex_protection();
  }
  else {
    uVar2 = finalize_float_format();
    if (param_3 <= uVar2) {
      return param_2;
    }
    iVar1 = memory_allocate_with_mutex_protection(param_1,param_3);
    if (iVar1 != 0) {
      memcpy(iVar1,param_2,param_3);
      memory_free_with_mutex_protection(param_1,param_2);
      return iVar1;
    }
  }
  return 0;
}


