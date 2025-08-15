/*
 * Function: FUN_0008295a
 * Entry:    0008295a
 * Prototype: undefined FUN_0008295a(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5)
 */


void FUN_0008295a(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  uint uVar1;
  undefined2 local_12 [3];
  
  uVar1 = validate_ble_attribute_handle(param_1,*(undefined4 *)(param_2 + 0xc));
  if (uVar1 != 0) {
    uVar1 = (uint)*(ushort *)(uVar1 + 8);
  }
  local_12[0] = (undefined2)uVar1;
  FUN_00082932(param_3,param_4,param_5,local_12,2);
  return;
}


