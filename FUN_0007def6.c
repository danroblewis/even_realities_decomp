/*
 * Function: FUN_0007def6
 * Entry:    0007def6
 * Prototype: undefined FUN_0007def6()
 */


void FUN_0007def6(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 8);
  iVar1 = FUN_0007de18();
  if ((0x7fff < uVar3) && (iVar1 == 1)) {
    return;
  }
  uVar2 = calculate_heap_chunk_size(uVar3,iVar1);
  FUN_0007de9a(param_1,param_2,uVar2);
  return;
}


