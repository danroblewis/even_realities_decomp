/*
 * Function: initialize_resource_structure_with_memory_layout
 * Entry:    0004d170
 * Prototype: undefined __stdcall initialize_resource_structure_with_memory_layout(undefined4 resource_context, undefined4 resource_config)
 */


int initialize_resource_structure_with_memory_layout
              (int resource_context,undefined4 resource_config)

{
  int iVar1;
  int local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  
  if (resource_context == 0) {
    iVar1 = -0x16;
  }
  else {
    *(undefined4 *)(resource_context + 0x3c) = 1;
    *(char **)(resource_context + 0x34) = "sram0.shm";
    *(undefined4 *)(resource_context + 0x30) = *(undefined4 *)(resource_context + 0x98);
    FUN_00085442(resource_context + 0x40,*(undefined4 *)(resource_context + 0x98),
                 (undefined4 *)(resource_context + 0x30),*(undefined4 *)(resource_context + 0x9c),
                 0xffffffff,0,0);
    local_20 = &LAB_000682b4_1;
    uStack_1c = 6;
    iVar1 = FUN_00068240(&local_20);
    if (((iVar1 == 0) && (iVar1 = FUN_00068204(resource_context + 0x34), iVar1 == 0)) &&
       (iVar1 = FUN_00085406("generic","sram0.shm",&local_24), iVar1 == 0)) {
      if (*(int *)(local_24 + 8) == 0) {
        local_24 = 0;
      }
      else {
        local_24 = local_24 + 0xc;
      }
      *(int *)(resource_context + 0xa0) = local_24;
      iVar1 = FUN_0007ed88(*(undefined4 *)(resource_context + 0x94));
      *(int *)(resource_context + 0xd4) = iVar1;
      if (iVar1 != 0) {
        iVar1 = FUN_0007ed88(*(undefined4 *)(resource_context + 0x94));
        *(int *)(resource_context + 0xd8) = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)(resource_context + 0xa8) = *(undefined4 *)(resource_context + 0x8c);
          *(undefined4 *)(resource_context + 0xac) = 4;
          *(undefined4 *)(resource_context + 0xc4) = 4;
          *(undefined4 *)(resource_context + 0x28) = 2;
          *(undefined4 *)(resource_context + 0xb8) = *(undefined4 *)(resource_context + 0xa0);
          *(undefined4 *)(resource_context + 0xd0) = *(undefined4 *)(resource_context + 0xa0);
          *(undefined **)(resource_context + 0x20) = &DAT_0008ac74;
          *(undefined2 *)(resource_context + 0xb0) = *(undefined2 *)(resource_context + 0x94);
          *(undefined4 *)(resource_context + 0xa4) = *(undefined4 *)(resource_context + 0xd4);
          *(undefined4 *)(resource_context + 0xc0) = *(undefined4 *)(resource_context + 0x90);
          *(undefined2 *)(resource_context + 200) = *(undefined2 *)(resource_context + 0x94);
          *(int *)(resource_context + 0xbc) = iVar1;
          *(undefined4 *)(resource_context + 0x18) = resource_config;
          *(int *)(resource_context + 0x2c) = resource_context + 0xa4;
          return 0;
        }
      }
      iVar1 = -0xc;
    }
  }
  return iVar1;
}


