/*
 * Function: format_and_print_string
 * Entry:    0004b1cc
 * Prototype: void __stdcall format_and_print_string(undefined4 format_string, ...)
 */


void format_and_print_string(undefined4 format_string,...)

{
  undefined4 in_r1;
  undefined4 in_r2;
  
  format_string_with_printf(&LAB_0004b1b4_1,0,format_string,in_r1,0,in_r1,in_r2);
  return;
}


