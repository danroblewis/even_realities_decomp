/*
 * Function: FUN_00080452
 * Entry:    00080452
 * Prototype: undefined FUN_00080452()
 */


int FUN_00080452(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_148 [64];
  undefined1 auStack_108 [144];
  undefined1 auStack_78 [100];
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_1 = 0;
    }
    else if (param_3 == 0) {
      param_1 = 0;
    }
    else {
      if (param_3 < 0x41) {
        FUN_0004fca0(auStack_108);
        FUN_00080300(auStack_108,auStack_148,param_3);
        FUN_0008034c(auStack_78,auStack_108);
        iVar1 = param_2;
      }
      else {
        FUN_0004fca0();
        iVar1 = param_1 + 0x90;
        FUN_00080300(param_1,param_2,param_3);
        FUN_0008034c(iVar1,param_1);
        param_3 = 0x20;
      }
      FUN_00080406(param_1 + 0x70,iVar1,param_3);
      param_1 = 1;
    }
  }
  return param_1;
}


