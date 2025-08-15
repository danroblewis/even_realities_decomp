/*
 * Function: reset_flags
 * Entry:    00080c06
 * Prototype: undefined __stdcall reset_flags(undefined4 flags_ptr)
 */


void reset_flags(int *flags_ptr)

{
  if (*flags_ptr != 0) {
    *flags_ptr = 0;
    *(undefined1 *)(flags_ptr + 1) = 0;
  }
  return;
}


