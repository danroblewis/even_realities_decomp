/*
 * Function: process_buffer_with_mutex
 * Entry:    00076ad0
 * Prototype: undefined process_buffer_with_mutex()
 */


undefined4 process_buffer_with_mutex(int param_1,undefined *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
      initialize_buffer_structure();
    }
    if (param_2 == &DAT_0009871c) {
      param_2 = *(undefined **)(param_1 + 4);
    }
    else if (param_2 == &DAT_000986fc) {
      param_2 = *(undefined **)(param_1 + 8);
    }
    else if (param_2 == &DAT_000986dc) {
      param_2 = *(undefined **)(param_1 + 0xc);
    }
    if (*(short *)(param_2 + 0xc) != 0) {
      if ((-1 < *(int *)(param_2 + 100) << 0x1f) && (-1 < (int)*(short *)(param_2 + 0xc) << 0x16)) {
        acquire_mutex(*(undefined4 *)(param_2 + 0x58));
      }
      uVar1 = process_data_buffer(param_1,param_2);
      if (*(int *)(param_2 + 100) << 0x1f < 0) {
        return uVar1;
      }
      if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x16) < 0) {
        return uVar1;
      }
      release_mutex(*(undefined4 *)(param_2 + 0x58));
      return uVar1;
    }
  }
  return 0;
}


