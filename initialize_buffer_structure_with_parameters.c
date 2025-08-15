/*
 * Function: initialize_buffer_structure_with_parameters
 * Entry:    0004e374
 * Prototype: undefined initialize_buffer_structure_with_parameters()
 */


undefined4
initialize_buffer_structure_with_parameters
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BUFFER_STRUCTURE_SIZE_CONFIGURATION;
  if (BUFFER_STRUCTURE_SIZE_CONFIGURATION == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    resource_mutex_acquire(&DAT_20003868,param_2,0xffffffff,0xffffffff);
    uVar2 = (**(code **)(*(int *)(iVar1 + 4) + 8))(iVar1,param_1,param_2,param_3);
    mutex_unlock(&DAT_20003868);
  }
  return uVar2;
}


