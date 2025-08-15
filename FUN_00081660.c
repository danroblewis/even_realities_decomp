/*
 * Function: FUN_00081660
 * Entry:    00081660
 * Prototype: undefined FUN_00081660()
 */


int * FUN_00081660(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 - 0x40 < 0x40) {
    piVar2 = *(int **)(param_1 + 0x54);
    if (piVar2 != (int *)0x0) {
      piVar1 = (int *)0x0;
      piVar3 = piVar2;
      do {
        if (*(ushort *)(piVar3 + 3) == param_2) {
          FUN_000815f6(param_1 + 0x54,piVar1,piVar3,param_2,param_4);
          return piVar3 + -2;
        }
        piVar2 = (int *)*piVar3;
        piVar1 = piVar3;
        piVar3 = piVar2;
      } while (piVar2 != (int *)0x0);
    }
  }
  else {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}


