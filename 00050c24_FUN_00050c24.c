/*
 * Function: FUN_00050c24
 * Entry:    00050c24
 * Prototype: undefined FUN_00050c24()
 */


undefined4 FUN_00050c24(undefined4 param_1)

{
  undefined4 local_18;
  char *local_14;
  undefined4 uStack_10;
  
  local_14 = "Failed to allocate new MPU region %u\n";
  local_18 = 3;
  uStack_10 = param_1;
  FUN_0004d944(&DAT_00088228,0x1840,&local_18,0);
  return 0xffffffea;
}


