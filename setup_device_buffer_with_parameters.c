/*
 * Function: setup_device_buffer_with_parameters
 * Entry:    0004e098
 * Prototype: undefined setup_device_buffer_with_parameters()
 */


int setup_device_buffer_with_parameters(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  iVar1 = setup_device_buffer_with_validation(param_1 & 0xff,&local_30);
  if ((iVar1 < 0) || (local_30 == 0)) {
    local_14 = -0x16;
  }
  else {
    local_28 = *(undefined4 *)(local_30 + 4);
    local_18 = *param_2;
    local_24 = *(undefined4 *)(local_30 + 8);
    local_14 = 0;
    local_1c = 0;
    iVar1 = *(int *)(local_30 + 0xc);
    local_2c = param_1;
    uStack_20 = param_3;
    no_operation();
    if (iVar1 == 0) {
      local_14 = -0x13;
    }
    else {
      iterate_data_structure_with_callback(iVar1,0x7f021,&local_2c);
      if (local_14 == 0) {
        *param_2 = local_1c;
      }
    }
  }
  return local_14;
}


