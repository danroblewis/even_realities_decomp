/*
 * Function: FUN_000570a0
 * Entry:    000570a0
 * Prototype: undefined FUN_000570a0()
 */


/* WARNING: Removing unreachable block (ram,0x000571a4) */
/* WARNING: Removing unreachable block (ram,0x0005715e) */

void FUN_000570a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 local_30;
  char *local_2c;
  int iStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar4 = param_1 + -0x60;
  if (*(char *)(param_1 + -0x53) == '\0') {
    FUN_000817ea(iVar4);
    for (iVar2 = DAT_2000ad1c; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
      if (*(code **)(iVar2 + 4) != (code *)0x0) {
        (**(code **)(iVar2 + 4))(iVar4,*(undefined1 *)(param_1 + -0x54));
      }
    }
    puVar1 = &DAT_00087fec;
    while( true ) {
      if (&DAT_00088058 < puVar1) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","cb <= _bt_conn_cb_list_end",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x5fe);
        DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
        FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x5fe);
      }
      if (&UNK_00088057 < puVar1) break;
      if ((code *)puVar1[1] != (code *)0x0) {
        (*(code *)puVar1[1])(iVar4,*(undefined1 *)(param_1 + -0x54));
      }
      puVar1 = puVar1 + 9;
    }
    FUN_000566a4(iVar4);
    return;
  }
  if (*(char *)(param_1 + -0x5e) != '\x01') {
    return;
  }
  puVar3 = (uint *)(param_1 + -0x5c);
  iVar2 = FUN_000813b4(puVar3,0xfffffdff);
  if (iVar2 << 0x16 < 0) {
    local_20 = *(undefined4 *)(param_1 + 0x48);
    local_1c = *(undefined4 *)(param_1 + 0x50);
    iStack_28 = FUN_00057038(iVar4,&local_20);
    if (iStack_28 == 0) {
      FUN_000813b4(puVar3,0xfffffeff);
      goto LAB_0005714e;
    }
    local_2c = "Send LE param update failed (err %d)";
  }
  else {
    local_20 = 0x280018;
    local_1c = 0x2a0000;
    iStack_28 = FUN_00057038(iVar4,&local_20);
    if (iStack_28 == 0) {
      *puVar3 = *puVar3 | 0x100;
      goto LAB_0005714e;
    }
    local_2c = "Send auto LE param update failed (err %d)";
  }
  local_30 = 3;
  FUN_000813ca(&DAT_00088108,0x1880,&local_30);
LAB_0005714e:
  *puVar3 = *puVar3 | 0x80;
  return;
}


