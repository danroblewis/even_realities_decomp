/*
 * Function: FUN_00086cda
 * Entry:    00086cda
 * Prototype: undefined FUN_00086cda(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined param_6, undefined4 param_7)
 */


char * FUN_00086cda(undefined4 param_1,int param_2,uint param_3,undefined1 *param_4,int *param_5,
                   uint param_6,int *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  longlong in_d0;
  undefined1 auStack_30 [4];
  char *local_2c [2];
  
  iVar6 = (int)((ulonglong)in_d0 >> 0x20);
  uVar3 = param_3;
  iVar5 = iVar6;
  if (in_d0 < 0) {
    iVar5 = iVar6 + -0x80000000;
    uVar3 = (uint)in_d0;
  }
  uVar8 = param_6 & 0xffffffdf;
  if (in_d0 < 0) {
    uVar4 = 0x2d;
  }
  else {
    uVar4 = 0;
    iVar5 = iVar6;
    uVar3 = (uint)in_d0;
  }
  *param_4 = uVar4;
  if (uVar8 == 0x46) {
    uVar2 = 3;
  }
  else {
    if (uVar8 == 0x45) {
      param_2 = param_2 + 1;
    }
    uVar2 = 2;
  }
  pcVar1 = (char *)FUN_00014b60(uVar3,param_1,uVar2,param_2,param_5,auStack_30,local_2c);
  if ((param_6 == 0x67) || (param_6 == 0x47)) {
    if ((param_3 & 1) == 0) goto LAB_00086d5e;
    pcVar7 = pcVar1 + param_2;
  }
  else {
    pcVar7 = pcVar1 + param_2;
    if (uVar8 == 0x46) {
      if ((*pcVar1 == '0') && (iVar6 = FUN_0000ddc8(uVar3,iVar5,0,0), iVar6 == 0)) {
        *param_5 = 1 - param_2;
      }
      pcVar7 = pcVar7 + *param_5;
    }
  }
  iVar5 = FUN_0000ddc8(uVar3,iVar5,0,0);
  if (iVar5 != 0) {
    local_2c[0] = pcVar7;
  }
  while (local_2c[0] < pcVar7) {
    *local_2c[0] = '0';
    local_2c[0] = local_2c[0] + 1;
  }
LAB_00086d5e:
  *param_7 = (int)local_2c[0] - (int)pcVar1;
  return pcVar1;
}


