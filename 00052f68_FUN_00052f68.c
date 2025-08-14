/*
 * Function: FUN_00052f68
 * Entry:    00052f68
 * Prototype: undefined FUN_00052f68()
 */


void FUN_00052f68(void)

{
  undefined4 local_20;
  char *local_1c;
  int local_18;
  
  local_18 = (uint)DAT_20002007 * 7;
  local_18 = FUN_00052f18("id",0);
  if (local_18 != 0) {
    local_1c = "Failed to save ID (err %d)";
    local_20 = 3;
    FUN_0004d944(&DAT_00088178,0x1840,&local_20,0);
  }
  return;
}


