/*
 * Function: copy_data_from_circular_buffer
 * Entry:    00085496
 * Prototype: undefined copy_data_from_circular_buffer()
 */


int copy_data_from_circular_buffer(int *param_1,uint param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (((*param_1 == -1) || (uVar5 = param_1[2], uVar5 <= param_2)) ||
     (iVar4 = *param_1 + param_2, iVar4 == 0)) {
    param_4 = -0x22;
  }
  else {
    if (uVar5 < param_4 + param_2) {
      param_4 = uVar5 - param_2;
    }
    if ((code *)param_1[8] == (code *)0x0) {
      DataMemoryBarrier(0x1b);
      iVar4 = iVar4 - (int)param_3;
      iVar3 = param_4;
      for (; (puVar1 = (undefined4 *)((int)param_3 + iVar4), iVar3 != 0 &&
             ((((uint)puVar1 | (uint)param_3) & 3) != 0));
          param_3 = (undefined4 *)((int)param_3 + 1)) {
        iVar3 = iVar3 + -1;
        *(undefined1 *)param_3 = *(undefined1 *)puVar1;
      }
      for (; 3 < iVar3; iVar3 = iVar3 + -4) {
        *param_3 = *puVar1;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      puVar2 = (undefined1 *)((int)puVar1 + -1);
      puVar1 = (undefined4 *)(iVar3 + (int)param_3);
      for (; param_3 != puVar1; param_3 = (undefined4 *)((int)param_3 + 1)) {
        puVar2 = puVar2 + 1;
        *(undefined1 *)param_3 = *puVar2;
      }
    }
    else {
      param_4 = (*(code *)param_1[8])();
    }
  }
  return param_4;
}


