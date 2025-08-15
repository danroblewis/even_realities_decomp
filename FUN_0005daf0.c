/*
 * Function: FUN_0005daf0
 * Entry:    0005daf0
 * Prototype: undefined FUN_0005daf0()
 */


void FUN_0005daf0(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_20;
  char *local_1c;
  
  iVar5 = *(int *)(param_1 + 0xf0);
  iVar6 = param_1 + 4;
  if (*(char *)(iVar5 + 0xd) == '\a') {
    if (param_2 == 0) {
      iVar6 = FUN_00082ff6(iVar6,0xd);
      if (iVar6 != 0) {
        FUN_0005ec18(*(undefined4 *)(iVar5 + 0xc0));
      }
      if (DAT_2000ad20 != (int *)0x0) {
        puVar7 = (undefined4 *)*DAT_2000ad20;
        if (puVar7 != (undefined4 *)0x0) {
          puVar7 = puVar7 + -3;
        }
        pcVar4 = (code *)DAT_2000ad20[-3];
        if (pcVar4 == (code *)0x0) goto LAB_0005dba4;
        do {
          (*pcVar4)(iVar5,iVar6);
LAB_0005dba4:
          if (puVar7 == (undefined4 *)0x0) break;
          do {
            pcVar4 = (code *)*puVar7;
            if (puVar7[3] == 0) {
              puVar7 = (undefined4 *)0x0;
              if (pcVar4 == (code *)0x0) goto LAB_0005dbba;
              break;
            }
            puVar7 = (undefined4 *)(puVar7[3] + -0xc);
          } while (pcVar4 == (code *)0x0);
        } while( true );
      }
      goto LAB_0005dbba;
    }
    uVar3 = param_2 - 1U & 0xff;
    if (uVar3 < 0xf) goto LAB_0005db1a;
    uVar3 = 9;
  }
  else {
    local_1c = "Not connected!";
    local_20 = 2;
    FUN_00083074(&DAT_00088180,0x1080,&local_20);
    uVar3 = 7;
LAB_0005db1a:
    uVar3 = (uint)(byte)(&DAT_000f5220)[uVar3];
  }
  if ((*(int *)(iVar5 + 0xc0) != 0) &&
     ((*(char *)(*(int *)(iVar5 + 0xc0) + 0xc) == '\0' ||
      (iVar1 = FUN_00082ff6(iVar6,2), iVar1 != 0)))) {
    FUN_0005ea18(*(undefined4 *)(iVar5 + 0xc0));
    *(undefined4 *)(iVar5 + 0xc0) = 0;
  }
  iVar1 = FUN_00082ff6(iVar6,2);
  if (iVar1 == 0) {
    if (uVar3 < 8) {
      uVar2 = (&DAT_000f520f)[uVar3];
    }
    else {
      uVar2 = 0x1f;
    }
    bt_connection_disconnect_with_parameter_validation(iVar5,uVar2,uVar3);
  }
  iVar6 = FUN_00082ff6(iVar6,3);
  if ((iVar6 != 0) && (DAT_2000ad20 != (int *)0x0)) {
    iVar6 = *DAT_2000ad20;
    if (iVar6 != 0) {
      iVar6 = iVar6 + -0xc;
    }
    pcVar4 = (code *)DAT_2000ad20[-2];
    if (pcVar4 != (code *)0x0) goto LAB_0005dbf8;
    while (iVar6 != 0) {
      do {
        pcVar4 = *(code **)(iVar6 + 4);
        if (*(int *)(iVar6 + 0xc) == 0) {
          iVar6 = 0;
          if (pcVar4 == (code *)0x0) goto LAB_0005dbba;
          break;
        }
        iVar6 = *(int *)(iVar6 + 0xc) + -0xc;
      } while (pcVar4 == (code *)0x0);
LAB_0005dbf8:
      (*pcVar4)(iVar5,uVar3);
    }
  }
LAB_0005dbba:
  FUN_00083204(param_1);
  if ((*(char *)(iVar5 + 0xd) == '\a') && (*(char *)(iVar5 + 9) != *(char *)(iVar5 + 10))) {
    FUN_0005d964(iVar5);
    return;
  }
  return;
}


