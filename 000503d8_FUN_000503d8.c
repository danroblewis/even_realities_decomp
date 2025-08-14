/*
 * Function: FUN_000503d8
 * Entry:    000503d8
 * Prototype: undefined FUN_000503d8()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000503d8(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 local_40;
  char *local_3c;
  undefined4 uStack_38;
  undefined4 local_20;
  char *local_1c;
  
  local_1c = "***** MPU FAULT *****";
  local_20 = 2;
  FUN_00080780(&DAT_00088258,0x1040,&local_20);
  if ((int)(_DAT_e000ed28 << 0x1b) < 0) {
    local_20 = 2;
    local_1c = "  Stacking error (context area might be not valid)";
    FUN_00080780(&DAT_00088258,0x1040,&local_20);
    uVar1 = 0x11;
  }
  else {
    uVar1 = 0x10;
  }
  if ((int)(_DAT_e000ed28 << 0x1c) < 0) {
    local_1c = "  Unstacking error";
    local_20 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_20);
    uVar1 = 0x12;
  }
  if ((int)(_DAT_e000ed28 << 0x1e) < 0) {
    local_1c = "  Data Access Violation";
    local_20 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_20);
    if ((int)(_DAT_e000ed28 << 0x18) < 0) {
      local_3c = "  MMFAR Address: 0x%x";
      uStack_38 = _DAT_e000ed34;
      local_40 = 3;
      FUN_00080780(&DAT_00088258,0x1840,&local_40);
      if (param_1 != 0) {
        _DAT_e000ed28 = _DAT_e000ed28 & 0xffffff7f;
      }
    }
    uVar1 = 0x13;
  }
  if ((int)(_DAT_e000ed28 << 0x1f) < 0) {
    local_1c = "  Instruction Access Violation";
    local_20 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_20);
    uVar1 = 0x14;
  }
  if ((int)(_DAT_e000ed28 << 0x1a) < 0) {
    local_1c = "  Floating-point lazy state preservation error";
    local_20 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_20);
    uVar1 = 0x15;
  }
  if ((((int)(_DAT_e000ed28 << 0x1b) < 0) || ((int)(_DAT_e000ed28 << 0x1e) < 0)) &&
     ((int)(_DAT_e000ed28 << 0x1b) < 0)) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "!(((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->CFSR & (1UL << (0U + 4U)))",
                 "WEST_TOPDIR/zephyr/arch/arm/core/aarch32/cortex_m/fault.c",0x163);
    DEBUG_PRINT2(
                "\tStacking or Data Access Violation error without stack guard, user-mode or null-pointer detection\n\n"
                );
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/arch/arm/core/aarch32/cortex_m/fault.c",0x163);
  }
  if ((int)(_DAT_e000ed28 << 0x1a) < 0) {
    _DAT_e000ed24 = _DAT_e000ed24 & 0xffffdfff;
  }
  _DAT_e000ed28 = _DAT_e000ed28 | 0xff;
  *param_2 = 0;
  return uVar1;
}


