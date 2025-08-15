/*
 * Function: fill_circular_buffer_with_value
 * Entry:    0008557c
 * Prototype: undefined fill_circular_buffer_with_value()
 */


int fill_circular_buffer_with_value(int *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (((*param_1 == -1) || (uVar1 = param_1[2], uVar1 <= param_2)) ||
     (puVar3 = (undefined4 *)(*param_1 + param_2), puVar3 == (undefined4 *)0x0)) {
    param_4 = -0x22;
  }
  else {
    if (uVar1 < param_4 + param_2) {
      param_4 = uVar1 - param_2;
    }
    iVar2 = param_4;
    puVar4 = puVar3;
    if ((code *)param_1[10] == (code *)0x0) {
      while( true ) {
        if (iVar2 == 0) goto LAB_000855b2;
        puVar4 = (undefined4 *)((int)puVar3 << 0x1e);
        if (puVar4 == (undefined4 *)0x0) break;
        *(char *)puVar3 = (char)param_3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        iVar2 = iVar2 + -1;
      }
      puVar4 = (undefined4 *)(param_3 * 0x1010101);
      for (; 3 < iVar2; iVar2 = iVar2 + -4) {
        *puVar3 = puVar4;
        puVar3 = puVar3 + 1;
      }
LAB_000855b2:
      fill_memory_buffer(puVar3,param_3,iVar2,puVar4,param_1,param_2);
      DataMemoryBarrier(0x1b);
      return param_4;
    }
    (*(code *)param_1[10])(param_1,param_2,param_3,5,param_4);
  }
  return param_4;
}


