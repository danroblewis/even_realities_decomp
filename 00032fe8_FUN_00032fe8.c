/*
 * Function: FUN_00032fe8
 * Entry:    00032fe8
 * Prototype: undefined FUN_00032fe8()
 */


void FUN_00032fe8(void)

{
  int iVar1;
  
  if (DAT_20019ef1 != '\0') {
    DEBUG_PRINT("[%s-%d], thread has started !\n","start_aging_mode_thread",0xab8);
    return;
  }
  iVar1 = FUN_00071eac(&DAT_20004870,&DAT_20027a68,0xc00,&LAB_00032420_1,0,0,0,0xfffffff4,0);
  if (iVar1 == 0) {
    DAT_20019ef1 = '\x01';
  }
  return;
}


