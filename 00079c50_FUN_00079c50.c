/*
 * Function: FUN_00079c50
 * Entry:    00079c50
 * Prototype: undefined FUN_00079c50(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int FUN_00079c50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_40 [32];
  
  fill_memory_buffer(auStack_40,0,0x20);
  iVar1 = (*DAT_20002f58)(param_1 + 0x9c);
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_0007ab00(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x94) = param_2;
  *(undefined4 *)(param_1 + 0x98) = param_3;
  if (uVar3 == 0) {
    uVar4 = *(uint *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = 0x20;
    if ((int)uVar4 < 0) {
      uVar4 = 0x10;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x10);
    if ((int)uVar4 < 0) {
      if (uVar3 < 0x30) {
        uVar4 = uVar3 + 1 >> 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  iVar1 = FUN_0007ab2c(param_1 + 0x20,auStack_40,0x100);
  if (iVar1 == 0) {
    iVar1 = FUN_00079b60(param_1,param_4,param_5,uVar4);
  }
  iVar2 = (*DAT_20002f54)(param_1 + 0x9c);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}


