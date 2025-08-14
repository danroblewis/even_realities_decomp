/*
 * Function: FUN_0004f040
 * Entry:    0004f040
 * Prototype: undefined FUN_0004f040()
 */


int FUN_0004f040(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 local_28;
  char *local_24;
  int iStack_20;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = FUN_0007f612(param_1 + 1,0);
    if (iVar1 == 0) {
      param_1[0x20a] = 0x7f635;
      *(undefined2 *)(param_1 + 0x20e) = 1;
      *(undefined2 *)(param_1 + 0x20d) = *(undefined2 *)((int)param_1 + 10);
      *(undefined2 *)((int)param_1 + 0x836) = *(undefined2 *)(param_1 + 3);
      param_1[0x20f] = param_1[0x20f] | 1;
      param_1[0x211] = param_2;
      iVar1 = FUN_0005c3c4(*param_1,param_1 + 0x20a);
      if (iVar1 != 0) {
        FUN_0007f5d8(param_1 + 1,0);
        local_24 = "Subscribe Notification Source failed (err %d)";
        local_28 = 3;
        iStack_20 = iVar1;
        FUN_0004d944(&DAT_000880e8,0x1840,&local_28,0);
      }
    }
    else {
      iVar1 = -0x78;
    }
  }
  return iVar1;
}


