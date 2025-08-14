/*
 * Function: FUN_0004fca0
 * Entry:    0004fca0
 * Prototype: undefined FUN_0004fca0()
 */


undefined4 * FUN_0004fca0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    fill_memory_buffer(param_1,0,0x70);
    *param_1 = 0x6a09e667;
    param_1[1] = 0xbb67ae85;
    param_1[2] = 0x3c6ef372;
    param_1[3] = 0xa54ff53a;
    param_1[4] = 0x510e527f;
    param_1[5] = 0x9b05688c;
    puVar1 = (undefined4 *)0x1;
    param_1[6] = 0x1f83d9ab;
    param_1[7] = 0x5be0cd19;
  }
  return puVar1;
}


