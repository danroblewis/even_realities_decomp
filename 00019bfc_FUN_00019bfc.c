/*
 * Function: FUN_00019bfc
 * Entry:    00019bfc
 * Prototype: undefined FUN_00019bfc()
 */


int FUN_00019bfc(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_20007540 == 0x14) {
    FUN_00072240(&DAT_2000751c,&DAT_20010257,0,0);
  }
  memcpy(&DAT_20010257,param_1,200);
  iVar1 = enqueue_message_to_queue(&DAT_2000751c,&DAT_20010257,0,0);
  if (iVar1 != 0) {
    DEBUG_PRINT("enqueue_debug failed\r\n");
  }
  return iVar1;
}


