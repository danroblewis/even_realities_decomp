/*
 * Function: validate_and_process_ble_characteristics
 * Entry:    00055998
 * Prototype: undefined validate_and_process_ble_characteristics(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
validate_and_process_ble_characteristics
          (undefined4 param_1,short *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int iVar2;
  
  uVar1 = handle_bluetooth_privacy_mode_management_with_callback_validation_and_parameter
                    (&DAT_20002018,param_1,param_2,param_3,param_4,param_5);
  iVar2 = 0;
  while( true ) {
    if (param_3 == iVar2) {
      return uVar1;
    }
    if (((*param_2 == 0x101) && (*(byte **)(param_2 + 2) != (byte *)0x0)) &&
       ((int)((uint)**(byte **)(param_2 + 2) << 0x1f) < 0)) break;
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 4;
  }
  FUN_000732d4(&DAT_20002030,&LAB_00055a74_1);
  FUN_0007350c(&DAT_20002030,extraout_r1,0x3c0000,0);
  return uVar1;
}


