/*
 * Function: bt_connection_update_state
 * Entry:    000817ea
 * Prototype: undefined bt_connection_update_state()
 */


void bt_connection_update_state
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 extraout_r2_00;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 != (int *)0x0) {
    iVar4 = *piVar1;
    if (iVar4 != 0) {
      iVar4 = iVar4 + -8;
    }
    bt_connection_cleanup_and_notify(piVar1 + -2);
    uVar2 = extraout_r1;
    uVar3 = extraout_r2;
    if (iVar4 != 0) {
      while (iVar5 = *(int *)(iVar4 + 8), iVar5 != 0) {
        bt_connection_cleanup_and_notify(iVar4);
        uVar2 = extraout_r1_00;
        uVar3 = extraout_r2_00;
        iVar4 = iVar5 + -8;
      }
      bt_connection_cleanup_and_notify(iVar4,uVar2,uVar3,param_4);
      return;
    }
  }
  return;
}


