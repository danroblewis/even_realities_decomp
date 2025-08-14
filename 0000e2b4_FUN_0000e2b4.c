/*
 * Function: FUN_0000e2b4
 * Entry:    0000e2b4
 * Prototype: undefined FUN_0000e2b4()
 */


undefined4 FUN_0000e2b4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[3] == 0) {
      uVar1 = 0xffffffea;
    }
    else {
      fill_memory_buffer(&DAT_2000b4a4,0,0x1778);
      local_58 = 0x358637bd;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      local_48 = 0;
      uStack_44 = 0x358637bd;
      uStack_40 = 0;
      uStack_3c = 0;
      local_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0x322bcc77;
      uStack_2c = 0;
      local_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0x3951b717;
      FUN_0000e53c(*param_1,param_1[1],param_1[2],DAT_20002d18,DAT_20002d14,&local_58,param_1[3],
                   &DAT_2000b4a4,&local_5c);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_5c;
      }
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffea;
}


