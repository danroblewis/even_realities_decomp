/*
 * Function: FUN_0005a250
 * Entry:    0005a250
 * Prototype: undefined FUN_0005a250()
 */


void FUN_0005a250(void)

{
  undefined4 in_r3;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  undefined4 uStack_10;
  
  uStack_10 = in_r3;
  iStack_18 = format_bluetooth_log_message_with_size(&DAT_20006380,0x10);
  if (iStack_18 != 0) {
    local_1c = "Failed to save Database Hash (err %d)";
    local_20 = 3;
    FUN_00082a42(&DAT_00088128,0x1840,&local_20);
  }
  return;
}


