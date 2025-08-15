/*
 * Function: calculate_audio_timing_by_sample_rate
 * Entry:    00068e40
 * Prototype: undefined calculate_audio_timing_by_sample_rate()
 */


undefined4 calculate_audio_timing_by_sample_rate(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0x1d4c) {
    if (param_2 == 8000) {
      return 0x3c;
    }
    if (param_2 == 16000) {
      return 0x78;
    }
    if (param_2 == 24000) {
      return 0xb4;
    }
    if (param_2 != 32000) {
      if (param_2 == 48000) {
        uVar1 = 0x168;
      }
      else {
        uVar1 = 0xffffffff;
      }
      return uVar1;
    }
  }
  else {
    if (param_1 != 10000) {
      return 0xffffffff;
    }
    if (param_2 == 8000) {
      return 0x50;
    }
    if (param_2 == 16000) {
      return 0xa0;
    }
    if (param_2 != 24000) {
      if (param_2 == 32000) {
        return 0x140;
      }
      if (param_2 == 48000) {
        uVar1 = 0x1e0;
      }
      else {
        uVar1 = 0xffffffff;
      }
      return uVar1;
    }
  }
  return 0xf0;
}


