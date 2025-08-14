/*
 * Function: FUN_00051354
 * Entry:    00051354
 * Prototype: undefined FUN_00051354()
 */


int FUN_00051354(uint param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = DAT_2000a94c;
  if (DAT_2000a94c != (int *)0x0) {
    piVar2 = (int *)*DAT_2000a94c;
  }
  iVar4 = param_2 * 8;
  piVar1 = DAT_2000a94c;
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((int)piVar1 + 10) == param_1) {
      if (*(ushort *)((int)piVar1 + 8) <= param_2) {
        return 0;
      }
      iVar3 = *(int *)((int)piVar1 + 4);
      if ((*(int *)(iVar3 + iVar4) != 0) || (*(int *)(iVar3 + iVar4 + 4) != 0)) {
        return iVar3 + iVar4;
      }
    }
    piVar1 = piVar2;
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)*piVar2;
    }
  } while( true );
}


