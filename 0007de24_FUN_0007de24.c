/*
 * Function: FUN_0007de24
 * Entry:    0007de24
 * Prototype: undefined FUN_0007de24()
 */


void FUN_0007de24(int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  iVar1 = param_1 + param_2 * 8;
  if (0x7fff < *(uint *)(param_1 + 8)) {
    if (param_3 == 0) {
      uVar3 = *(uint *)(iVar1 + 4) & 0xfffffffe;
    }
    else {
      uVar3 = *(uint *)(iVar1 + 4) | 1;
    }
    *(uint *)(iVar1 + 4) = uVar3;
    return;
  }
  if (param_3 == 0) {
    uVar2 = *(ushort *)(iVar1 + 2) & 0xfffe;
  }
  else {
    uVar2 = *(ushort *)(iVar1 + 2) | 1;
  }
  *(ushort *)(iVar1 + 2) = uVar2;
  return;
}


