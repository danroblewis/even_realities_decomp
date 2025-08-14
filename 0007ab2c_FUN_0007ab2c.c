/*
 * Function: FUN_0007ab2c
 * Entry:    0007ab2c
 * Prototype: undefined FUN_0007ab2c()
 */


undefined4 FUN_0007ab2c(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffde;
  }
  if (param_2 != 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x3c) = 0;
    if (param_3 == 0xc0) {
      uVar1 = 1;
    }
    else if (param_3 == 0x100) {
      uVar1 = 2;
    }
    else if (param_3 != 0x80) {
      return 0xffffffe0;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    thunk_FUN_00086c44(param_1 + 0x10,param_2,param_3 >> 3,uVar1,param_4);
    return 0;
  }
  return 0xffffffe0;
}


