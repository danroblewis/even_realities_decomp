/*
 * Function: calculate_ble_memory_size
 * Entry:    0005ee18
 * Prototype: undefined calculate_ble_memory_size()
 */


uint calculate_ble_memory_size(int param_1)

{
  int iVar1;
  
  iVar1 = (uint)*(byte *)(param_1 + 10) * 0x34;
  return (uint)(param_1 - *(int *)(&DAT_20003aac + iVar1)) /
         ((byte)(&DAT_20003aa0)[iVar1] + 0x1b & 0xfffffffc);
}


