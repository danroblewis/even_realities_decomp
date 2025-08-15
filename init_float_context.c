/*
 * Function: init_float_context
 * Entry:    000807e8
 * Prototype: undefined __stdcall init_float_context(undefined4 unused, undefined4 float_ctx)
 */


undefined4 init_float_context(undefined4 param_1,int float_ctx)

{
  *(undefined4 *)(float_ctx + 4) = 0x2000;
  return 0;
}


