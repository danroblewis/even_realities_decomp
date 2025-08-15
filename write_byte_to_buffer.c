/*
 * Function: write_byte_to_buffer
 * Entry:    00086c88
 * Prototype: undefined write_byte_to_buffer()
 */


uint write_byte_to_buffer(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = param_3[2] + -1;
  param_3[2] = iVar4;
  if ((-1 < iVar4) || ((param_3[6] <= iVar4 && (param_2 != 10)))) {
    puVar3 = (undefined1 *)*param_3;
    *param_3 = (int)(puVar3 + 1);
    *puVar3 = (char)param_2;
    return param_2;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    initialize_buffer_structure();
  }
  if (param_3 == (int *)&DAT_0009871c) {
    param_3 = *(int **)(param_1 + 4);
  }
  else if (param_3 == (int *)&DAT_000986fc) {
    param_3 = *(int **)(param_1 + 8);
  }
  else if (param_3 == (int *)&DAT_000986dc) {
    param_3 = *(int **)(param_1 + 0xc);
  }
  param_3[2] = param_3[6];
  uVar2 = (uint)*(ushort *)(param_3 + 3);
  iVar1 = uVar2 << 0x1c;
  if (((iVar1 < 0) && (uVar2 = param_3[4], uVar2 != 0)) ||
     (iVar4 = FUN_00077d54(param_1,param_3,iVar1,uVar2,iVar4), iVar4 == 0)) {
    uVar2 = param_2 & 0xff;
    iVar4 = *param_3 - param_3[4];
    if ((iVar4 < param_3[5]) || (iVar4 = process_buffer_with_mutex(param_1,param_3), iVar4 == 0)) {
      param_3[2] = param_3[2] + -1;
      puVar3 = (undefined1 *)*param_3;
      *param_3 = (int)(puVar3 + 1);
      *puVar3 = (char)param_2;
      if (param_3[5] != iVar4 + 1) {
        if (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x1f)) {
          return uVar2;
        }
        if (uVar2 != 10) {
          return uVar2;
        }
      }
      iVar4 = process_buffer_with_mutex(param_1,param_3);
      if (iVar4 == 0) {
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}


