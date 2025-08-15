/*
 * Function: FUN_00085442
 * Entry:    00085442
 * Prototype: undefined FUN_00085442(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */


void FUN_00085442(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_40 [9];
  
  fill_memory_buffer(local_40,0,0x20);
  if (param_5 < 0x20) {
    iVar3 = (1 << (param_5 & 0xff)) + -1;
  }
  else {
    iVar3 = -1;
  }
  param_1[4] = iVar3;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[5] = param_6;
  if (param_7 == (undefined4 *)0x0) {
    param_7 = local_40;
  }
  uVar1 = param_7[1];
  uVar2 = param_7[2];
  uVar4 = param_7[3];
  param_1[6] = *param_7;
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar4;
  uVar1 = param_7[5];
  uVar2 = param_7[6];
  uVar4 = param_7[7];
  param_1[10] = param_7[4];
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar4;
  return;
}


