/*
 * Function: bt_connection_disconnect_with_callback_execution_and_parameter_and_state_validation
 * Entry:    00057484
 * Prototype: undefined bt_connection_disconnect_with_callback_execution_and_parameter_and_state_validation()
 */


void bt_connection_disconnect_with_callback_execution_and_parameter_and_state_validation
               (int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_10;
  char *local_c;
  
  if (*(short *)(param_1 + 0x16) == 0) {
    *(undefined2 *)(param_1 + 0x16) = 0x1f0;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x16);
  uVar2 = uVar1;
  if (0x1ef < uVar1) {
    uVar2 = 0x1f0;
  }
  *(short *)(param_1 + 0x18) = (short)(uVar2 + 2);
  if ((*(int *)(*(int *)(param_1 + 4) + 0x10) == 0) && ((uVar2 + 2 & 0xffff) <= uVar1 + 1)) {
    local_c = "Segmentation disabled but MTU > MPS, truncating MTU";
    local_10 = 2;
    FUN_00081746(&DAT_00088160,0x1080,&local_10);
    *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x18) + -2;
  }
  *(undefined4 *)(param_1 + 0x1c) = 1;
  return;
}


