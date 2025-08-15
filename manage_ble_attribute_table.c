/*
 * Function: manage_ble_attribute_table
 * Entry:    0005e614
 * Prototype: undefined manage_ble_attribute_table()
 */


undefined1 *
manage_ble_attribute_table(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  
  if ((DAT_2000af4c == param_1) &&
     (iVar1 = memcmp_byte_arrays(&DAT_2000af4d,param_2,7,(uint)DAT_2000af4c,param_4), iVar1 == 0)) {
LAB_0005e66e:
    puVar2 = &DAT_2000af4c + iVar1;
  }
  else {
    iVar1 = memcmp_byte_arrays(&DAT_2000af4d,&DAT_000f2b3a,7);
    uVar3 = (uint)DAT_2000afa8;
    if (iVar1 == 0) {
      iVar1 = 0;
      if ((uVar3 == param_1) &&
         (iVar4 = memcmp_byte_arrays(&DAT_2000afa9,param_2,7,uVar3,param_4), iVar4 == 0)) {
LAB_0005e66c:
        iVar1 = 0x5c;
        goto LAB_0005e66e;
      }
    }
    else {
      if ((uVar3 == param_1) &&
         (iVar1 = memcmp_byte_arrays(&DAT_2000afa9,param_2,7,uVar3,param_4), iVar1 == 0))
      goto LAB_0005e66c;
      iVar1 = memcmp_byte_arrays(&DAT_2000afa9,&DAT_000f2b3a,7);
      if (iVar1 != 0) {
        return (undefined1 *)0x0;
      }
      iVar1 = 1;
    }
    iVar4 = iVar1 * 0x5c;
    (&DAT_2000af4c)[iVar4] = (char)param_1;
    puVar2 = &DAT_2000af4c + iVar4;
    (&DAT_2000af4d)[iVar1 * 0x17] = *param_2;
    (&DAT_2000af51)[iVar1 * 0x2e] = *(undefined2 *)(param_2 + 1);
    (&DAT_2000af53)[iVar4] = *(undefined1 *)((int)param_2 + 6);
  }
  return puVar2;
}


