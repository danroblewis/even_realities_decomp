/*
 * Function: set_configuration_data_in_structure
 * Entry:    0007f772
 * Prototype: undefined __stdcall set_configuration_data_in_structure(undefined4 data_structure, undefined4 entry_index, undefined4 data_pointer, undefined4 data_size)
 */


undefined4
set_configuration_data_in_structure
          (int data_structure,uint entry_index,int data_pointer,int data_size)

{
  undefined4 uVar1;
  
  if ((((data_structure == 0) || (data_pointer == 0)) || (0xff < data_size - 1U)) ||
     (7 < entry_index)) {
    uVar1 = 0xffffffea;
  }
  else {
    data_structure = data_structure + entry_index * 0x10;
    *(short *)(data_structure + 0x870) = (short)data_size;
    *(undefined1 *)(data_structure + 0x868) = 1;
    *(int *)(data_structure + 0x874) = data_pointer;
    uVar1 = 0;
  }
  return uVar1;
}


