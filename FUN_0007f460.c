/*
 * Function: FUN_0007f460
 * Entry:    0007f460
 * Prototype: undefined FUN_0007f460()
 */


int FUN_0007f460(int *param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  ushort local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 uStack_10;
  
  _local_18 = CONCAT22(0x2800,(ushort)param_1 & 0xff00);
  local_14 = param_2;
  uStack_10 = param_3;
  iVar2 = compare_data_structures(&local_18,*param_1);
  if (iVar2 != 0) {
    uVar1 = (ushort)local_14;
    local_14 = CONCAT22(0x2801,uVar1 & 0xff00);
    iVar2 = compare_data_structures(&local_14,*param_1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  return *param_1 + -8;
}


