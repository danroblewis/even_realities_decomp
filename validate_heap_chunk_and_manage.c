/*
 * Function: validate_heap_chunk_and_manage
 * Entry:    0007def6
 * Prototype: undefined validate_heap_chunk_and_manage()
 */


void validate_heap_chunk_and_manage(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 8);
  iVar1 = set_heap_chunk_flag_wrapper();
  if ((0x7fff < uVar3) && (iVar1 == 1)) {
    return;
  }
  uVar2 = calculate_heap_chunk_size(uVar3,iVar1);
  manage_heap_chunk_with_validation(param_1,param_2,uVar2);
  return;
}


