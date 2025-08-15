/*
 * Function: initialize_microphone_with_callback
 * Entry:    00070ee4
 * Prototype: undefined initialize_microphone_with_callback()
 */


void initialize_microphone_with_callback(int param_1)

{
  if (param_1 != 0) {
    if (((*(short *)(param_1 + 0x24) != *(short *)(param_1 + 10)) && (3 < DAT_2000b424)) &&
       (LINKED_LIST_HEAD_POINTER != (code *)0x0)) {
      (*LINKED_LIST_HEAD_POINTER)
                (4,"%s: freeing non-empty virtqueue\r\n",*(undefined4 *)(param_1 + 4));
    }
    initialize_microphone(param_1);
    return;
  }
  return;
}


