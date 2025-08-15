/*
 * Function: bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution
 * Entry:    00057874
 * Prototype: undefined bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution()
 */


undefined4
bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution
          (int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int extraout_r2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 local_18;
  char *local_14;
  
  if ((short)param_2[5] == 0) {
    uVar2 = 0x40;
    do {
      uVar4 = FUN_00081aca(param_1,uVar2);
      if ((int)uVar4 == 0) {
        *(short *)(param_2 + 5) = (short)((ulonglong)uVar4 >> 0x20);
        param_3 = extraout_r2;
        goto LAB_0005788c;
      }
      uVar2 = (int)((ulonglong)uVar4 >> 0x20) + 1U & 0xffff;
    } while (uVar2 != 0x80);
    local_14 = "Unable to allocate L2CAP channel ID";
    local_18 = 2;
    FUN_00081746(&DAT_00088160,0x1040,&local_18);
    uVar1 = 0;
  }
  else {
LAB_0005788c:
    param_2[4] = 0;
    param_2[2] = 0;
    piVar3 = param_2 + 2;
    if (*(undefined4 **)(param_1 + 0x58) == (undefined4 *)0x0) {
      *(int **)(param_1 + 0x54) = piVar3;
      *(int **)(param_1 + 0x58) = piVar3;
    }
    else {
      **(undefined4 **)(param_1 + 0x58) = piVar3;
      *(int **)(param_1 + 0x58) = piVar3;
    }
    *param_2 = param_1;
    param_2[3] = param_3;
    FUN_000732d4(param_2 + 0x30,&LAB_00057524_1);
    if ((ushort)((short)param_2[5] - 0x40U) < 0x40) {
      FUN_00072e50(param_2 + 0x22,&LAB_00081b82_1);
      setup_error_handling(param_2 + 0x26);
      *(undefined1 *)(param_2 + 0x2d) = 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}


