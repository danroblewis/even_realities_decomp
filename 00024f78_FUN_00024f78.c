/*
 * Function: FUN_00024f78
 * Entry:    00024f78
 * Prototype: undefined FUN_00024f78()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00024f78(void)

{
  short sVar1;
  int iVar2;
  undefined1 local_19;
  undefined4 local_18;
  ushort local_12;
  
  local_18 = _DAT_20007a14;
  DAT_20007a20 = 4;
  if (DAT_20007a16 == '\0') {
    local_12 = DAT_20007a1a << 8 | DAT_20007a1a >> 8;
    DAT_20007a20 = 8;
  }
  sVar1 = FUN_00024f08(&local_18);
  iVar2 = (int)sVar1;
  if (iVar2 == 0) {
    local_19 = 3;
    iVar2 = FUN_000256dc(DAT_20007a44,DAT_20007a20,&local_19,1);
    if (iVar2 == 0) {
      local_19 = 0;
      iVar2 = FUN_000256dc(DAT_20007a44,DAT_20007a20 + 1,&local_19);
      if (iVar2 != 0) {
        iVar2 = 1;
      }
      iVar2 = -iVar2;
    }
    else {
      iVar2 = -1;
    }
  }
  return iVar2;
}


