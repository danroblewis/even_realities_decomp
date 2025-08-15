/*
 * Function: validate_device_properties_with_size_parameter
 * Entry:    00083954
 * Prototype: undefined validate_device_properties_with_size_parameter()
 */


int validate_device_properties_with_size_parameter(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  if (param_2 == 0) {
    local_14 = 6;
  }
  else {
    local_14 = 4;
  }
  uStack_10 = 0;
  local_c = 0;
  iVar1 = validate_device_properties_and_state(param_1,&local_14,0,local_14,param_1);
  if (iVar1 != 0) {
    iVar1 = -5;
  }
  return iVar1;
}


