/*
 * Function: create_json_boolean_value
 * Entry:    00064c3c
 * Prototype: undefined create_json_boolean_value()
 */


void create_json_boolean_value(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = json_alloc(JSON_ALLOC_TPL);
  if (iVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  return;
}


