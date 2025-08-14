/*
 * Function: FUN_000536b8
 * Entry:    000536b8
 * Prototype: undefined FUN_000536b8()
 */


void FUN_000536b8(void)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 local_28;
  char *local_24;
  uint uStack_20;
  uint local_1c;
  
  iVar4 = FUN_0005f148(&DAT_20002144);
  if (iVar4 == 0) {
    return;
  }
  uVar8 = (uint)*(byte *)(iVar4 + 0x18);
  if (uVar8 == 1) {
    if (*(ushort *)(iVar4 + 0x10) < 2) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf->len >= sizeof(*hdr)",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/hci_core.c",0xa5d);
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(0);
      }
      software_interrupt(2);
    }
    puVar7 = (undefined1 *)FUN_0005f594(iVar4 + 0xc,2);
    iVar6 = FUN_00080e14(*puVar7);
    if (-1 < iVar6 << 0x1e) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","bt_hci_evt_get_flags(hdr->evt) & (1UL << (1))",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/hci_core.c",0xa61);
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(0);
      }
      software_interrupt(2);
    }
    FUN_00053658(*puVar7,iVar4,&DAT_0008b190,6);
  }
  else {
    if (uVar8 == 3) {
      if (*(ushort *)(iVar4 + 0x10) < 4) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf->len >= sizeof(*hdr)",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/hci_core.c",0x200);
        bVar3 = (bool)isCurrentModePrivileged();
        if (bVar3) {
          setBasePriority(0);
        }
        software_interrupt(2);
      }
      puVar5 = (ushort *)FUN_0005f594(iVar4 + 0xc,4);
      uVar1 = puVar5[1];
      uVar2 = *puVar5;
      iVar6 = FUN_0005ee18(iVar4);
      *(ushort *)(&DAT_2000ff08 + iVar6 * 2) = (ushort)(((uint)uVar2 << 0x14) >> 0x14);
      if ((uint)uVar1 != (uint)*(ushort *)(iVar4 + 0x10)) {
        local_24 = "ACL data length mismatch (%u != %u)";
        local_28 = 4;
        uStack_20 = (uint)*(ushort *)(iVar4 + 0x10);
        local_1c = (uint)uVar1;
        FUN_00080ea2(&DAT_00088138,0x2040,&local_28);
        goto LAB_0005373c;
      }
      iVar6 = FUN_0005ee18(iVar4);
      iVar6 = FUN_00056908(*(undefined2 *)(&DAT_2000ff08 + iVar6 * 2),0xf);
      if (iVar6 != 0) {
        FUN_00056394(iVar6,iVar4,uVar2 >> 0xc);
        FUN_000566a4(iVar6);
        goto LAB_00053792;
      }
      iVar6 = FUN_0005ee18(iVar4);
      uVar8 = (uint)*(ushort *)(&DAT_2000ff08 + iVar6 * 2);
      local_24 = "Unable to find conn for handle %u";
    }
    else {
      local_24 = "Unknown buf type %u";
    }
    local_28 = 3;
    uStack_20 = uVar8;
    FUN_00080ea2(&DAT_00088138,0x1840,&local_28);
  }
LAB_0005373c:
  FUN_0005f24c(iVar4);
LAB_00053792:
  if ((DAT_20002144 != 0) &&
     (uStack_20 = FUN_000865fc(&DAT_20005f08,&DAT_20002980), (int)uStack_20 < 0)) {
    local_24 = "Could not submit rx_work: %d";
    local_28 = 3;
    FUN_00080ea2(&DAT_00088138,0x1840,&local_28);
  }
  return;
}


