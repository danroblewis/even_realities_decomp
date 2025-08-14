/*
 * Function: FUN_000183ac
 * Entry:    000183ac
 * Prototype: undefined FUN_000183ac()
 */


void FUN_000183ac(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_28 [36];
  
  FUN_00018334(param_2,auStack_28);
  DEBUG_PRINT("bond_deleted conn: %s\n",auStack_28);
  DAT_20007514 = DAT_20007514 + -1;
  *(undefined1 *)(DAT_20006ab8 + 0x367) = 0;
  return;
}


