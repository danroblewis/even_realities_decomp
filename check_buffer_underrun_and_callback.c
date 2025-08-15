/*
 * Function: check_buffer_underrun_and_callback
 * Entry:    000857e0
 * Prototype: undefined check_buffer_underrun_and_callback()
 */


void check_buffer_underrun_and_callback(int *param_1)

{
  int iVar1;
  
  DataMemoryBarrier(0x1b);
  iVar1 = *(int *)(*param_1 + 0x18);
  if ((*(uint *)(*param_1 + 0x10) & 0x20000000) == 0) {
    if ((iVar1 != 0) || ((int)((uint)*(ushort *)param_1[8] << 0x1f) < 0)) goto LAB_00085810;
  }
  else {
    if (iVar1 != 0) goto LAB_00085810;
    if (*(ushort *)((int)param_1 + 0x26) <=
        (ushort)((*(short *)(param_1[7] + 2) + -1) - *(short *)(param_1[8] + param_1[5] * 8 + 4)))
    goto LAB_00085810;
  }
  if ((code *)param_1[4] != (code *)0x0) {
    (*(code *)param_1[4])(param_1);
  }
LAB_00085810:
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  return;
}


