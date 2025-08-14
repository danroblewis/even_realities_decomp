/*
 * Function: FUN_00082e62
 * Entry:    00082e62
 * Prototype: undefined FUN_00082e62()
 */


void FUN_00082e62(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_00059c70();
  if ((iVar1 == 0) || (piVar2 = *(int **)(iVar1 + 8), piVar2 == (int *)0x0)) {
    return;
  }
  piVar3 = (int *)*piVar2;
  if (piVar3 != (int *)0x0) {
    piVar3 = piVar3 + -6;
  }
  if (*(ushort *)(piVar2 + -3) != param_2) goto LAB_00082eb8;
  piVar2 = piVar2 + -6;
  do {
    if ((*(byte *)((int)piVar2 + 0x12) <= *(byte *)(param_1 + 9)) &&
       (iVar1 = (*(code *)*piVar2)(param_1,piVar2,param_3,param_4), iVar1 == 0)) {
      FUN_0005c4f0(param_1,piVar2);
    }
LAB_00082eb8:
    if (piVar3 == (int *)0x0) {
      return;
    }
    do {
      piVar2 = piVar3;
      if (piVar2[6] == 0) {
        piVar3 = (int *)0x0;
        if (*(ushort *)(piVar2 + 3) != param_2) {
          return;
        }
        break;
      }
      piVar3 = (int *)(piVar2[6] + -0x18);
    } while (*(ushort *)(piVar2 + 3) != param_2);
  } while( true );
}


