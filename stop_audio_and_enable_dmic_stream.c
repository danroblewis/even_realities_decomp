/*
 * Function: stop_audio_and_enable_dmic_stream
 * Entry:    0003b800
 * Prototype: undefined stop_audio_and_enable_dmic_stream()
 */


void stop_audio_and_enable_dmic_stream(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_20007b78;
  DAT_20007b78 = 0;
  stopAudioStreamRecord(0,uVar1);
  enable_dmic_stream();
  return;
}


