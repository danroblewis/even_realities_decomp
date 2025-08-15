/*
 * Function: FUN_0007e624
 * Entry:    0007e624
 * Prototype: undefined FUN_0007e624()
 */


int FUN_0007e624(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(int *)(param_1[10] + 8) + 8);
  iVar1 = (*pcVar2)(param_1[10],(uint)*(ushort *)(param_1 + 3) * (param_2 >> 0x10) + *param_1,
                    (uint)*(ushort *)(param_1 + 3),pcVar2,param_4);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_0007e5da(param_1,param_2 & 0xffff0000,*(undefined1 *)(param_1[0xb] + 4),
                           (short)param_1[3]), iVar1 != 0)) {
    iVar1 = -6;
  }
  return iVar1;
}


