/*
 * Function: FUN_00030710
 * Entry:    00030710
 * Prototype: undefined FUN_00030710()
 */


undefined4 FUN_00030710(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined *local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 *local_c;
  
  iVar1 = FUN_000302cc();
  if (iVar1 == 0) {
    local_c = &local_2c;
    local_2c = 0x37f8;
    uStack_28 = 0x800;
    uStack_24 = 0x3ff8;
    uStack_20 = 0x3ffc;
    local_1c[0] = 1;
    local_18 = &DAT_000a49ed;
    local_14 = 0x1b9c;
    uStack_10 = 0x2000;
    uVar2 = FUN_00030528(local_1c);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


