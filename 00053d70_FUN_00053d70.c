/*
 * Function: FUN_00053d70
 * Entry:    00053d70
 * Prototype: undefined FUN_00053d70()
 */


undefined4 FUN_00053d70(undefined4 param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  undefined4 local_48;
  char *local_44;
  undefined4 uStack_40;
  uint local_3c;
  undefined1 auStack_38 [28];
  
  if ((param_2 == 0) && (param_2 = FUN_00053cd4(), param_2 == 0)) {
    uVar3 = 0xffffff97;
  }
  else {
    FUN_00086534(auStack_38,0,1);
    iVar2 = FUN_0005ee18(param_2);
    *(undefined1 **)(&DAT_2000abfc + iVar2 * 0xc) = auStack_38;
    uVar3 = FUN_0005f2d4(param_2);
    FUN_0005f200(&DAT_2000214c,uVar3);
    iVar2 = FUN_00072908(auStack_38,extraout_r1,0x50000,0);
    if (iVar2 != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == 0",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/hci_core.c",0x152);
      DEBUG_PRINT2("\tcommand opcode 0x%04x timeout with err %d\n",param_1,iVar2);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0);
      }
      software_interrupt(2);
    }
    iVar2 = FUN_0005ee18(param_2);
    uVar4 = (uint)(byte)(&DAT_2000abf4)[iVar2 * 0xc];
    if (uVar4 == 0) {
      if (param_3 == (int *)0x0) {
        FUN_0005f24c(param_2);
      }
      else {
        *param_3 = param_2;
      }
      uVar3 = 0;
    }
    else {
      local_44 = "opcode 0x%04x status 0x%02x";
      local_48 = 4;
      uStack_40 = param_1;
      local_3c = uVar4;
      FUN_00080ea2(&DAT_00088138,0x2080,&local_48);
      FUN_0005f24c(param_2);
      if (uVar4 == 9) {
        uVar3 = 0xffffff91;
      }
      else if (uVar4 == 0xd) {
        uVar3 = 0xfffffff4;
      }
      else {
        uVar3 = 0xfffffffb;
      }
    }
  }
  return uVar3;
}


