/*
 * Function: FUN_00065b18
 * Entry:    00065b18
 * Prototype: undefined FUN_00065b18()
 */


undefined4 FUN_00065b18(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  
  local_c = param_2;
  iVar2 = FUN_00065448();
  if (iVar2 == 0) {
    uVar3 = 0xbad0004;
  }
  else {
    FUN_00065acc(param_1);
    iVar2 = FUN_00065460(param_1);
    if (iVar2 != 0) {
      sVar1 = FUN_000654ac(param_1);
      *(undefined4 *)(sVar1 * 4 + 0x5000d510) = 0;
      *(undefined4 *)(sVar1 * 4 + 0x5000d510) = 0;
    }
    FUN_00065504(param_1);
    iVar2 = FUN_00065434(param_1);
    *(undefined2 *)((int)&DAT_20002bc0 + (iVar2 + 8) * 2) = 0;
    local_c = param_1;
    iVar2 = FUN_00065584(&local_c);
    iVar2 = iVar2 + local_c * 4;
    *(uint *)(iVar2 + 0x200) = *(uint *)(iVar2 + 0x200) & 0xfffcf0f0 | 2;
    uVar3 = 0xbad0000;
  }
  return uVar3;
}


