/*
 * Function: calculate_string_length_with_buffer_processing
 * Entry:    000778d4
 * Prototype: undefined calculate_string_length_with_buffer_processing()
 */


undefined4 calculate_string_length_with_buffer_processing(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int iStack_1c;
  undefined *local_18;
  undefined4 local_14;
  
  iVar2 = STRING_PROCESSING_AND_PRINTF_CONFIGURATION;
  iStack_1c = calculate_string_length(param_1);
  local_18 = &DAT_000f5400;
  local_14 = 1;
  local_24 = iStack_1c + 1;
  local_2c = &local_20;
  local_28 = 2;
  local_20 = param_1;
  if (iVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x7784a);
    (*pcVar1)();
  }
  if (*(int *)(iVar2 + 0x18) == 0) {
    initialize_buffer_structure_with_mutex_protection(iVar2);
    puVar3 = *(undefined **)(iVar2 + 8);
    if (*(int *)(iVar2 + 0x18) == 0) {
      initialize_buffer_structure_with_mutex_protection(iVar2);
    }
  }
  else {
    puVar3 = *(undefined **)(iVar2 + 8);
  }
  if (puVar3 == &DAT_0009871c) {
    puVar3 = *(undefined **)(iVar2 + 4);
  }
  else if (puVar3 == &DAT_000986fc) {
    puVar3 = *(undefined **)(iVar2 + 8);
  }
  else if (puVar3 == &DAT_000986dc) {
    puVar3 = *(undefined **)(iVar2 + 0xc);
  }
  if ((-1 < *(int *)(puVar3 + 100) << 0x1f) && (-1 < (int)((uint)*(ushort *)(puVar3 + 0xc) << 0x16))
     ) {
    acquire_mutex(*(undefined4 *)(puVar3 + 0x58));
  }
  iVar2 = process_buffer_with_complex_memory_management(iVar2,puVar3,&local_2c);
  if (iVar2 == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = 0xffffffff;
  }
  if ((-1 < *(int *)(puVar3 + 100) << 0x1f) && (-1 < (int)((uint)*(ushort *)(puVar3 + 0xc) << 0x16))
     ) {
    release_mutex(*(undefined4 *)(puVar3 + 0x58));
  }
  return uVar4;
}


