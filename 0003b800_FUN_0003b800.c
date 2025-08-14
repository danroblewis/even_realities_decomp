/*
 * Function: FUN_0003b800
 * Entry:    0003b800
 * Prototype: undefined FUN_0003b800()
 */


void FUN_0003b800(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_20007b78;
  DAT_20007b78 = 0;
  stopAudioStreamRecord(0,uVar1);
  enable_dmic_stream();
  return;
}


