/*
 * Function: FUN_00056ea8
 * Entry:    00056ea8
 * Prototype: undefined FUN_00056ea8()
 */


int FUN_00056ea8(void)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  char *pcStack_18;
  undefined2 local_14;
  
  iVar1 = FUN_00056e74();
  if (iVar1 != 0) {
    if (*(byte *)(iVar1 + 0xd) < 9) {
      pcStack_18 = *(char **)(&UNK_0008b220 + (uint)*(byte *)(iVar1 + 0xd) * 4);
    }
    else {
      pcStack_18 = "(unknown)";
    }
    local_1c = "Found valid connection in %s state";
    local_14 = 0x200;
    local_20 = 0x1000003;
    FUN_000813ca(&DAT_00088108,0x1c80,&local_20);
    FUN_000566a4(iVar1);
    iVar1 = 1;
  }
  return iVar1;
}


