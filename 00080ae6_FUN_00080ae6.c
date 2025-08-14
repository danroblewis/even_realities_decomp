/*
 * Function: FUN_00080ae6
 * Entry:    00080ae6
 * Prototype: undefined FUN_00080ae6()
 */


int FUN_00080ae6(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_000526e4();
  if (iVar1 != 0) {
    if (*(code **)(param_2 + 0x34) == (code *)0x0) {
      memcpy(iVar1 + 0x18,param_1 + 0x18,*(undefined1 *)(param_1 + 0xb));
    }
    else {
      (**(code **)(param_2 + 0x34))(iVar1,param_1);
    }
  }
  return iVar1;
}


