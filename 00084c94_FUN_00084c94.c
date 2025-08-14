/*
 * Function: FUN_00084c94
 * Entry:    00084c94
 * Prototype: undefined FUN_00084c94()
 */


void FUN_00084c94(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 0x10);
  iVar1 = FUN_00083dc8(**(undefined4 **)(param_1 + 4),7,1);
  if (-1 < iVar1) {
    *puVar2 = 0;
  }
  return;
}


