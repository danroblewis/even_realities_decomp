/*
 * Function: FUN_00076d8c
 * Entry:    00076d8c
 * Prototype: undefined FUN_00076d8c()
 */


void FUN_00076d8c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *extraout_r1;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    return;
  }
  piVar5 = (int *)(param_2 + -4);
  if (*(int *)(param_2 + -4) < 0) {
    piVar5 = (int *)((int)piVar5 + *(int *)(param_2 + -4));
  }
  FUN_000785bc();
  piVar3 = (int *)&DAT_2000cc20;
  piVar1 = extraout_r1;
  if (DAT_2000cc20 != (int *)0x0) {
    piVar4 = DAT_2000cc20;
    if (DAT_2000cc20 <= piVar5) {
      do {
        piVar3 = piVar4;
        piVar4 = (int *)piVar3[1];
        if (piVar4 == (int *)0x0) break;
      } while (piVar4 <= piVar5);
      piVar1 = (int *)*piVar3;
      if ((int *)((int)piVar3 + (int)piVar1) == piVar5) {
        piVar1 = (int *)((int)piVar1 + *piVar5);
        *piVar3 = (int)piVar1;
        if (piVar4 == (int *)((int)piVar3 + (int)piVar1)) {
          iVar2 = *piVar4;
          piVar3[1] = piVar4[1];
          *piVar3 = iVar2 + (int)piVar1;
        }
      }
      else if (piVar5 < (int *)((int)piVar3 + (int)piVar1)) {
        *param_1 = 0xc;
      }
      else {
        piVar1 = (int *)((int)piVar5 + *piVar5);
        bVar6 = piVar4 == piVar1;
        if (bVar6) {
          iVar2 = *piVar4;
          piVar4 = (int *)piVar4[1];
          piVar1 = (int *)(iVar2 + *piVar5);
        }
        piVar5[1] = (int)piVar4;
        if (bVar6) {
          *piVar5 = (int)piVar1;
        }
        piVar3[1] = (int)piVar5;
      }
      goto LAB_00076dae;
    }
    piVar1 = (int *)((int)piVar5 + *piVar5);
    if (DAT_2000cc20 == piVar1) {
      iVar2 = *DAT_2000cc20;
      DAT_2000cc20 = (int *)DAT_2000cc20[1];
      piVar1 = (int *)(iVar2 + *piVar5);
      *piVar5 = (int)piVar1;
    }
  }
  piVar5[1] = (int)DAT_2000cc20;
  DAT_2000cc20 = piVar5;
LAB_00076dae:
  FUN_000785c8(param_1,piVar1,piVar3,param_4);
  return;
}


