/*
 * Function: FUN_00080058
 * Entry:    00080058
 * Prototype: undefined FUN_00080058()
 */


int FUN_00080058(int param_1,int param_2,int param_3)

{
  int extraout_r1;
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_1 = 0;
    }
    else if (param_3 == 0) {
      param_1 = 0;
    }
    else {
      FUN_0007feaa(auStack_30,0x10,param_2);
      FUN_0007feda(auStack_30,param_3);
      iVar1 = param_3 + 0x10;
      do {
        FUN_0004fa1c(auStack_30);
        FUN_0007ff64(auStack_30);
        FUN_0007ffd6(auStack_20,auStack_30);
        FUN_0007ffd6(auStack_1c,auStack_2c);
        FUN_0007ffd6(auStack_18,auStack_28);
        FUN_0007ffd6(auStack_14,auStack_24);
        FUN_0007feaa(auStack_30,0x10,auStack_20);
        iVar2 = iVar1 + 0x10;
        FUN_0007feda(auStack_30,iVar1);
        iVar1 = iVar2;
      } while (iVar2 != extraout_r1 + 0xa0);
      FUN_0004fa1c();
      FUN_0007ff64(auStack_30);
      FUN_0007feda(auStack_30,iVar2);
      FUN_0007feaa(param_1,0x10,auStack_30);
      fill_memory_buffer(auStack_30,0,0x10);
      param_1 = 1;
    }
  }
  return param_1;
}


