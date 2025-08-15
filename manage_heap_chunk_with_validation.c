/*
 * Function: manage_heap_chunk_with_validation
 * Entry:    0007de9a
 * Prototype: undefined manage_heap_chunk_with_validation()
 */


void manage_heap_chunk_with_validation(void *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = get_heap_chunk_metadata(param_1,param_2,3);
  if (param_2 == iVar1) {
    *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 0xc) & ~(1 << (param_3 & 0xff));
    *(undefined4 *)((int)param_1 + (param_3 + 4) * 4) = 0;
    return;
  }
  iVar2 = get_heap_chunk_metadata(param_1,param_2,2);
  *(int *)((int)param_1 + (param_3 + 4) * 4) = iVar1;
  set_heap_chunk_metadata(param_1,iVar2,3,iVar1);
  set_heap_chunk_metadata(param_1,iVar1,2,iVar2);
  return;
}


