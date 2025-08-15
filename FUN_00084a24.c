/*
 * Function: FUN_00084a24
 * Entry:    00084a24
 * Prototype: undefined FUN_00084a24()
 */


undefined4 FUN_00084a24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar2 = *(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 0x1c);
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (7 < uVar2) {
      uVar2 = 8;
    }
    *(uint *)(iVar3 + 0x14) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) =
         *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
    iVar3 = *(int *)(param_1 + 0xc);
    memcpy(*(undefined4 *)(iVar3 + 0x18),*(int *)(iVar3 + 0x1c) + *(int *)(iVar3 + 8),uVar2,iVar3,
           param_4);
    uVar1 = 1;
  }
  return uVar1;
}


