/*
 * Function: set_json_object_field_with_memory_management
 * Entry:    0006466c
 * Prototype: undefined set_json_object_field_with_memory_management()
 */


undefined4
set_json_object_field_with_memory_management(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_1 != param_3)) {
    if (param_4 == 0) {
      param_2 = duplicate_string_with_memory_allocation(param_2);
      if (param_2 == 0) {
        return 0;
      }
      uVar2 = *(uint *)(param_3 + 0xc) & 0xfffffdff;
    }
    else {
      uVar2 = *(uint *)(param_3 + 0xc) | 0x200;
    }
    if ((-1 < *(int *)(param_3 + 0xc) << 0x16) && (*(int *)(param_3 + 0x20) != 0)) {
      (*SENSOR_INIT_FUNCTION)();
    }
    *(int *)(param_3 + 0x20) = param_2;
    *(uint *)(param_3 + 0xc) = uVar2;
    uVar1 = FUN_00084f2e(param_1,param_3);
    return uVar1;
  }
  return 0;
}


