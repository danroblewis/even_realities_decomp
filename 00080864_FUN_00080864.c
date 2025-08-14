/*
 * Function: FUN_00080864
 * Entry:    00080864
 * Prototype: undefined FUN_00080864()
 */


void FUN_00080864(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*param_1 + 0xc);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  return;
}


