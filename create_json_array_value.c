/*
 * Function: create_json_array_value
 * Entry:    00064c8c
 * Prototype: undefined create_json_array_value()
 */


void create_json_array_value(void)

{
  int iVar1;
  
  iVar1 = json_alloc(JSON_ALLOC_TPL);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0x20;
  }
  return;
}


