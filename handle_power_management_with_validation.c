/*
 * Function: handle_power_management_with_validation
 * Entry:    00075dc8
 * Prototype: undefined handle_power_management_with_validation()
 */


undefined4 handle_power_management_with_validation(float param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = initialize_power_management();
  if (((DAT_200035af != -1) && (!NAN(param_1))) && ((int)((uint)(param_1 < 0.0) << 0x1f) < 0)) {
    puVar1 = (undefined4 *)thunk_FUN_00071678();
    uVar2 = 0x7fc00000;
    *puVar1 = 0x21;
  }
  return uVar2;
}


