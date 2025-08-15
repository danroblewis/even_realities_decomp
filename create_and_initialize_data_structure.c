/*
 * Function: create_and_initialize_data_structure
 * Entry:    00068240
 * Prototype: undefined __stdcall create_and_initialize_data_structure(undefined4 structure_template)
 */


undefined4 create_and_initialize_data_structure(undefined4 *structure_template)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)fill_memory_buffer(&DAT_2000b424,0,0x20);
  *(undefined4 *)(puVar1 + 4) = *structure_template;
  *puVar1 = *(undefined1 *)(structure_template + 1);
  *(undefined1 **)(puVar1 + 8) = puVar1 + 8;
  *(undefined1 **)(puVar1 + 0xc) = puVar1 + 8;
  *(undefined1 **)(puVar1 + 0x10) = puVar1 + 0x10;
  *(undefined1 **)(puVar1 + 0x14) = puVar1 + 0x10;
  *(undefined1 **)(puVar1 + 0x18) = puVar1 + 0x18;
  *(undefined1 **)(puVar1 + 0x1c) = puVar1 + 0x18;
  add_data_structure_to_linked_list(&DAT_20002c3c);
  return 0;
}


