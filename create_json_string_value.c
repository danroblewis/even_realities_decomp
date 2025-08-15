/*
 * Function: create_json_string_value
 * Entry:    00064c5c
 * Prototype: undefined create_json_string_value()
 */


int create_json_string_value(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = json_alloc(JSON_ALLOC_TPL);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0x10;
    iVar2 = duplicate_string_with_memory_allocation(param_1);
    *(int *)(iVar1 + 0x10) = iVar2;
    if (iVar2 != 0) {
      return iVar1;
    }
    cleanup_json_node(iVar1);
  }
  return 0;
}


