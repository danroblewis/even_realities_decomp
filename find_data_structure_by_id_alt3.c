/*
 * Function: find_data_structure_by_id_alt3
 * Entry:    00045840
 * Prototype: undefined find_data_structure_by_id_alt3()
 */


undefined * find_data_structure_by_id_alt3(uint param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar2 = 0;
  uVar1 = 0;
  puVar3 = &DAT_0009890c;
  while( true ) {
    if (0x14b < iVar2) {
      return (undefined *)0x0;
    }
    if (*puVar3 == param_1) break;
    uVar1 = uVar1 + (uint)(byte)puVar3[1] * 0x1a & 0xffff;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 2;
  }
  *param_2 = (uint)(byte)puVar3[1] << 1;
  *param_3 = 0x1a;
  return &DAT_000e5f62 + uVar1;
}


