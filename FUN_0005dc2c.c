/*
 * Function: FUN_0005dc2c
 * Entry:    0005dc2c
 * Prototype: undefined FUN_0005dc2c()
 */


undefined4 FUN_0005dc2c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 local_20;
  char *local_1c;
  
  uVar1 = FUN_00082ff6(param_1 + 4,2);
  if (uVar1 != 0) {
    uVar1 = (uint)(*(short *)(param_1 + 0xe8) == 0);
  }
  iVar2 = FUN_00082ff6(extraout_r3,3);
  if (((iVar2 != 0) || (iVar2 = FUN_00082ff6(extraout_r3_00,1), iVar2 != 0)) ||
     (iVar2 = FUN_00082ff6(extraout_r3_01,0xf), iVar2 != 0)) {
    FUN_0005daf0(param_1,param_2);
  }
  if (uVar1 == 0) {
    iVar2 = FUN_000830b0(param_1,5);
    if (iVar2 == 0) {
      return 0xffffff97;
    }
    puVar3 = (undefined1 *)FUN_0005f5d0(iVar2 + 0xc,1);
    *puVar3 = (char)param_2;
    iVar4 = FUN_00081820(*(undefined4 *)(param_1 + 0xf0),6,iVar2,0,0);
    if (iVar4 != 0) {
      FUN_0005f24c(iVar2);
    }
  }
  else {
    local_1c = 
    "SMP does not allow a pairing failure at this point. Known issue. Disconnecting instead.";
    local_20 = 2;
    FUN_00083074(&DAT_00088180,0x1080,&local_20);
    bt_connection_disconnect(*(undefined4 *)(param_1 + 0xf0),5);
  }
  return 0;
}


