/*
 * Function: initialize_speaker
 * Entry:    000868ca
 * Prototype: undefined initialize_speaker()
 */


int initialize_speaker(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)param_1 * (ulonglong)param_2);
  if (((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) == 0) &&
     (iVar1 = setup_audio_processing(uVar2), iVar1 != 0)) {
    fill_memory_buffer(iVar1,0,uVar2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


