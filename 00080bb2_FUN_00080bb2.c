/*
 * Function: FUN_00080bb2
 * Entry:    00080bb2
 * Prototype: undefined FUN_00080bb2()
 */


uint FUN_00080bb2(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x44);
    if ((uVar1 == 0) || (param_2 != 0)) {
      FUN_00052744(param_1);
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    else {
      uVar1 = 0xffffffc3;
    }
  }
  return uVar1;
}


