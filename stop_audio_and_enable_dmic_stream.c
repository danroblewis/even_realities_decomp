/*
 * Function: stop_audio_and_enable_dmic_stream
 * Entry:    0003b800
 * Prototype: undefined stop_audio_and_enable_dmic_stream()
 */


void stop_audio_and_enable_dmic_stream(void)

{
  undefined4 uVar1;
  
  uVar1 = DISPLAY_DISPATCH_THREAD_ULTIMATE_EXTENDED_FINAL_COMPREHENSIVE_COMPLETION_STATE;
  DISPLAY_DISPATCH_THREAD_ULTIMATE_EXTENDED_FINAL_COMPREHENSIVE_COMPLETION_STATE = 0;
  stopAudioStreamRecord(0,uVar1);
  enable_dmic_stream();
  return;
}


