/*
 * Function: FUN_0007ab70
 * Entry:    0007ab70
 * Prototype: undefined FUN_0007ab70()
 */


undefined4 FUN_0007ab70(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  if ((((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_2 < 2)) {
    if (param_2 == 1) {
      if (*(int *)(param_1 + 0x38) != 0) {
        return 0xffffffde;
      }
    }
    else if (*(int *)(param_1 + 0x38) != 1) {
      return 0xffffffde;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    iVar1 = FUN_0007b130(param_3,0x10,auStack_20,param_4,0x10,auStack_18);
    if ((iVar1 == 0) && (iVar1 = FUN_0007b694(param_1,auStack_20,auStack_18,0x10), iVar1 == 0)) {
      return 0;
    }
  }
  return 0xffffffde;
}


