/*
 * Function: reset_display_ai_show_flag
 * Entry:    0002c214
 * Prototype: undefined reset_display_ai_show_flag()
 */


void reset_display_ai_show_flag(void)

{
  if (DAT_20018d9e != '\0') {
    DAT_20018d9e = '\0';
  }
  return;
}


