/*
 * Function: create_json_obj
 * Entry:    00064ca4
 * Prototype: undefined create_json_obj()
 */


void create_json_obj(void)

{
  int iVar1;
  
  iVar1 = json_alloc(JSON_ALLOC_TPL);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0x40;
  }
  return;
}


