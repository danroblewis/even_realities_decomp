/*
 * Function: FUN_00061ba0
 * Entry:    00061ba0
 * Prototype: undefined FUN_00061ba0()
 */


undefined4 FUN_00061ba0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 local_18;
  char *local_14;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if ((0xf < param_2) || (-1 < (int)((**(uint **)(param_1 + 4) >> (param_2 & 0xff)) << 0x1f))) {
    return 0xffffffea;
  }
  uVar1 = *(uint *)(iVar2 + 0x84) >> (param_2 & 0xff) & 1;
  if (param_3 == 0) {
    if (uVar1 != 0) {
      FUN_00065e4c(param_2 & 0xff);
      *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) & ~(1 << (param_2 & 0xff));
LAB_00061c20:
      if (*(int *)(iVar2 + 0x84) == 0) {
        process_data_with_callback_and_parameter_alt3(0x2a);
      }
      return 0;
    }
  }
  else if (uVar1 == 0) {
    if (*(int *)(iVar2 + param_2 * 4) == 0) {
      local_14 = "Enabling channel without a registered callback\n";
      local_18 = 2;
      process_and_compress_data_with_validation(&DAT_000881f8,0x1080,&local_18);
    }
    if (*(int *)(iVar2 + 0x84) == 0) {
      process_data_with_parameter_validation_alt4(0x2a);
    }
    *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 1 << (param_2 & 0xff);
    FUN_00065e10(param_2 & 0xff);
    goto LAB_00061c20;
  }
  return 0xffffff88;
}


