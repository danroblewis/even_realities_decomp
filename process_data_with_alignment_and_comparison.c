/*
 * Function: process_data_with_alignment_and_comparison
 * Entry:    0007e5da
 * Prototype: int process_data_with_alignment_and_comparison(void * data_structure, void * source_data, int data_length, int alignment_param)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int process_data_with_alignment_and_comparison(void *data_structure, void
   *source_data, int data_length, int alignment_param) */

int process_data_with_alignment_and_comparison
              (void *data_structure,void *source_data,int data_length,int alignment_param)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_38 [32];
  
  uVar2 = -**(int **)((int)data_structure + 0x2c) & 0x20;
  fill_memory_buffer(auStack_38,data_length,uVar2);
  while( true ) {
    if (alignment_param == 0) {
      return 0;
    }
    uVar3 = alignment_param;
    if (uVar2 <= (uint)alignment_param) {
      uVar3 = uVar2;
    }
    iVar1 = process_data_with_function_pointer(data_structure,source_data,auStack_38,uVar3);
    if (iVar1 != 0) break;
    alignment_param = alignment_param - uVar3;
    source_data = (void *)((int)source_data + uVar3);
  }
  return iVar1;
}


