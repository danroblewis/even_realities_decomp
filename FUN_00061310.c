/*
 * Function: FUN_00061310
 * Entry:    00061310
 * Prototype: undefined FUN_00061310()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00061310(undefined4 param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_28;
  char *local_24;
  uint uStack_20;
  uint local_1c;
  
  uVar2 = FUN_000839dc(param_2,param_4);
  if ((int)uVar2 == 0) {
    local_24 = "invalid address: 0x%08lx:%zu";
  }
  else {
    if (((param_2 | param_4) & 3) == 0) {
      if (param_4 != 0) {
        FUN_00072908(&DAT_2000b154,(int)((ulonglong)uVar2 >> 0x20),0xffffffff,0xffffffff);
        for (uVar1 = 0; uVar1 != (param_4 & 0xfffffffc); uVar1 = uVar1 + 4) {
          FUN_00065f80(uVar1 + param_2,*(undefined4 *)(param_3 + uVar1));
        }
        do {
        } while (-1 < _DAT_50039400 << 0x1f);
        z_spin_lock_valid(&DAT_2000b154);
      }
      return 0;
    }
    local_24 = "not word-aligned: 0x%08lx:%zu";
  }
  local_28 = 4;
  uStack_20 = param_2;
  local_1c = param_4;
  process_and_compress_data_with_validation(&DAT_000881b0,0x2040,&local_28,0);
  return 0xffffffea;
}


