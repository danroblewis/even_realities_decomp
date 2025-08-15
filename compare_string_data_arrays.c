/*
 * Function: compare_string_data_arrays
 * Entry:    00034ff0
 * Prototype: undefined compare_string_data_arrays()
 */


undefined4 compare_string_data_arrays(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int extraout_r3;
  int extraout_r3_00;
  int iVar3;
  undefined1 *puVar4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("invalid param ! \n");
    }
    else {
      handle_heartbeat();
    }
  }
  else {
    uVar2 = (uint)DAT_2001a22d;
    iVar3 = uVar2 * 7;
    for (puVar4 = &DAT_2001a22c; puVar4 != &DAT_2001a22c + uVar2 * 0x38; puVar4 = puVar4 + 0x38) {
      iVar1 = compare_string_offsets(puVar4 + 2,param_1,0x28,iVar3,param_4);
      iVar3 = extraout_r3;
      if ((iVar1 == 0) &&
         (iVar1 = compare_string_offsets(puVar4 + 0x2a,param_2,0x10), iVar3 = extraout_r3_00,
         iVar1 == 0)) {
        return 1;
      }
    }
  }
  return 0;
}


