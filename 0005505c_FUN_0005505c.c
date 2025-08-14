/*
 * Function: FUN_0005505c
 * Entry:    0005505c
 * Prototype: undefined FUN_0005505c()
 */


void FUN_0005505c(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [7];
  undefined1 local_29;
  undefined4 local_20;
  char *local_1c;
  
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  if ((DAT_20002120 == 0) || (DAT_20002120 < DAT_20002121)) {
    DAT_20002121 = DAT_20002121 + 1;
    param_1[8] = param_1[8] | 4;
    return;
  }
  iVar1 = FUN_00056f08(0,0,6);
  if (iVar1 != 0) {
    DAT_200020d4 = DAT_200020d4 | 0x8000;
    param_1[8] = param_1[8] | 1;
    FUN_000566a4();
    return;
  }
  FUN_00055710(&LAB_000810aa_1,0);
  if ((DAT_20002121 == 0) || (iVar1 = FUN_00081050(0), iVar1 == 0)) {
    if (DAT_20002121 == DAT_20002120) {
      local_1c = "Resolving list size exceeded. Switching to host.";
      local_20 = 2;
      FUN_0008104a(&DAT_00088150,0x1080,&local_20);
      iVar1 = FUN_00053d70(0x2029,0);
      if (iVar1 == 0) {
        DAT_20002121 = DAT_20002121 + 1;
        param_1[8] = param_1[8] | 4;
        goto LAB_00054f5c;
      }
      local_1c = "Failed to clear resolution list";
    }
    else {
      iVar1 = FUN_00080fd2(*param_1,param_1 + 1,param_1 + 0x2a);
      if (iVar1 == 0) {
        DAT_20002121 = DAT_20002121 + 1;
        param_1[8] = param_1[8] | 4;
        if (-1 < (int)((uint)DAT_200020a7 << 0x1d)) {
          local_1c = "Set privacy mode command is not supported";
          goto LAB_00054efa;
        }
        FUN_00080fc4(auStack_30,param_1 + 1);
        local_29 = 1;
        iVar1 = FUN_00053cd4(0x204e,8);
        if (iVar1 != 0) {
          FUN_00083740(iVar1 + 0xc,auStack_30,8);
          iVar1 = FUN_00053d70(0x204e,iVar1,0);
          if (iVar1 == 0) goto LAB_00054f5c;
        }
        local_1c = "Failed to set privacy mode";
      }
      else {
        local_1c = "Failed to add IRK to controller";
      }
    }
    uVar2 = 0x1040;
  }
  else {
    local_1c = "Failed to disable address resolution";
LAB_00054efa:
    uVar2 = 0x1080;
  }
  local_20 = 2;
  FUN_0008104a(&DAT_00088150,uVar2,&local_20);
LAB_00054f5c:
  FUN_00081050(1);
  FUN_00055710(0x81081,0);
  return;
}


