/*
 * Function: FUN_000829c0
 * Entry:    000829c0
 * Prototype: undefined FUN_000829c0(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5)
 */


void FUN_000829c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  int iVar1;
  undefined1 local_14 [8];
  
  local_14[0] = 0;
  iVar1 = find_ble_attribute_by_handle();
  if (iVar1 != 0) {
    local_14[0] = *(undefined1 *)(iVar1 + 8);
  }
  FUN_00082932(param_3,param_4,param_5,local_14,1);
  return;
}


