/*
 * Function: process_data_with_offset_calculation
 * Entry:    0007e624
 * Prototype: undefined process_data_with_offset_calculation()
 */


int process_data_with_offset_calculation
              (int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(int *)(param_1[10] + 8) + 8);
  iVar1 = (*pcVar2)(param_1[10],(uint)*(ushort *)(param_1 + 3) * (param_2 >> 0x10) + *param_1,
                    (uint)*(ushort *)(param_1 + 3),pcVar2,param_4);
  if ((iVar1 == 0) &&
     (iVar1 = process_data_with_alignment_and_comparison
                        (param_1,(void *)(param_2 & 0xffff0000),(uint)*(byte *)(param_1[0xb] + 4),
                         (uint)*(ushort *)(param_1 + 3)), iVar1 != 0)) {
    iVar1 = -6;
  }
  return iVar1;
}


