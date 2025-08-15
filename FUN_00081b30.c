/*
 * Function: FUN_00081b30
 * Entry:    00081b30
 * Prototype: undefined FUN_00081b30()
 */


undefined4 FUN_00081b30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  if (*param_1 == 0) {
    uVar1 = 0xffffff80;
  }
  else {
    uVar1 = bt_connection_disconnect_with_callback_and_state_validation();
    *(char *)(param_1 + 0x2e) = (char)uVar1;
    iVar2 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation
                      (6,uVar1,4);
    if (iVar2 == 0) {
      uVar1 = 0xfffffff4;
    }
    else {
      puVar3 = (undefined2 *)FUN_0005f5d0(iVar2 + 0xc,4);
      *puVar3 = (short)param_1[9];
      puVar3[1] = (short)param_1[5];
      FUN_00081962(param_1,iVar2,0x10000,0,param_4);
      uVar1 = 0;
      *(undefined1 *)(param_1 + 0x2d) = 4;
    }
  }
  return uVar1;
}


