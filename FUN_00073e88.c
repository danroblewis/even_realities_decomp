/*
 * Function: FUN_00073e88
 * Entry:    00073e88
 * Prototype: undefined FUN_00073e88()
 */


void FUN_00073e88(int param_1)

{
  if (*(char *)(param_1 + 0xd) < '\0') {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x7f;
    FUN_00073cdc(&DMIC_BUFFER_POINTER,param_1);
  }
  FUN_000737d8(DMIC_BUFFER_SIZE == param_1);
  return;
}


