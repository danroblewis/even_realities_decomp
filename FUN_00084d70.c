/*
 * Function: FUN_00084d70
 * Entry:    00084d70
 * Prototype: undefined FUN_00084d70()
 */


uint FUN_00084d70(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == 4) {
    return 1;
  }
  if (param_1 == 5) {
    uVar1 = param_2 - 1;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return (uint)(param_1 == param_2);
}


