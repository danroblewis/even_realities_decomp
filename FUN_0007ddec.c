/*
 * Function: FUN_0007ddec
 * Entry:    0007ddec
 * Prototype: undefined FUN_0007ddec()
 */


uint FUN_0007ddec(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + param_2 * 8;
  if (*(uint *)(param_1 + 8) < 0x8000) {
    uVar1 = (uint)*(ushort *)(iVar2 + param_3 * 2);
  }
  else {
    uVar1 = *(uint *)(iVar2 + param_3 * 4);
  }
  return uVar1;
}


