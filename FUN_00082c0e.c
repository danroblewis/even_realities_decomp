/*
 * Function: FUN_00082c0e
 * Entry:    00082c0e
 * Prototype: undefined FUN_00082c0e()
 */


short FUN_00082c0e(undefined4 *param_1,ushort param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  ushort local_c;
  undefined2 local_a;
  
  if (param_1 != (undefined4 *)0x0) {
    _local_c = CONCAT22(0x2803,param_2 & 0xff00);
    iVar2 = compare_data_structures(*param_1,&local_c,param_3,0x2803,param_1);
    if (iVar2 == 0) {
      if (*(short *)(param_1[3] + 4) != 0) {
        return *(short *)(param_1[3] + 4);
      }
      sVar1 = FUN_0005a9f4(param_1);
      return sVar1 + 1;
    }
  }
  return 0;
}


