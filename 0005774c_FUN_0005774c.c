/*
 * Function: FUN_0005774c
 * Entry:    0005774c
 * Prototype: undefined FUN_0005774c()
 */


void FUN_0005774c(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 *extraout_r3;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 local_18;
  char *local_14;
  
  if (*(char *)(param_1 + 0x2d) == '\x03') {
    uVar5 = FUN_00057394();
    iVar2 = FUN_000573f4(0x16,uVar5,4);
    if (iVar2 == 0) {
      local_14 = "Unable to send credits update";
      puVar6 = param_1 + 4;
      local_18 = 2;
      FUN_00081746(&DAT_00088160,0x1040,&local_18);
      *puVar6 = *puVar6 | 2;
      uVar5 = extraout_r1;
      if (param_1[0x20] != 0) {
        FUN_0005f24c();
        param_1[0x20] = 0;
        *(undefined2 *)(param_1 + 0x21) = 0;
        uVar5 = extraout_r1_00;
      }
      if (param_1[0x13] != 0) {
        FUN_0005f24c();
        param_1[0x13] = 0;
        uVar5 = extraout_r1_01;
      }
      while (uVar7 = thunk_FUN_000727ac(param_1 + 0xc,uVar5,0,0),
            uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20), (int)uVar7 != 0) {
        FUN_0005f24c();
        uVar5 = extraout_r1_02;
      }
      while (iVar2 = thunk_FUN_000727ac(param_1 + 0x26,uVar5,0,0), iVar2 != 0) {
        FUN_0005f24c();
        uVar5 = extraout_r1_03;
      }
      if (*(code **)(param_1[1] + 0x1c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000577fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1[1] + 0x1c))(param_1,puVar6);
        return;
      }
      return;
    }
    iVar3 = FUN_000816a2(param_1 + 7);
    if (iVar3 == 0) {
      uVar5 = *extraout_r3;
      *extraout_r3 = param_2;
      puVar4 = (undefined2 *)FUN_0005f5d0(iVar2 + 0xc,4,uVar5);
      uVar1 = *(undefined2 *)(param_1 + 5);
      puVar4[1] = (short)param_2;
      *puVar4 = uVar1;
      FUN_00081940(*param_1,iVar2);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","atomic_get(&chan->rx.credits) == 0",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/l2cap.c",0x905);
    uVar5 = 0x905;
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "bt_l2cap_chan_get_state(&chan->chan) == BT_L2CAP_CONNECTED",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/l2cap.c",0x8f8);
    uVar5 = 0x8f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/l2cap.c",uVar5);
}


