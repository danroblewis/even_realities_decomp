/*
 * Function: process_data_with_parameter_validation_alt
 * Entry:    0004f040
 * Prototype: undefined process_data_with_parameter_validation_alt()
 */


int process_data_with_parameter_validation_alt(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 local_28;
  char *local_24;
  int iStack_20;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = set_bit_and_return_previous_state(param_1 + 1,0);
    if (iVar1 == 0) {
      param_1[0x20a] = 0x7f635;
      *(undefined2 *)(param_1 + 0x20e) = 1;
      *(undefined2 *)(param_1 + 0x20d) = *(undefined2 *)((int)param_1 + 10);
      *(undefined2 *)((int)param_1 + 0x836) = *(undefined2 *)(param_1 + 3);
      param_1[0x20f] = param_1[0x20f] | 1;
      param_1[0x211] = param_2;
      iVar1 = initialize_ble_attribute_data_structure(*param_1,param_1 + 0x20a);
      if (iVar1 != 0) {
        clear_specific_bit_by_position(param_1 + 1,0);
        local_24 = "Subscribe Notification Source failed (err %d)";
        local_28 = 3;
        iStack_20 = iVar1;
        process_and_compress_data_with_validation(&DAT_000880e8,0x1840,&local_28,0);
      }
    }
    else {
      iVar1 = -0x78;
    }
  }
  return iVar1;
}


