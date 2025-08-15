/*
 * Function: FUN_00068240
 * Entry:    00068240
 * Prototype: undefined FUN_00068240()
 */


undefined4 FUN_00068240(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)fill_memory_buffer(&DAT_2000b424,0,0x20);
  *(undefined4 *)(puVar1 + 4) = *param_1;
  *puVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined1 **)(puVar1 + 8) = puVar1 + 8;
  *(undefined1 **)(puVar1 + 0xc) = puVar1 + 8;
  *(undefined1 **)(puVar1 + 0x10) = puVar1 + 0x10;
  *(undefined1 **)(puVar1 + 0x14) = puVar1 + 0x10;
  *(undefined1 **)(puVar1 + 0x18) = puVar1 + 0x18;
  *(undefined1 **)(puVar1 + 0x1c) = puVar1 + 0x18;
  FUN_00068170(&DAT_20002c3c);
  return 0;
}


