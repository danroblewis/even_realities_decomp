/*
 * Function: FUN_00079b60
 * Entry:    00079b60
 * Prototype: undefined FUN_00079b60()
 */


int FUN_00079b60(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if (((0x180 < uVar3) || (0x180 - uVar3 < param_4)) ||
     (uVar3 = (0x180 - param_4) - uVar3, uVar3 < param_3)) {
    return -0x38;
  }
  fill_memory_buffer(&DAT_2000cfa0,0,0x180,uVar3,param_4);
  iVar1 = (**(code **)(param_1 + 0x94))
                    (*(undefined4 *)(param_1 + 0x98),&DAT_2000cfa0,*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (param_4 != 0) {
      iVar2 = (**(code **)(param_1 + 0x94))
                        (*(undefined4 *)(param_1 + 0x98),&DAT_2000cfa0 + iVar1,param_4);
      if (iVar2 != 0) goto LAB_00079c1a;
      iVar1 = iVar1 + param_4;
    }
    if ((param_2 == 0) || (param_3 == 0)) {
      iVar1 = FUN_0007981c(&DAT_2000cfa0,&DAT_2000cfa0,iVar1);
    }
    else {
      memcpy(&DAT_2000cfa0 + iVar1,param_2,param_3);
      iVar1 = FUN_0007981c(&DAT_2000cfa0,&DAT_2000cfa0,iVar1 + param_3);
    }
    if ((iVar1 == 0) && (iVar1 = FUN_000799ec(param_1,&DAT_2000cfa0), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    FUN_00079808(&DAT_2000cfa0,0x180);
  }
  else {
LAB_00079c1a:
    iVar1 = -0x34;
  }
  return iVar1;
}


