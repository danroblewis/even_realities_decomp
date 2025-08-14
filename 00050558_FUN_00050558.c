/*
 * Function: FUN_00050558
 * Entry:    00050558
 * Prototype: undefined FUN_00050558()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00050558(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 local_40;
  char *local_3c;
  undefined4 uStack_38;
  undefined4 local_20;
  char *local_1c;
  
  local_1c = "***** BUS FAULT *****";
  local_20 = 2;
  FUN_00080780(&DAT_00088258,0x1040,&local_20);
  if ((int)(_DAT_e000ed28 << 0x13) < 0) {
    local_20 = 2;
    local_1c = "  Stacking error";
    FUN_00080780(&DAT_00088258,0x1040,&local_20);
    uVar1 = 0x17;
  }
  else {
    uVar1 = 0x16;
  }
  if ((int)(_DAT_e000ed28 << 0x14) < 0) {
    local_1c = "  Unstacking error";
    local_20 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_20);
    uVar1 = 0x18;
  }
  if ((int)(_DAT_e000ed28 << 0x16) < 0) {
    local_1c = "  Precise data bus error";
    local_20 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_20);
    if ((int)(_DAT_e000ed28 << 0x10) < 0) {
      local_3c = "  BFAR Address: 0x%x";
      uStack_38 = _DAT_e000ed38;
      local_40 = 3;
      FUN_00080780(&DAT_00088258,0x1840,&local_40);
      if (param_1 != 0) {
        _DAT_e000ed28 = _DAT_e000ed28 & 0xffff7fff;
      }
    }
    uVar1 = 0x19;
  }
  if ((int)(_DAT_e000ed28 << 0x15) < 0) {
    local_1c = "  Imprecise data bus error";
    local_20 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_20);
    uVar1 = 0x1a;
  }
  if ((int)(_DAT_e000ed28 << 0x17) < 0) {
    local_1c = "  Instruction bus error";
    local_20 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_20);
    uVar1 = 0x1b;
  }
  else if ((int)(_DAT_e000ed28 << 0x12) < 0) {
    local_1c = "  Floating-point lazy state preservation error";
    local_20 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_20);
    uVar1 = 0x1c;
  }
  _DAT_e000ed28 = _DAT_e000ed28 | 0xff00;
  *param_2 = 0;
  return uVar1;
}


