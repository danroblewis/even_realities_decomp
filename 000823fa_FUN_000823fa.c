/*
 * Function: FUN_000823fa
 * Entry:    000823fa
 * Prototype: undefined FUN_000823fa()
 */


int * FUN_000823fa(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)FUN_0005858c();
  if ((piVar1 != (int *)0x0) && (piVar2 = (int *)piVar1[0xc], piVar1 = piVar2, piVar2 != (int *)0x0)
     ) {
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      iVar3 = iVar3 + -400;
    }
    piVar1 = (int *)(uint)*(ushort *)((int)piVar2 - 0x172);
    if ((int *)(uint)*(ushort *)((int)piVar2 - 0x162) <=
        (int *)(uint)*(ushort *)((int)piVar2 - 0x172)) {
      piVar1 = (int *)(uint)*(ushort *)((int)piVar2 - 0x162);
    }
    if (iVar3 != 0) {
      while( true ) {
        piVar2 = (int *)(uint)*(ushort *)(iVar3 + 0x1e);
        piVar4 = (int *)(uint)*(ushort *)(iVar3 + 0x2e);
        if (*(int *)(iVar3 + 400) == 0) break;
        if (piVar2 <= piVar4) {
          piVar4 = piVar2;
        }
        if (piVar1 < piVar4) {
          piVar1 = piVar4;
        }
        iVar3 = *(int *)(iVar3 + 400) + -400;
      }
      if (piVar4 <= piVar2) {
        piVar2 = piVar4;
      }
      if (piVar1 < piVar2) {
        piVar1 = piVar2;
      }
    }
  }
  return piVar1;
}


