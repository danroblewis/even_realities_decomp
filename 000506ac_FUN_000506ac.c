/*
 * Function: FUN_000506ac
 * Entry:    000506ac
 * Prototype: undefined FUN_000506ac()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000506ac(void)

{
  undefined4 uVar1;
  undefined4 local_10;
  char *local_c;
  
  local_c = "***** USAGE FAULT *****";
  local_10 = 2;
  FUN_00080780(&DAT_00088258,0x1040,&local_10);
  if ((int)(_DAT_e000ed28 << 6) < 0) {
    local_10 = 2;
    local_c = "  Division by zero";
    FUN_00080780(&DAT_00088258,0x1040,&local_10);
    uVar1 = 0x1e;
  }
  else {
    uVar1 = 0x1d;
  }
  if ((int)(_DAT_e000ed28 << 7) < 0) {
    local_c = "  Unaligned memory access";
    local_10 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_10);
    uVar1 = 0x1f;
  }
  if ((int)(_DAT_e000ed28 << 0xb) < 0) {
    local_c = "  Stack overflow (context area not valid)";
    local_10 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_10);
    uVar1 = 2;
  }
  if ((int)(_DAT_e000ed28 << 0xc) < 0) {
    local_c = "  No coprocessor instructions";
    local_10 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_10);
    uVar1 = 0x21;
  }
  if ((int)(_DAT_e000ed28 << 0xd) < 0) {
    local_c = "  Illegal load of EXC_RETURN into PC";
    local_10 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_10);
    uVar1 = 0x22;
  }
  if ((int)(_DAT_e000ed28 << 0xe) < 0) {
    local_c = "  Illegal use of the EPSR";
    local_10 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_10);
    uVar1 = 0x23;
  }
  if ((int)(_DAT_e000ed28 << 0xf) < 0) {
    local_c = "  Attempt to execute undefined instruction";
    local_10 = 2;
    FUN_00080780(&DAT_00088258,0x1040,&local_10);
    uVar1 = 0x24;
  }
  _DAT_e000ed28 = ~(~(_DAT_e000ed28 << 0x10) >> 0x10);
  return uVar1;
}


