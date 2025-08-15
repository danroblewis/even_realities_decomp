/*
 * Function: setup_device_buffer_with_validation_and_initialization
 * Entry:    0007f150
 * Prototype: undefined __stdcall setup_device_buffer_with_validation_and_initialization(undefined4 device_context, undefined4 buffer_config)
 */


int setup_device_buffer_with_validation_and_initialization
              (int device_context,undefined4 buffer_config)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = setup_device_buffer_with_validation(buffer_config,device_context + 0x200);
  if (iVar1 == 0) {
    uVar2 = get_data_structure_field_at_offset_0xc(*(undefined4 *)(device_context + 0x200));
    iVar1 = initialize_buffer_structure
                      (device_context + 0x204,uVar2,device_context,0x200,
                       *(undefined4 *)(*(int *)(device_context + 0x200) + 4),
                       *(undefined4 *)(*(int *)(device_context + 0x200) + 8),0);
  }
  return iVar1;
}


