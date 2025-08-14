/*
 * Function: FUN_0007a16c
 * Entry:    0007a16c
 * Prototype: undefined FUN_0007a16c()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0007a16c(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_3c;
  undefined1 auStack_38 [44];
  
  local_3c = 0;
  fill_memory_buffer(auStack_38,0,0x28);
  iVar1 = FUN_0007af78(auStack_38);
  if (iVar1 == 0) {
    iVar1 = FUN_0007a404(DAT_20002f40,0xffffffff);
    if (iVar1 != 0) {
      FUN_000795b4("Fail to acquire mutex\n");
    }
    if ((_DAT_50846e34 & 1) == 0) {
      iVar1 = FUN_0007a464();
      if (iVar1 != 0) {
        FUN_000795b4("Fail to increase PM counter\n");
      }
      iVar1 = FUN_0007a9e0(&local_3c,auStack_38,&DAT_2000d120);
      iVar2 = FUN_0007a464(1);
      if (iVar2 != 0) {
        FUN_000795b4("Fail to decrease PM counter\n");
      }
      iVar2 = FUN_0007a414(DAT_20002f40);
    }
    else {
      iVar1 = 5;
      iVar2 = FUN_0007a414(DAT_20002f40);
    }
    if (iVar2 != 0) {
      FUN_000795b4("Fail to release mutex\n");
      return iVar1;
    }
  }
  return iVar1;
}


