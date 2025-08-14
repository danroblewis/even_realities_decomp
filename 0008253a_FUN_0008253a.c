/*
 * Function: FUN_0008253a
 * Entry:    0008253a
 * Prototype: undefined FUN_0008253a()
 */


int FUN_0008253a(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_0005858c();
  if (piVar1 != (int *)0x0) {
    for (piVar2 = *(int **)((int)piVar1 + 0x30); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if (*(int *)(piVar2[-0x1b] + 0x18) == param_2) {
        return piVar2[-0x1b];
      }
    }
    for (piVar1 = *(int **)((int)piVar1 + 4); (piVar1 != (int *)0x0 && (piVar1[6] != param_2));
        piVar1 = (int *)*piVar1) {
    }
  }
  return (int)piVar1;
}


