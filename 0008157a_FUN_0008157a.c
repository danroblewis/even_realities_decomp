/*
 * Function: FUN_0008157a
 * Entry:    0008157a
 * Prototype: undefined FUN_0008157a()
 */


uint FUN_0008157a(int param_1,ushort *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 4);
  if ((((*(ushort *)(param_1 + 0xa6) < *param_2) || (param_2[1] < *(ushort *)(param_1 + 0xa6))) ||
      (*(ushort *)(param_1 + 0xac) != param_2[2])) || (*(ushort *)(param_1 + 0xae) != param_2[3])) {
    uVar2 = (*puVar1 << 0x18) >> 0x1f;
    if ((int)(*puVar1 << 0x18) < 0) {
      uVar2 = FUN_00057038(param_1);
      return uVar2;
    }
    *(ushort *)(param_1 + 0xa8) = *param_2;
    *(ushort *)(param_1 + 0xaa) = param_2[1];
    *(ushort *)(param_1 + 0xb0) = param_2[2];
    *(ushort *)(param_1 + 0xb2) = param_2[3];
    *puVar1 = *puVar1 | 0x200;
  }
  else {
    FUN_000813b4(puVar1,0xfffffdff);
    uVar2 = 0xffffff88;
  }
  return uVar2;
}


