/*
 * Function: FUN_0005a3c4
 * Entry:    0005a3c4
 * Prototype: undefined FUN_0005a3c4()
 */


undefined4 FUN_0005a3c4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if ((*(int *)(param_1 + 8) == 0x5a465) &&
     (puVar2 = *(undefined1 **)(param_1 + 0xc), *(short *)(puVar2 + 10) != 0)) {
    if (*(short *)(puVar2 + 8) != 0) {
      puVar3 = puVar2 + 1;
      iVar1 = FUN_000814e6(param_3,*puVar2,puVar3);
      if (iVar1 == 0) {
        iVar1 = bt_connection_disconnect_with_validation_and_callback(*puVar2,puVar3);
        if (iVar1 != 0) {
          if (*(char *)(iVar1 + 0xd) == '\a') {
            validate_and_process_ble_characteristics_with_callback_validation_and_state_management()
            ;
            return 1;
          }
          validate_and_process_ble_characteristics_with_callback_validation_and_state_management();
        }
      }
      else {
        iVar1 = FUN_00080f92(*(undefined1 *)(param_3 + 8),param_3 + 0x90);
        if (iVar1 == 0) {
          if (puVar2 == &DAT_20002a20) {
            FUN_0005a090(param_3);
          }
          FUN_000828da(puVar3,&DAT_000f2b3a);
          *puVar2 = 0;
          *(undefined2 *)(puVar2 + 8) = 0;
        }
        else {
          FUN_000828da(puVar3,param_3 + 0x90);
        }
      }
    }
    *(undefined2 *)(puVar2 + 10) = 0;
    if (*(code **)(puVar2 + 0xc) != (code *)0x0) {
      (**(code **)(puVar2 + 0xc))(param_1);
    }
  }
  return 1;
}


