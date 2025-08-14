/*
 * Function: FUN_00080c20
 * Entry:    00080c20
 * Prototype: undefined FUN_00080c20()
 */


uint FUN_00080c20(int param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (uVar1 = FUN_000527dc(param_2), param_2 = (uint)uVar1, param_2 != 0)) {
    if (*(int *)(param_1 + 0x18) == (int)((ulonglong)uVar1 >> 0x20)) {
      param_2 = (uint)(*(char *)(param_2 + 0x69) == *(char *)(param_1 + 0x1c));
    }
    else {
      param_2 = 1;
    }
  }
  return param_2;
}


