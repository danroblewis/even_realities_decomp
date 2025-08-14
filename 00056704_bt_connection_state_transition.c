/*
 * Function: bt_connection_state_transition
 * Entry:    00056704
 * Prototype: undefined __stdcall bt_connection_state_transition(undefined4 conn_handle, undefined4 new_state)
 */


void bt_connection_state_transition(int conn_handle,char *new_state)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 *puVar4;
  undefined4 uVar5;
  char cVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 local_28;
  char *local_24;
  char *pcStack_20;
  undefined2 local_1c;
  
  pcVar7 = (char *)(uint)*(byte *)(conn_handle + 0xd);
  if (pcVar7 == new_state) {
    if (pcVar7 < (char *)0x9) {
      pcStack_20 = *(char **)(&UNK_0008b220 + (int)pcVar7 * 4);
    }
    else {
      pcStack_20 = "(unknown)";
    }
    local_24 = "no transition %s";
    uVar3 = 0x1c80;
    local_1c = 0x200;
    local_28 = 0x1000003;
LAB_0005673e:
    FUN_000813ca(&DAT_00088108,uVar3,&local_28);
  }
  else {
    *(char *)(conn_handle + 0xd) = (char)new_state;
    if ((pcVar7 == (char *)0x0) && (*(char *)(conn_handle + 2) != '\b')) {
      FUN_00056654();
    }
    switch(*(undefined1 *)(conn_handle + 0xd)) {
    case 0:
      if (*(char *)(conn_handle + 2) == '\x04') goto switchD_00056804_caseD_3;
      switch(pcVar7) {
      case (char *)0x0:
      case (char *)0x7:
      case (char *)0x8:
        local_24 = "Invalid (%u) old state";
        goto switchD_0005675e_caseD_9;
      case (char *)0x1:
        FUN_00056020(conn_handle);
        if (*(char *)(conn_handle + 2) == '\x01') {
          uVar2 = thunk_FUN_00072e9c(conn_handle + 0x60);
          if ((uVar2 & 0xc) != 0) {
            FUN_00073518(conn_handle + 0x60);
          }
        }
        *(uint *)(conn_handle + 4) = *(uint *)(conn_handle + 4) | 0x40;
        FUN_000757b0(&DAT_20002990,0);
        break;
      case (char *)0x2:
      case (char *)0x5:
      case (char *)0x6:
        if (*(char *)(conn_handle + 0xc) != '\0') {
          FUN_00055fb4(conn_handle);
        }
      case (char *)0x3:
      case (char *)0x4:
switchD_00056804_caseD_3:
        FUN_000566a4(conn_handle);
      }
      break;
    case 1:
      do {
        uVar3 = 0;
        bVar8 = (bool)isCurrentModePrivileged();
        if (bVar8) {
          uVar3 = getBasePriority();
        }
        bVar8 = (bool)isCurrentModePrivileged();
        if ((bVar8) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
          setBasePriority(0x20);
        }
        InstructionSynchronizationBarrier(0xf);
        if (*(int *)(conn_handle + 0x1c) == 0) {
          puVar4 = *(undefined4 **)(conn_handle + 0x14);
          if (puVar4 == (undefined4 *)0x0) {
            bVar8 = (bool)isCurrentModePrivileged();
            if (bVar8) {
              setBasePriority(uVar3);
            }
            InstructionSynchronizationBarrier(0xf);
            return;
          }
          uVar5 = *puVar4;
          if (puVar4 == *(undefined4 **)(conn_handle + 0x18)) {
            *(undefined4 *)(conn_handle + 0x18) = uVar5;
          }
          *(undefined4 *)(conn_handle + 0x14) = uVar5;
          bVar8 = (bool)isCurrentModePrivileged();
          if (bVar8) {
            setBasePriority(uVar3);
          }
          InstructionSynchronizationBarrier(0xf);
          uVar3 = 0;
          bVar8 = (bool)isCurrentModePrivileged();
          if (bVar8) {
            uVar3 = getBasePriority();
          }
          bVar8 = (bool)isCurrentModePrivileged();
          if ((bVar8) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
            setBasePriority(0x20);
          }
          InstructionSynchronizationBarrier(0xf);
          uVar5 = puVar4[3];
          *(undefined4 *)(conn_handle + 0x1c) = uVar5;
          puVar4[3] = 0;
          bVar8 = (bool)isCurrentModePrivileged();
          if (bVar8) {
            setBasePriority(uVar3);
          }
          InstructionSynchronizationBarrier(0xf);
          FUN_00056080(conn_handle,puVar4,uVar5,uVar3);
        }
        else {
          *(int *)(conn_handle + 0x1c) = *(int *)(conn_handle + 0x1c) + -1;
          bVar8 = (bool)isCurrentModePrivileged();
          if (bVar8) {
            setBasePriority(uVar3);
          }
          InstructionSynchronizationBarrier(0xf);
        }
        puVar1 = &DAT_20002108;
        if (DAT_20002104 == 0) {
          puVar1 = (undefined *)0x0;
        }
        z_spin_lock_valid(puVar1);
      } while( true );
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
      break;
    case 7:
      if (*(char *)(conn_handle + 2) != '\x04') {
        FUN_000864e8(conn_handle + 0x38);
        FUN_000757b0(&DAT_20002990,0);
        *(undefined4 *)(conn_handle + 0x54) = 0;
        *(undefined4 *)(conn_handle + 0x58) = 0;
        if (*(char *)(conn_handle + 3) == '\x01') {
          cVar6 = *(char *)(conn_handle + 2);
          bVar8 = cVar6 == '\x01';
          if (bVar8) {
            cVar6 = '\x03';
          }
          if (bVar8) {
            *(char *)(conn_handle + 0xb4) = cVar6;
          }
          FUN_00073418(conn_handle + 0x60,extraout_r1,0x28000,0);
        }
      }
      break;
    default:
      local_24 = "no valid (%u) state was set";
switchD_0005675e_caseD_9:
      uVar3 = 0x1880;
      local_28 = 3;
      pcStack_20 = new_state;
      goto LAB_0005673e;
    }
  }
  return;
}


