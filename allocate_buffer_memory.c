/*
 * Function: allocate_buffer_memory
 * Entry:    00086b14
 * Prototype: undefined allocate_buffer_memory()
 */


undefined4 * allocate_buffer_memory(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (param_2 + -1) * 0x68;
  puVar1 = (undefined4 *)memory_allocate_with_mutex_protection(param_1,iVar2 + 0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = puVar1 + 3;
    fill_memory_buffer(puVar1 + 3,0,iVar2 + 0x68);
  }
  return puVar1;
}


