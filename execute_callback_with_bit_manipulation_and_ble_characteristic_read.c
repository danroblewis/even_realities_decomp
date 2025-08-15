/*
 * Function: execute_callback_with_bit_manipulation_and_ble_characteristic_read
 * Entry:    000847d8
 * Prototype: undefined execute_callback_with_bit_manipulation_and_ble_characteristic_read()
 */


undefined4
execute_callback_with_bit_manipulation_and_ble_characteristic_read
          (int *param_1,undefined1 param_2,ushort *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_2d;
  ushort local_2c [2];
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 local_20;
  ushort *local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  local_28 = &local_2d;
  local_24 = 1;
  local_20 = 0;
  local_1c = local_2c;
  local_18 = 2;
  local_14 = 7;
  local_2d = param_2;
  iVar1 = (**(code **)(*(int *)(*param_1 + 8) + 8))(*param_1,&local_28,2,(short)param_1[1]);
  if (iVar1 == 0) {
    *param_3 = local_2c[0] << 8 | local_2c[0] >> 8;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffb;
  }
  return uVar2;
}


