/*
 * Function: add_json_field_simple
 * Entry:    00085076
 * Prototype: undefined __stdcall add_json_field_simple(undefined4 json_obj, undefined4 field_value)
 */


undefined4 add_json_field_simple(undefined4 json_obj,undefined4 field_value)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = create_json_number_value();
  iVar2 = set_json_object_field_with_memory_management(json_obj,field_value,uVar1,0);
  if (iVar2 == 0) {
    cleanup_json_node(uVar1);
    uVar1 = 0;
  }
  return uVar1;
}


