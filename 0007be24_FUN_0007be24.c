/*
 * Function: FUN_0007be24
 * Entry:    0007be24
 * Prototype: undefined FUN_0007be24(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined param_6, undefined4 param_7, undefined4 param_8)
 */


int FUN_0007be24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,uint param_8)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_13c;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 auStack_118 [48];
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_a4;
  undefined1 auStack_a0 [128];
  
  fill_memory_buffer(auStack_118,0,0x74);
  local_a4 = 0;
  fill_memory_buffer(auStack_a0,0,0x80);
  local_128 = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_120 = 0;
  local_13c = 0x84;
  if (0xff0 < param_8) {
    return 0xf1000f;
  }
  FUN_0007b644();
  local_e0 = FUN_0007bf44(param_3,param_4,param_5,param_6,&local_a4,&local_13c,param_8);
  if (local_e0 != 0) {
    return 0xf1000e;
  }
  local_e4 = 7;
  local_dc = 2;
  cVar2 = '\x01';
  local_c0 = 0;
  uStack_bc = 1;
  local_b8 = 1;
  local_e8 = param_2;
  local_d8 = param_1;
  FUN_0007a3d4(auStack_118,0x10);
  iVar1 = FUN_0007b130(&local_a4,local_13c,auStack_138,&local_128,0x10,auStack_130);
  iVar4 = iVar1;
  if (iVar1 == 0) {
    do {
      local_a4 = CONCAT31(local_a4._1_3_,cVar2);
      iVar1 = FUN_0007b9cc(auStack_118,auStack_138,auStack_130,local_13c);
      if (iVar1 != 0) goto LAB_0007bf0c;
      uVar3 = param_8;
      if (0xf < param_8) {
        uVar3 = 0x10;
      }
      thunk_FUN_00086c44(param_7 + iVar4,auStack_118,uVar3);
      FUN_0007a3d4(auStack_118,0x10);
      cVar2 = cVar2 + '\x01';
      param_8 = param_8 - uVar3;
      iVar4 = iVar4 + uVar3;
    } while (param_8 != 0);
    iVar1 = 0;
  }
LAB_0007bf0c:
  fill_memory_buffer(auStack_118,0,0x74);
  FUN_0007b644();
  return iVar1;
}


