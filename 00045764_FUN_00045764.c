/*
 * Function: FUN_00045764
 * Entry:    00045764
 * Prototype: undefined FUN_00045764()
 */


undefined * FUN_00045764(uint param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar2 = 0;
  uVar1 = 0;
  puVar3 = &DAT_00098fe8;
  while( true ) {
    if (10 < iVar2) {
      return (undefined *)0x0;
    }
    if (*puVar3 == param_1) break;
    uVar1 = uVar1 + (uint)(byte)puVar3[1] * 0x27 & 0xffff;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 2;
  }
  *param_2 = (uint)(byte)puVar3[1] << 1;
  *param_3 = 0x27;
  return &DAT_000e5248 + uVar1;
}


