/*
 * Function: validate_and_reset_heap_chunk
 * Entry:    0007e238
 * Prototype: int validate_and_reset_heap_chunk(void * data_structure)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int validate_and_reset_data_structure(void *data_structure) */

int validate_and_reset_heap_chunk(void *data_structure)

{
  uint uVar1;
  
  if (data_structure != (void *)0x0) {
    uVar1 = *(uint *)((int)data_structure + 4) & 3;
    if ((uVar1 == 2) || (uVar1 == 3)) {
                    /* WARNING: Load size is inaccurate */
      if (*data_structure != 0) goto LAB_0007e25a;
    }
    else if (uVar1 == 1) {
LAB_0007e25a:
      *(undefined4 *)((int)data_structure + 8) = 0;
      return 0;
    }
  }
  return -0x16;
}


