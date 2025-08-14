/*
 * Function: FUN_00080b32
 * Entry:    00080b32
 * Prototype: undefined FUN_00080b32()
 */


uint FUN_00080b32(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    return (uint)*(ushort *)(param_1 + 0x44);
  }
  return 0xffffffea;
}


