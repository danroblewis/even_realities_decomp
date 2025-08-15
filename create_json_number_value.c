/*
 * Function: create_json_number_value
 * Entry:    00012c18
 * Prototype: undefined create_json_number_value()
 */


int create_json_number_value(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = json_alloc(JSON_ALLOC_TPL);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_1;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = 8;
    iVar2 = float_compare_boolean_or_swapped(param_1,param_2,0xffc00000,0x41dfffff);
    if (iVar2 == 0) {
      iVar2 = float_compare_boolean_or(param_1,param_2,0,0xc1e00000);
      if (iVar2 == 0) {
        uVar3 = float_to_int(param_1,param_2);
        *(undefined4 *)(iVar1 + 0x14) = uVar3;
        return iVar1;
      }
      uVar3 = 0x80000000;
    }
    else {
      uVar3 = 0x7fffffff;
    }
    *(undefined4 *)(iVar1 + 0x14) = uVar3;
  }
  return iVar1;
}


