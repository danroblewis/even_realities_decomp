/*
 * Function: parse_and_copy_data_structure_with_validation
 * Entry:    0007c4f4
 * Prototype: undefined parse_and_copy_data_structure_with_validation()
 */


undefined4 parse_and_copy_data_structure_with_validation(int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_2 == (byte *)0x0)) {
    return 7;
  }
  iVar2 = initialize_data_structure_comprehensive(param_2);
  if (iVar2 != 0) {
    return 0xc;
  }
  if (param_1[1] == 0) {
    return 0xb;
  }
  bVar1 = *(byte *)*param_1;
  *param_2 = bVar1;
  if ((uint)param_1[1] < 2) {
    return 0xb;
  }
  uVar3 = (uint)*(byte *)(*param_1 + 1);
  param_2[1] = *(byte *)(*param_1 + 1);
  if ((bVar1 & 0x10) == 0) {
    if ((uint)param_1[1] < 6) {
      return 0xb;
    }
    uVar6 = 6;
    uVar4 = *(uint *)(*param_1 + 2);
    uVar4 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
            uVar4 >> 0x18;
  }
  else {
    if ((uint)param_1[1] < 3) {
      return 0xb;
    }
    uVar6 = 3;
    uVar4 = (uint)*(byte *)(*param_1 + 2);
  }
  uVar5 = bVar1 & 8;
  *(uint *)(param_2 + 0x10) = uVar4;
  if ((bVar1 & 8) == 0) {
    param_2[2] = (byte)uVar5;
    if (uVar3 == 0) {
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      uVar5 = 0;
      goto LAB_0007c552;
    }
LAB_0007c58a:
    uVar7 = uVar3 + uVar6;
    if ((uint)param_1[1] < uVar7) {
      return 0xb;
    }
    uVar3 = *param_1 + uVar6;
  }
  else {
    uVar7 = uVar6 + 1;
    if ((uint)param_1[1] < uVar7) {
      return 0xb;
    }
    uVar5 = (uint)*(byte *)(*param_1 + uVar6);
    param_2[2] = *(byte *)(*param_1 + uVar6);
    uVar6 = uVar7;
    if (uVar3 != 0) goto LAB_0007c58a;
  }
  *(uint *)(param_2 + 4) = uVar3;
  uVar6 = uVar7;
  if (uVar5 != 0) {
    uVar6 = uVar5 + uVar7;
    if ((uint)param_1[1] < uVar6) {
      return 0xb;
    }
    uVar5 = *param_1 + uVar7;
  }
LAB_0007c552:
  *(uint *)(param_2 + 8) = uVar5;
  if (uVar4 != 0) {
    if ((uint)param_1[1] < uVar4 + uVar6) {
      return 0xb;
    }
    uVar4 = *param_1 + uVar6;
  }
  *(uint *)(param_2 + 0xc) = uVar4;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  return 0;
}


