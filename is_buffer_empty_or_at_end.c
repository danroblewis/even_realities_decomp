/*
 * Function: is_buffer_empty_or_at_end
 * Entry:    00085d36
 * Prototype: undefined is_buffer_empty_or_at_end()
 */


bool is_buffer_empty_or_at_end(undefined4 *param_1)

{
  if (*(char *)(param_1 + 4) == '\0') {
    return param_1[2] == 0;
  }
  if ((char *)*param_1 < (char *)param_1[3]) {
    return *(char *)*param_1 == -1;
  }
  return false;
}


