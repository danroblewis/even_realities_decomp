/*
 * Function: FUN_00084774
 * Entry:    00084774
 * Prototype: undefined FUN_00084774()
 */


undefined4 FUN_00084774(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(param_1[1] * ((uint)*(ushort *)((int)param_1 + 10) - (uint)*(ushort *)(param_1 + 2)) +
           *param_1) < param_2) {
    if ((int)(param_1[4] * ((uint)*(ushort *)((int)param_1 + 0x16) - (uint)*(ushort *)(param_1 + 5))
             + param_1[3]) < param_2) {
      return 0xffffffea;
    }
    param_1 = param_1 + 3;
  }
  uVar1 = FUN_00084602(param_1);
  return uVar1;
}


