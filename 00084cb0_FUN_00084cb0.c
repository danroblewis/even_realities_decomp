/*
 * Function: FUN_00084cb0
 * Entry:    00084cb0
 * Prototype: undefined FUN_00084cb0()
 */


undefined4 FUN_00084cb0(int param_1)

{
  undefined4 uVar1;
  
  if (**(char **)(param_1 + 0x10) != '\0') {
    uVar1 = FUN_00083dc8(**(undefined4 **)(param_1 + 4),7,0,1);
    return uVar1;
  }
  return 0xffffffea;
}


