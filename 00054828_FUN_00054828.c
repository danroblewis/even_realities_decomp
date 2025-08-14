/*
 * Function: FUN_00054828
 * Entry:    00054828
 * Prototype: undefined FUN_00054828()
 */


undefined4 FUN_00054828(int param_1)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  uint uStack_18;
  
  uStack_18 = (uint)*(byte *)(param_1 + 0x18);
  if (uStack_18 == 1) {
    iVar1 = FUN_00080e14(**(undefined1 **)(param_1 + 0xc));
    if (iVar1 << 0x1f < 0) {
      FUN_00054784(param_1);
    }
    if (-1 < iVar1 << 0x1e) {
      return 0;
    }
  }
  else if (uStack_18 != 3) {
    local_1c = "Invalid buf type %u";
    local_20 = 3;
    FUN_00080ea2(&DAT_00088138,0x1840,&local_20);
    FUN_0005f24c(param_1);
    return 0xffffffea;
  }
  FUN_00053530(param_1);
  return 0;
}


