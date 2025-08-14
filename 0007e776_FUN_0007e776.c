/*
 * Function: FUN_0007e776
 * Entry:    0007e776
 * Prototype: undefined FUN_0007e776()
 */


int FUN_0007e776(int *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_40 [36];
  
  if (param_4 == 0) {
LAB_0007e784:
    iVar1 = 0;
  }
  else {
    iVar1 = (param_2 >> 0x10) * (uint)*(ushort *)(param_1 + 3) + *param_1 + (param_2 & 0xffff);
    uVar3 = -*(int *)param_1[0xb] & param_4;
    if (uVar3 != 0) {
      iVar2 = (**(code **)(*(int *)(param_1[10] + 8) + 4))(param_1[10],iVar1,param_3,uVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_4 = param_4 - uVar3;
      if (param_4 == 0) goto LAB_0007e784;
      iVar1 = iVar1 + uVar3;
      param_3 = param_3 + uVar3;
    }
    validate_memory_bounds(auStack_40,param_3,param_4,0x20);
    piVar4 = (int *)param_1[0xb];
    fill_memory_buffer(auStack_40 + param_4,(char)piVar4[1],*piVar4 - param_4);
    iVar1 = (**(code **)(*(int *)(param_1[10] + 8) + 4))(param_1[10],iVar1,auStack_40,*piVar4);
  }
  return iVar1;
}


