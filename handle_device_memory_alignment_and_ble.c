/*
 * Function: handle_device_memory_alignment_and_ble
 * Entry:    0006125c
 * Prototype: undefined handle_device_memory_alignment_and_ble()
 */


undefined4 handle_device_memory_alignment_and_ble(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_28;
  char *local_24;
  uint uStack_20;
  uint local_1c;
  
  uVar1 = FUN_000851ee();
  uVar3 = FUN_000839dc(param_2,param_3);
  if ((int)uVar3 == 0) {
    local_24 = "invalid address: 0x%08lx:%zu";
  }
  else {
    if ((param_2 == uVar1 * (param_2 / uVar1)) && (param_3 == uVar1 * (param_3 / uVar1))) {
      if (uVar1 <= param_3) {
        manage_ble_connection_state_comprehensive
                  (&DAT_2000b154,(int)((ulonglong)uVar3 >> 0x20),0xffffffff,0xffffffff);
        iVar2 = FUN_000851ee();
        do {
          FUN_00065f1c(param_2);
          param_3 = param_3 - iVar2;
          param_2 = param_2 + iVar2;
        } while (param_3 != 0);
        z_spin_lock_valid(&DAT_2000b154);
      }
      return 0;
    }
    local_24 = "unaligned address: 0x%08lx:%zu";
  }
  local_28 = 4;
  uStack_20 = param_2;
  local_1c = param_3;
  process_and_compress_data_with_validation(&DAT_000881b0,0x2040,&local_28,0);
  return 0xffffffea;
}


