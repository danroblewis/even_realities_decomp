/*
 * Function: FUN_00070ee4
 * Entry:    00070ee4
 * Prototype: undefined FUN_00070ee4()
 */


void FUN_00070ee4(int param_1)

{
  if (param_1 != 0) {
    if (((*(short *)(param_1 + 0x24) != *(short *)(param_1 + 10)) && (3 < DAT_2000b424)) &&
       (DAT_2000b428 != (code *)0x0)) {
      (*DAT_2000b428)(4,"%s: freeing non-empty virtqueue\r\n",*(undefined4 *)(param_1 + 4));
    }
    initialize_microphone(param_1);
    return;
  }
  return;
}


