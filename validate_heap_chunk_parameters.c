/*
 * Function: validate_heap_chunk_parameters
 * Entry:    0007e1c6
 * Prototype: int validate_heap_chunk_parameters(void * task_structure, void * state_data)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int validate_task_state_transition(void *task_structure, void *state_data) */

int validate_heap_chunk_parameters(void *task_structure,void *state_data)

{
  int iVar1;
  
  if (((task_structure == (void *)0x0) || (state_data == (void *)0x0)) ||
     ((iVar1 = validate_and_reset_heap_chunk((void *)((int)state_data + 4)), iVar1 == 0 &&
      (3 < *(uint *)((int)state_data + 8))))) {
    iVar1 = -0x16;
  }
  return iVar1;
}


