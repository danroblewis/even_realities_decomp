/*
 * Function: initialize_thread_safety
 * Entry:    00086480
 * Prototype: undefined initialize_thread_safety()
 */


undefined4 initialize_thread_safety(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)*param_1) || ((int *)*param_1 == (int *)0x0)) {
    if ((int)((uint)*(byte *)(param_1 + 0xc) << 0x1f) < 0) {
      initialize_microphone(param_1[5]);
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff0;
  }
  return uVar1;
}


