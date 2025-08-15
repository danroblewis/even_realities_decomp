/*
 * Function: handle_voltage_regulation_with_validation
 * Entry:    00075c90
 * Prototype: undefined handle_voltage_regulation_with_validation()
 */


undefined4 handle_voltage_regulation_with_validation(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = calculate_mathematical_function_with_range_validation();
  if ((DAT_200035af != -1) && (iVar1 = setup_voltage_regulation(param_1), iVar1 != 0)) {
    if (param_1 <= 88.72168) {
      if ((int)((uint)(param_1 < -103.972084) << 0x1f) < 0) {
        puVar2 = (undefined4 *)thunk_FUN_00071678();
        uVar3 = 0;
        *puVar2 = 0x22;
      }
    }
    else {
      puVar2 = (undefined4 *)thunk_FUN_00071678();
      uVar3 = 0x7f800000;
      *puVar2 = 0x22;
    }
  }
  return uVar3;
}


