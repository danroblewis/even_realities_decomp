/*
 * Function: FUN_0005b9cc
 * Entry:    0005b9cc
 * Prototype: undefined FUN_0005b9cc()
 */


undefined4 FUN_0005b9cc(int param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_38;
  char *local_34;
  uint local_30;
  undefined4 local_2c;
  char local_28 [2];
  undefined2 local_26;
  char local_24 [2];
  undefined2 local_22;
  char local_20 [2];
  undefined2 local_1e;
  char local_1c [2];
  undefined2 local_1a;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conn",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x118f);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar4 = 0x118f;
  }
  else if ((param_2 == (int *)0x0) || (param_2[1] == 0)) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","params && params->func",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x1190);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar4 = 0x1190;
  }
  else if ((*(ushort *)(param_2 + 2) == 0) || (*(ushort *)((int)param_2 + 0xe) == 0)) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","(params->start_handle && params->end_handle)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x1191);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar4 = 0x1191;
  }
  else {
    if (*(ushort *)(param_2 + 2) <= *(ushort *)((int)param_2 + 0xe)) {
      if (*(char *)(param_1 + 0xd) != '\a') {
        return 0xffffff80;
      }
      local_30 = (uint)*(byte *)(param_2 + 4);
      switch(local_30) {
      case 0:
      case 1:
        if ((byte *)*param_2 == (byte *)0x0) {
          local_30 = 0x10;
          local_2c = 4;
          puVar5 = (undefined1 *)0x827af;
          uVar4 = 0x5bbf5;
        }
        else {
          local_30 = (uint)*(byte *)*param_2;
          if (local_30 == 0) {
            local_2c = 8;
          }
          else {
            if (local_30 != 2) {
              local_34 = "Unknown UUID type %u";
              goto switchD_0005ba66_caseD_7;
            }
            local_2c = 0x16;
          }
          local_30 = 6;
          uVar4 = 0x82d6b;
          puVar5 = &LAB_00082a66_1;
        }
        break;
      case 4:
        if (*param_2 != 0) {
          local_28[0] = '\0';
          local_26 = 0x2800;
          iVar3 = compare_data_structures(*param_2,local_28);
          if (iVar3 == 0) {
            return 0xffffffea;
          }
          local_24[0] = '\0';
          local_22 = 0x2801;
          iVar3 = compare_data_structures(*param_2,local_24);
          if (iVar3 == 0) {
            return 0xffffffea;
          }
          local_20[0] = '\0';
          local_1e = 0x2802;
          iVar3 = compare_data_structures(*param_2,local_20);
          if (iVar3 == 0) {
            return 0xffffffea;
          }
          local_1c[0] = '\0';
          local_1a = 0x2803;
          iVar3 = compare_data_structures(*param_2,local_1c);
          if (iVar3 == 0) {
            return 0xffffffea;
          }
        }
      case 5:
        local_30 = 4;
        local_2c = 4;
        uVar4 = 0x5c0bd;
        puVar5 = (undefined1 *)0x82773;
        break;
      case 6:
        pcVar2 = (char *)*param_2;
        if (pcVar2 == (char *)0x0) {
          return 0xffffffea;
        }
        cVar1 = *pcVar2;
        if (cVar1 != '\0') {
          return 0xffffffea;
        }
        local_26 = 0x2900;
        local_28[0] = cVar1;
        iVar3 = compare_data_structures(pcVar2,local_28);
        if (iVar3 != 0) {
          local_22 = 0x2902;
          local_24[0] = cVar1;
          iVar3 = compare_data_structures(*param_2,local_24);
          if (iVar3 != 0) {
            local_1e = 0x2903;
            local_20[0] = cVar1;
            iVar3 = compare_data_structures(*param_2,local_20);
            if (iVar3 != 0) {
              local_1a = 0x2904;
              local_1c[0] = cVar1;
              iVar3 = compare_data_structures(*param_2,local_1c);
              if (iVar3 != 0) {
                return 0xffffffea;
              }
            }
          }
        }
      case 2:
      case 3:
        uVar4 = 0x5bd19;
        local_30 = 8;
        local_2c = 4;
        puVar5 = (undefined1 *)0x827df;
        break;
      default:
        local_34 = "Invalid discovery type: %u";
switchD_0005ba66_caseD_7:
        local_38 = 3;
        FUN_00082a42(&DAT_00088128,0x1840,&local_38);
        return 0xffffffea;
      }
      uVar4 = FUN_00082aee(param_1,uVar4,param_2,puVar5);
      return uVar4;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","(params->start_handle <= params->end_handle)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x1193);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar4 = 0x1193;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",uVar4);
}


