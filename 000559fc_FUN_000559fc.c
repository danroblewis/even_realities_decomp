/*
 * Function: FUN_000559fc
 * Entry:    000559fc
 * Prototype: undefined FUN_000559fc()
 */


uint FUN_000559fc(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  FUN_00081320(&DAT_20002018);
  FUN_00081180(&DAT_20002028,0xffffbfff);
  iVar1 = FUN_0008117a(&DAT_20002028);
  if (iVar1 << 0x18 < 0) {
    iVar1 = FUN_0008117a(&DAT_20002028);
    if (iVar1 << 0x15 < 0) {
      iVar1 = FUN_00055698(&DAT_20002018);
      if (iVar1 == 0) {
        uVar4 = 4;
        puVar3 = &DAT_000f2b33;
      }
      else {
        uVar4 = 5;
        puVar3 = &DAT_20002021;
      }
      iVar1 = FUN_00056f08(DAT_20002018,puVar3,uVar4);
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0xc) = 0;
        bt_connection_state_transition();
        FUN_000566a4(iVar1);
      }
    }
    uVar2 = FUN_000812d2(&DAT_20002018,0);
    return uVar2;
  }
  return (uint)(iVar1 << 0x18) >> 0x1f;
}


