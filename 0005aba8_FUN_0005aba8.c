/*
 * Function: FUN_0005aba8
 * Entry:    0005aba8
 * Prototype: undefined FUN_0005aba8()
 */


void FUN_0005aba8(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_120;
  char *local_11c;
  undefined1 auStack_118 [96];
  undefined1 auStack_b8 [176];
  
  local_140 = 0;
  uStack_13c = 0;
  local_138 = 0;
  uStack_134 = 0;
  iVar2 = FUN_0008016a(auStack_118,&local_140,auStack_b8);
  if (iVar2 == 0) {
    local_11c = "Unable to setup AES CMAC";
  }
  else {
    FUN_00082c9c(1,0xffff,0x8260d,auStack_118);
    iVar2 = FUN_00080294(&DAT_20006380,auStack_118);
    if (iVar2 != 0) {
      iVar2 = 0;
      puVar3 = &DAT_20006390;
      puVar4 = &DAT_20006380;
      do {
        uVar1 = *puVar4;
        puVar3 = puVar3 + -1;
        iVar2 = iVar2 + 1;
        *puVar4 = *puVar3;
        *puVar3 = uVar1;
        puVar4 = puVar4 + 1;
      } while (iVar2 != 8);
      FUN_000826e0(&DAT_20006448);
      return;
    }
    local_11c = "Unable to calculate hash";
  }
  local_120 = 2;
  FUN_00082a42(&DAT_00088128,0x1040,&local_120);
  return;
}


