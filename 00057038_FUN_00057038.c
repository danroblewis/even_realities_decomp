/*
 * Function: FUN_00057038
 * Entry:    00057038
 * Prototype: undefined FUN_00057038()
 */


int FUN_00057038(int param_1,undefined2 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00080f14(param_2);
  if (iVar1 == 0) {
    iVar1 = -0x16;
  }
  else {
    if ((((-1 < (int)((uint)(byte)DAT_200020d8 << 0x1e)) ||
         (-1 < (int)((uint)*(byte *)(param_1 + 0xb5) << 0x1e))) ||
        (*(int *)(param_1 + 4) << 0x15 < 0)) && (*(char *)(param_1 + 3) != '\0')) {
      iVar1 = FUN_00081adc(param_1,param_2);
      return iVar1;
    }
    iVar1 = FUN_0008152a(param_1,param_2);
    if (iVar1 == 0) {
      *(undefined2 *)(param_1 + 0xa8) = *param_2;
      *(undefined2 *)(param_1 + 0xaa) = param_2[1];
      *(undefined2 *)(param_1 + 0xb0) = param_2[2];
      *(undefined2 *)(param_1 + 0xb2) = param_2[3];
    }
  }
  return iVar1;
}


