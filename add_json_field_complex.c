/*
 * Function: add_json_field_complex
 * Entry:    0008509e
 * Prototype: undefined __stdcall add_json_field_complex(undefined4 json_obj, undefined4 field_name, undefined4 field_value)
 */


undefined4 add_json_field_complex(undefined4 json_obj,undefined4 field_name,undefined4 field_value)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00064c5c(field_value);
  iVar2 = FUN_0006466c(json_obj,field_name,uVar1,0);
  if (iVar2 == 0) {
    cleanup_json_node(uVar1);
    uVar1 = 0;
  }
  return uVar1;
}


