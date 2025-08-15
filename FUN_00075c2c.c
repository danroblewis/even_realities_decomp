/*
 * Function: FUN_00075c2c
 * Entry:    00075c2c
 * Prototype: undefined FUN_00075c2c()
 */


undefined1 * FUN_00075c2c(float param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  float extraout_s0;
  
  puVar1 = (undefined1 *)FUN_00075f88();
  if ((DAT_200035af != -1) && (!NAN(param_1))) {
    puVar1 = (undefined1 *)setup_audio_mixing(param_1);
    if (1.0 < extraout_s0) {
      puVar2 = (undefined4 *)thunk_FUN_00071678();
      *puVar2 = 0x21;
      return &LAB_000a8ea0;
    }
  }
  return puVar1;
}


