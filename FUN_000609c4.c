/*
 * Function: FUN_000609c4
 * Entry:    000609c4
 * Prototype: undefined FUN_000609c4()
 */


undefined4 FUN_000609c4(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_18;
  char *local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_14 = "erase error: address or size exceeds expected values.Addr: 0x%lx size %zu";
  local_18 = 4;
  uStack_10 = param_1;
  local_c = param_2;
  FUN_000838d6(&DAT_00088270,0x2040,&local_18);
  return 0xffffffea;
}


