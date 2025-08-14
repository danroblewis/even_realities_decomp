/*
 * Function: FUN_00066050
 * Entry:    00066050
 * Prototype: undefined FUN_00066050()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066050(byte *param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  uint local_1c;
  
  pbVar2 = param_1;
  local_1c = param_2;
  if (param_1[0x15] == 0) {
    local_1c = *(uint *)(param_1 + 4);
    iVar1 = FUN_00065ff4(&local_1c);
    *(int *)(iVar1 + 0xc) = 1 << (local_1c & 0xff);
    local_1c = *(uint *)(param_1 + 4);
    iVar1 = FUN_00065ff4(&local_1c);
    iVar1 = iVar1 + local_1c * 4;
    *(uint *)(iVar1 + 0x200) = *(uint *)(iVar1 + 0x200) & 0xfffcf0f0 | 3;
    local_1c = *(uint *)(param_1 + 8);
    iVar1 = FUN_00065ff4(&local_1c);
    iVar1 = iVar1 + local_1c * 4;
    *(uint *)(iVar1 + 0x200) = *(uint *)(iVar1 + 0x200) & 0xfffcf0f0;
  }
  if (param_1[0x16] == 0) {
    _DAT_50026540 = *(undefined4 *)(param_1 + 4);
    _DAT_50026544 = *(undefined4 *)(param_1 + 8);
  }
  _DAT_50026504 = *(undefined4 *)(param_1 + 0xc);
  _DAT_50026518 = (uint)param_1[0x10];
  _DAT_5002651c = (uint)param_1[0x11];
  _DAT_5002654c = (uint)param_1[0x14];
  _DAT_50026520 = (uint)param_1[0x13];
  _DAT_50026508 = (param_1[1] & 1) << 1 | *param_1 & 1;
  if (param_1[0x16] == 0) {
    _DAT_50026540 = *(undefined4 *)(param_1 + 4);
    _DAT_50026544 = *(undefined4 *)(param_1 + 8);
  }
  _DAT_50026100 = 0;
  _DAT_50026104 = 0;
  FUN_000500ac(0x26,*(undefined4 *)(param_1 + 8),0,0,pbVar2);
  _DAT_50026304 = 3;
  return;
}


