/*
 * Function: FUN_00055094
 * Entry:    00055094
 * Prototype: undefined FUN_00055094()
 */


void FUN_00055094(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_48;
  char *local_44;
  int iStack_40;
  undefined4 local_28;
  char *local_24;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_20002120 == 0) {
    if (DAT_20002121 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","bt_dev.le.rl_entries > 0",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/id.c",0x433);
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/id.c",0x433);
    }
  }
  else if ((uint)DAT_20002121 <= DAT_20002120 + 1) {
    iVar1 = FUN_00056f08(0,0,6);
    if (iVar1 != 0) {
      DAT_200020d4 = DAT_200020d4 | 0x8000;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
      FUN_000566a4();
      return;
    }
    FUN_00055710(&LAB_000810aa_1,0);
    iVar1 = FUN_00081050(0);
    if (iVar1 == 0) {
      if (DAT_20002120 < DAT_20002121) {
        DAT_20002121 = DAT_20002121 - 1;
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
        FUN_0005e758(2,&LAB_00081034_1,0);
      }
      else {
        iVar1 = FUN_00053cd4(0x2028,7);
        if (iVar1 != 0) {
          uVar2 = FUN_0005f5d0(iVar1 + 0xc,7);
          FUN_00080fc4(uVar2,param_1 + 1);
          iVar1 = FUN_00053d70(0x2028,iVar1,0);
          if (iVar1 == 0) {
            DAT_20002121 = DAT_20002121 - 1;
            *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
            goto LAB_00055142;
          }
        }
        local_24 = "Failed to remove IRK from controller";
        local_28 = 2;
        FUN_0008104a(&DAT_00088150,0x1040,&local_28);
      }
    }
    else {
      local_44 = "Disabling address resolution failed (err %d)";
      local_48 = 3;
      iStack_40 = iVar1;
      FUN_0008104a(&DAT_00088150,0x1840,&local_48);
    }
LAB_00055142:
    if (DAT_20002121 != 0) {
      FUN_00081050(1);
    }
    FUN_00055710(0x81081,0);
    return;
  }
  DAT_20002121 = DAT_20002121 - 1;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
  return;
}


