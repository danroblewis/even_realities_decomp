/*
 * Function: sha256_reset_context
 * Entry:    0008013e
 * Prototype: undefined sha256_reset_context()
 */


int sha256_reset_context(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    fill_memory_buffer(param_1,0,0x10);
    fill_memory_buffer(param_1 + 0x30,0,0x10);
    *(undefined4 *)(param_1 + 0x44) = 0;
    iVar1 = 1;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x10000;
  }
  return iVar1;
}


