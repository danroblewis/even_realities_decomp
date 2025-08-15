/*
 * Function: initialize_thermal_management_with_string_parsing
 * Entry:    00086a06
 * Prototype: undefined initialize_thermal_management_with_string_parsing()
 */


/* WARNING: Removing unreachable block (ram,0x00077a64) */
/* WARNING: Removing unreachable block (ram,0x00077a68) */
/* WARNING: Removing unreachable block (ram,0x00077aca) */
/* WARNING: Removing unreachable block (ram,0x00077ad4) */
/* WARNING: Removing unreachable block (ram,0x00077ab4) */
/* WARNING: Removing unreachable block (ram,0x00077ab8) */
/* WARNING: Removing unreachable block (ram,0x00077ac2) */
/* WARNING: Removing unreachable block (ram,0x00077b16) */
/* WARNING: Removing unreachable block (ram,0x00077b08) */
/* WARNING: Removing unreachable block (ram,0x00077b1a) */
/* WARNING: Removing unreachable block (ram,0x00077a38) */

uint initialize_thermal_management_with_string_parsing(byte *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  do {
    pbVar4 = param_1;
    param_1 = pbVar4 + 1;
    uVar3 = (uint)*pbVar4;
    uVar5 = (byte)(&DAT_000f8a6b)[uVar3] & 8;
  } while (((&DAT_000f8a6b)[uVar3] & 8) != 0);
  if (uVar3 == 0x2d) {
    uVar3 = (uint)*param_1;
    uVar5 = 1;
    param_1 = pbVar4 + 2;
  }
  else if (uVar3 == 0x2b) {
    uVar3 = (uint)*param_1;
    param_1 = pbVar4 + 2;
  }
  iVar2 = 0;
  uVar7 = uVar5 + 0x7fffffff;
  uVar1 = 0;
  do {
    uVar6 = uVar3 - 0x30;
    if (9 < uVar6) {
      if (uVar3 - 0x41 < 0x1a) {
        uVar6 = uVar3 - 0x37;
      }
      else {
        if (0x19 < uVar3 - 0x61) {
LAB_00077af6:
          if (iVar2 == -1) {
            *DAT_20002d20 = 0x22;
            uVar1 = uVar7;
          }
          else if (uVar5 != 0) {
            uVar1 = -uVar1;
          }
          return uVar1;
        }
        uVar6 = uVar3 - 0x57;
      }
    }
    if (9 < (int)uVar6) goto LAB_00077af6;
    if (iVar2 != -1) {
      if ((uVar7 / 10 < uVar1) || ((uVar7 / 10 == uVar1 && ((int)(uVar7 % 10) < (int)uVar6)))) {
        iVar2 = -1;
      }
      else {
        uVar1 = uVar1 * 10 + uVar6;
        iVar2 = 1;
      }
    }
    uVar3 = (uint)*param_1;
    param_1 = param_1 + 1;
  } while( true );
}


