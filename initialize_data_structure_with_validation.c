/*
 * Function: initialize_data_structure_with_validation
 * Entry:    0007e212
 * Prototype: int initialize_data_structure_with_validation(void * device_structure, void * data_template)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int initialize_device_data_structure(void *device_structure, void
   *data_template) */

int initialize_data_structure_with_validation(void *device_structure,void *data_template)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  if ((((device_structure == (void *)0x0) || (data_template == (void *)0x0)) ||
      (*data_template == 0)) || (*(int *)((int)data_template + 4) == 0)) {
    iVar1 = -0x16;
  }
  else {
    fill_memory_buffer(device_structure,0,0x20);
    iVar1 = 0;
    *(void **)((int)device_structure + 0x10) = data_template;
  }
  return iVar1;
}


