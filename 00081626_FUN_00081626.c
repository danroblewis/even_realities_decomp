/*
 * Function: FUN_00081626
 * Entry:    00081626
 * Prototype: undefined FUN_00081626()
 */


int * FUN_00081626(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 != (int *)0x0) {
    piVar3 = (int *)0x0;
    piVar2 = piVar1;
    do {
      if (*(byte *)(piVar2 + 0x2c) == param_2) {
        if (param_3 == 0) {
          return piVar2 + -2;
        }
        FUN_000815f6(param_1 + 0x54,piVar3,piVar2,param_1,param_4);
        return piVar2 + -2;
      }
      piVar1 = (int *)*piVar2;
      piVar3 = piVar2;
      piVar2 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return piVar1;
}


