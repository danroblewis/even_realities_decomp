/*
 * Function: FUN_0008504c
 * Entry:    0008504c
 * Prototype: undefined FUN_0008504c()
 */


undefined4 FUN_0008504c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = create_json_boolean_value(param_3);
  iVar2 = set_json_object_field_with_memory_management(param_1,param_2,uVar1,0);
  if (iVar2 == 0) {
    cleanup_json_node(uVar1);
    uVar1 = 0;
  }
  return uVar1;
}


