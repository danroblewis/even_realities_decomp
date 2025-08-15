/*
 * Function: initialize_buffer_structure_with_validation
 * Entry:    0004e434
 * Prototype: undefined initialize_buffer_structure_with_validation()
 */


undefined4
initialize_buffer_structure_with_validation
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_14 = param_1;
  uStack_10 = param_2;
  local_c = param_3;
  resource_mutex_acquire(&DAT_20003868,param_2,0xffffffff,0xffffffff,param_1);
  for (piVar1 = (int *)DAT_2000a104; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    (**(code **)piVar1[1])(piVar1,&local_14);
  }
  mutex_unlock(&DAT_20003868);
  return 0;
}


