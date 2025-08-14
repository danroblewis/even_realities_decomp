/*
 * Function: FUN_000556b0
 * Entry:    000556b0
 * Prototype: undefined FUN_000556b0()
 */


undefined4 FUN_000556b0(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  DAT_2000206f = uVar1;
  iVar2 = FUN_00055698();
  if (iVar2 == 0) {
    iVar2 = FUN_00056e34(uVar1,&DAT_000f2b33);
    if (iVar2 != 0) {
      uVar3 = 4;
LAB_000556d8:
      bt_connection_state_transition(iVar2,uVar3);
      *param_2 = iVar2;
      return 0;
    }
  }
  else {
    iVar2 = FUN_00056ea8(uVar1,param_1 + 9);
    if (iVar2 != 0) {
      return 0xffffffea;
    }
    iVar2 = FUN_00056e34(*param_1,param_1 + 9);
    if (iVar2 != 0) {
      uVar3 = 5;
      goto LAB_000556d8;
    }
  }
  return 0xfffffff4;
}


