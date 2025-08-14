/*
 * Function: FUN_000545f0
 * Entry:    000545f0
 * Prototype: undefined FUN_000545f0()
 */


void FUN_000545f0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined4 local_50;
  char *local_4c;
  uint uStack_48;
  undefined4 local_30;
  char *local_2c;
  
  do {
    DAT_20002950 = DAT_20002950 & 0xffe03fff;
    iVar2 = FUN_000565c4(&DAT_20002958);
    iVar2 = iVar2 + 1;
    uVar8 = FUN_000755f8(&DAT_20002944,iVar2,0xffffffff,0xffffffff);
    if ((int)uVar8 != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == 0",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/hci_core.c",0xade);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0);
      }
      uVar8 = CONCAT44(extraout_r1,3);
      software_interrupt(2);
    }
    puVar7 = &DAT_20002944;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar6 = (uint)(*(int *)(puVar7 + 0xc) << 0xb) >> 0x19;
      if (2 < uVar6) {
        if (uVar6 == 4) {
          if (puVar7[0xc] == '\0') {
            uVar8 = thunk_FUN_000727ac(&DAT_2000214c,(int)((ulonglong)uVar8 >> 0x20),0,0);
            uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
            iVar3 = (int)uVar8;
            if (iVar3 == 0) {
              DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf",
                           "WEST_TOPDIR/zephyr/subsys/bluetooth/host/hci_core.c",0xa70);
              bVar1 = (bool)isCurrentModePrivileged();
              if (bVar1) {
                setBasePriority(0);
              }
              software_interrupt(2);
              uVar5 = extraout_r1_00;
            }
            FUN_00072908(&DAT_20002128,uVar5,0xffffffff,0xffffffff);
            if (DAT_20002140 != 0) {
              local_2c = "Uncleared pending sent_cmd";
              local_30 = 2;
              FUN_00080ea2(&DAT_00088138,0x1040,&local_30);
              FUN_0005f24c(DAT_20002140);
              DAT_20002140 = 0;
            }
            DAT_20002140 = FUN_0005f2d4(iVar3);
            uVar8 = FUN_000543c8(iVar3);
            if ((uint)uVar8 != 0) {
              local_4c = "Unable to send to driver (err %d)";
              local_50 = 3;
              uStack_48 = (uint)uVar8;
              FUN_00080ea2(&DAT_00088138,0x1840,&local_50);
              z_spin_lock_valid(&DAT_20002128);
              iVar4 = FUN_0005ee18(iVar3);
              FUN_000538f8(*(undefined2 *)(&DAT_2000abf6 + iVar4 * 0xc),0x1f,iVar3);
              uVar8 = FUN_0005f24c(iVar3);
            }
          }
          else if (puVar7[0xc] == '\x01') {
            uVar8 = FUN_000571e8(*(int *)(puVar7 + 0x10) + -0x38);
          }
        }
        else {
          local_4c = "Unexpected k_poll event state %u";
          local_50 = 3;
          uStack_48 = uVar6;
          uVar8 = FUN_00080ea2(&DAT_00088138,0x1880,&local_50);
        }
      }
      puVar7 = puVar7 + 0x14;
    }
    FUN_000745c8((int)uVar8);
  } while( true );
}


