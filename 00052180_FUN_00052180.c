/*
 * Function: FUN_00052180
 * Entry:    00052180
 * Prototype: undefined FUN_00052180()
 */


undefined4 FUN_00052180(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [8];
  char *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined1 local_14;
  
  local_24 = "slot";
  iVar4 = *(int *)(param_1 + 8);
  local_20 = 4;
  local_34 = 1;
  uStack_30 = 0;
  local_1c = &LAB_00085f8c_1;
  local_18 = &local_34;
  local_14 = 0;
  iVar1 = FUN_00080872(*(int *)(param_1 + 4) + 4,&local_24,1,&uStack_30);
  if (iVar1 == 0) {
    iVar1 = FUN_00052038(local_34,auStack_2c,0,0);
    uVar3 = 0;
    if ((iVar1 == 0) && (iVar1 = FUN_000809f6(local_34), iVar1 != 0)) {
      uVar2 = 9;
    }
    else {
      uVar2 = FUN_000516ac(local_34);
      FUN_00051fe4();
      if (uVar2 == 0) {
        return 0;
      }
      uVar2 = uVar2 & 0xffff;
    }
    FUN_0005160c(iVar4 + 4,1,uVar2);
  }
  else {
    uVar3 = 3;
  }
  return uVar3;
}


