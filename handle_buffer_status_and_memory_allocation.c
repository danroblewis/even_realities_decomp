/*
 * Function: handle_buffer_status_and_memory_allocation
 * Entry:    00076cec
 * Prototype: undefined handle_buffer_status_and_memory_allocation()
 */


void handle_buffer_status_and_memory_allocation(int param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int *local_1c;
  undefined4 uStack_18;
  
  if (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1e)) {
    local_20 = param_1;
    local_1c = param_2;
    uStack_18 = param_3;
    uVar1 = get_buffer_status_flags(param_1,param_2,&local_20,&local_1c);
    iVar3 = local_20;
    iVar2 = memory_allocate_with_mutex_protection(param_1,local_20);
    if (iVar2 != 0) {
      *(undefined1 **)(param_1 + 0x28) = &LAB_00076b90_1;
      *param_2 = iVar2;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x80;
      param_2[4] = iVar2;
      param_2[5] = iVar3;
      if ((local_1c != (int *)0x0) &&
         (iVar3 = check_precision_with_error_handling(param_1,(int)*(short *)((int)param_2 + 0xe)),
         iVar3 != 0)) {
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 1;
      }
      *(ushort *)(param_2 + 3) = uVar1 | *(ushort *)(param_2 + 3);
      return;
    }
    if ((int)(short)*(ushort *)(param_2 + 3) << 0x16 < 0) {
      return;
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 2;
  }
  *param_2 = (int)param_2 + 0x47;
  param_2[4] = (int)param_2 + 0x47;
  param_2[5] = 1;
  return;
}


