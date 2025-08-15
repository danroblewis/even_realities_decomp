/*
 * Function: validate_data_structure
 * Entry:    00080c20
 * Prototype: undefined __stdcall validate_data_structure(undefined4 data_ptr, undefined4 validation_data)
 */


uint validate_data_structure(int data_ptr,uint validation_data)

{
  undefined8 uVar1;
  
  if ((validation_data != 0) &&
     (uVar1 = process_data_with_callback_validation_alt5(validation_data),
     validation_data = (uint)uVar1, validation_data != 0)) {
    if (*(int *)(data_ptr + 0x18) == (int)((ulonglong)uVar1 >> 0x20)) {
      validation_data = (uint)(*(char *)(validation_data + 0x69) == *(char *)(data_ptr + 0x1c));
    }
    else {
      validation_data = 1;
    }
  }
  return validation_data;
}


