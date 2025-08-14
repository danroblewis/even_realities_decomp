/*
 * Function: FUN_00085130
 * Entry:    00085130
 * Prototype: undefined FUN_00085130(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void FUN_00085130(int param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int local_1c;
  
  local_1c = param_1;
  iVar1 = FUN_00065584(&local_1c);
  pbVar2 = param_3;
  if (param_3 != (byte *)0x0) {
    pbVar2 = (byte *)0x1;
  }
  iVar1 = iVar1 + local_1c * 4;
  pbVar7 = param_2;
  if (param_2 != (byte *)0x0) {
    pbVar7 = (byte *)0x1;
  }
  if (param_4 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xc;
  }
  if (param_5 == (byte *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xf00;
  }
  if (param_6 == (byte *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x30000;
  }
  if (param_2 != (byte *)0x0) {
    param_2 = (byte *)(uint)*param_2;
  }
  if (param_3 != (byte *)0x0) {
    param_3 = (byte *)((uint)*param_3 << 1);
  }
  if (param_4 != (byte *)0x0) {
    param_4 = (byte *)((uint)*param_4 << 2);
  }
  if (param_5 == (byte *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)*param_5 << 8;
  }
  if (param_6 != (byte *)0x0) {
    param_6 = (byte *)((uint)*param_6 << 0x10);
  }
  *(uint *)(iVar1 + 0x200) =
       uVar6 | (uint)param_2 |
               *(uint *)(iVar1 + 0x200) & ~((uint)pbVar7 | (int)pbVar2 << 1 | uVar3 | uVar4 | uVar5)
               | (uint)param_3 | (uint)param_4 | (uint)param_6;
  return;
}


