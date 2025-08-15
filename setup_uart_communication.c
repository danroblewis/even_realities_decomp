/*
 * Function: setup_uart_communication
 * Entry:    0008656a
 * Prototype: undefined setup_uart_communication()
 */


uint setup_uart_communication(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = initialize_ble_protocol(param_1 + 0xc,3);
  if (uVar1 != 0) {
    iVar2 = FUN_00074d74(param_1 + 0x10);
    uVar1 = (uint)(iVar2 == 0);
  }
  return uVar1;
}


