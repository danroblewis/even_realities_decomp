/*
 * Function: FUN_00080ca0
 * Entry:    00080ca0
 * Prototype: undefined FUN_00080ca0()
 */


bool FUN_00080ca0(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined2 local_24;
  undefined1 local_22;
  undefined3 local_20;
  undefined1 auStack_1d [17];
  
  _local_20 = CONCAT13(auStack_1d[0],*(undefined3 *)(param_2 + 3));
  fill_memory_buffer(auStack_1d,0,0xd);
  iVar2 = FUN_00081326(param_1,&local_20);
  if (iVar2 == 0) {
    local_24 = (undefined2)_local_20;
    local_22 = (undefined1)((uint)_local_20 >> 0x10);
    iVar2 = memcmp_byte_arrays(param_2,&local_24,3);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


