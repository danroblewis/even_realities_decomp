/*
 * Function: FUN_0007de9a
 * Entry:    0007de9a
 * Prototype: undefined FUN_0007de9a()
 */


void FUN_0007de9a(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0007ddec(param_1,param_2,3);
  if (param_2 == iVar1) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & ~(1 << (param_3 & 0xff));
    *(undefined4 *)(param_1 + (param_3 + 4) * 4) = 0;
    return;
  }
  uVar2 = FUN_0007ddec(param_1,param_2,2);
  *(int *)(param_1 + (param_3 + 4) * 4) = iVar1;
  set_heap_chunk_metadata(param_1,uVar2,3,iVar1);
  set_heap_chunk_metadata(param_1,iVar1,2,uVar2);
  return;
}


