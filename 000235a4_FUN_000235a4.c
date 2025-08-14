/*
 * Function: FUN_000235a4
 * Entry:    000235a4
 * Prototype: undefined FUN_000235a4()
 */


int FUN_000235a4(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_dc [208];
  
  iVar1 = FUN_00072240(&DAT_200079a0,auStack_dc,0,0);
  if (iVar1 == 0) {
    memcpy(param_1,auStack_dc,0xc9);
  }
  else {
    DEBUG_PRINT("dequeue_file failed\r\n");
  }
  return iVar1;
}


