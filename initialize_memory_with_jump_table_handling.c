/*
 * Function: initialize_memory_with_jump_table_handling
 * Entry:    000795b4
 * Prototype: undefined initialize_memory_with_jump_table_handling()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_memory_with_jump_table_handling(void)

{
  _DAT_50845400 = 0xfefefefe;
  _DAT_50845404 = 0xfefefefe;
  _DAT_50845408 = 0xfefefefe;
  _DAT_5084540c = 0xfefefefe;
  _DAT_50845410 = 0xfefefefe;
  _DAT_50845414 = 0xfefefefe;
  _DAT_50845418 = 0xfefefefe;
  _DAT_5084541c = 0xfefefefe;
  _DAT_50844500 = 0;
                    /* WARNING: Could not recover jumptable at 0x000795ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_20002ef4)();
  return;
}


