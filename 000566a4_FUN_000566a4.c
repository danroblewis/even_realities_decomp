/*
 * Function: FUN_000566a4
 * Entry:    000566a4
 * Prototype: undefined FUN_000566a4()
 */


/* WARNING: Removing unreachable block (ram,0x00055b8c) */

void FUN_000566a4(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 local_30;
  char *local_2c;
  int iStack_28;
  undefined4 local_1c [3];
  
  piVar3 = (int *)(param_1 + 0xd0);
  iVar2 = *piVar3;
  *piVar3 = iVar2 + -1;
  if (iVar2 < 1) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","old > 0",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x525);
    DEBUG_PRINT2("\tConn reference counter is 0\n");
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x525);
  }
  if ((*(short *)(param_1 + 2) == 0x101) && (*piVar3 == 0)) {
    uVar1 = FUN_0008117a(&DAT_20002028);
    if (((uVar1 & 0x4000) != 0) &&
       (((iVar2 = FUN_0008117a(&DAT_20002028), -1 < iVar2 << 0x18 &&
         (iVar2 = FUN_0008117a(&DAT_20002028), iVar2 << 0x15 < 0)) &&
        (iVar2 = FUN_000556b0(&DAT_20002018,local_1c), iVar2 == 0)))) {
      uVar4 = FUN_00055698(&DAT_20002018);
      iVar2 = FUN_0008117a(&DAT_20002028,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
      uVar4 = FUN_0008117a(&DAT_20002028,(uint)(iVar2 << 0x11) >> 0x1f);
      uVar1 = ((uint)((ulonglong)uVar4 >> 0x20) ^ 1) << 1;
      if ((int)uVar4 << 0x15 < 0) {
        uVar1 = uVar1 | 1;
      }
      uVar4 = FUN_0008117a(&DAT_20002028,uVar1);
      uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 << 0x12 < 0) {
        uVar1 = uVar1 | 4;
      }
      iStack_28 = FUN_00055454(&DAT_20002018,uVar1);
      if (iStack_28 == 0) {
        iVar2 = FUN_000812d2(&DAT_20002018,1);
        if (iVar2 == 0) {
          FUN_000566a4(local_1c[0]);
        }
        else {
          bt_connection_state_transition(local_1c[0],0);
          iVar2 = FUN_00081180(&DAT_20002028,0xffffbfff);
          FUN_000566a4(local_1c[0]);
          if (iVar2 << 0x11 < 0) {
            DAT_20002028 = DAT_20002028 | 0x4000;
          }
        }
      }
      else {
        local_2c = "Controller cannot resume connectable advertising (%d)";
        local_30 = 3;
        FUN_0004d944(&DAT_000880f8,0x1840,&local_30,0);
      }
    }
    return;
  }
  return;
}


