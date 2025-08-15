/*
 * Function: FUN_00066e70
 * Entry:    00066e70
 * Prototype: undefined FUN_00066e70(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void FUN_00066e70(uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint local_1c;
  int iStack_18;
  
  if (param_1 != 0xffffffff) {
    iStack_18 = param_3;
    if (param_2 == 1) {
      local_1c = param_2;
      if (param_5 == 0) {
        FUN_000852fe();
      }
      else {
        FUN_000852e6();
      }
    }
    local_1c = param_1;
    iVar1 = FUN_00066d1c(&local_1c);
    iVar1 = iVar1 + local_1c * 4;
    *(uint *)(iVar1 + 0x200) =
         param_4 << 8 | param_3 << 2 | param_2 | *(uint *)(iVar1 + 0x200) & 0xfffcf0f0 |
         param_2 << 1;
  }
  return;
}


