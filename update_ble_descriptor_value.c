/*
 * Function: update_ble_descriptor_value
 * Entry:    000825c0
 * Prototype: undefined update_ble_descriptor_value()
 */


void update_ble_descriptor_value(undefined4 param_1,int param_2)

{
  if (*(short *)(param_2 + 10) != *(short *)(param_2 + 8)) {
    *(short *)(param_2 + 10) = *(short *)(param_2 + 8);
    if (*(code **)(param_2 + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000825d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0xc))();
      return;
    }
  }
  return;
}


