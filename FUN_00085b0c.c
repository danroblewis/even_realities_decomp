/*
 * Function: FUN_00085b0c
 * Entry:    00085b0c
 * Prototype: undefined FUN_00085b0c()
 */


int * FUN_00085b0c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_24;
  
  iVar5 = param_1;
  uStack_24 = param_2;
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0xa0) + 0x20) + 8))();
  if (-1 < iVar1 << 0x1d) {
    return (int *)0x0;
  }
  if (param_3 != 0) {
    param_3 = 15000;
  }
  iVar1 = param_1 + 0x58;
  while( true ) {
    FUN_000859b6(iVar1);
    piVar3 = *(int **)(param_1 + 0xb4);
    iVar4 = *(int *)(*(int *)(param_1 + 0xa0) + 0x18);
    if ((piVar3 != (int *)(param_1 + 0xb4)) && (piVar3 != (int *)0x0)) break;
    if (iVar4 == 0) {
      piVar3 = (int *)FUN_00085734(*(undefined4 *)(param_1 + 0xa8),param_2,(int)&uStack_24 + 2,
                                   *(int *)(param_1 + 0xa0),iVar5);
      if (piVar3 != (int *)0x0) goto LAB_00085b6a;
      if (*(short *)(*(int *)(param_1 + 0xa8) + 0x24) == 0) goto LAB_00085b90;
      piVar3 = (int *)FUN_00085aee(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x94));
      *param_2 = *(int *)(param_1 + 0x94);
      uStack_24 = (int *)((uint)uStack_24 & 0xffff);
      z_spin_lock_valid(iVar1);
      if (piVar3 != (int *)0x0) goto LAB_00085b70;
    }
    else {
LAB_00085b90:
      z_spin_lock_valid(iVar1);
    }
    if (param_3 == 0) {
      return (int *)0x0;
    }
    get_schedule_timing(0x21,0);
    param_3 = param_3 + -1;
  }
  piVar2 = (int *)piVar3[1];
  *(int **)(*piVar3 + 4) = piVar2;
  *piVar2 = *piVar3;
  *piVar3 = (int)piVar3;
  piVar3[1] = (int)piVar3;
  if (iVar4 == 0) {
    *param_2 = *(int *)(param_1 + 0x94);
  }
LAB_00085b6a:
  z_spin_lock_valid(iVar1);
LAB_00085b70:
  piVar3[2] = (uint)uStack_24 >> 0x10;
  *param_2 = *param_2 + -0x10;
  return piVar3 + 4;
}


