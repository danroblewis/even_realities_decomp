/*
 * Function: validate_format_string_pattern
 * Entry:    0007dc00
 * Prototype: undefined validate_format_string_pattern()
 */


uint validate_format_string_pattern(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = 0;
  do {
    pbVar3 = param_1 + 1;
    uVar2 = (uint)*param_1;
    if (uVar2 == 0) {
      return 0;
    }
    if (uVar1 != 0) {
      if (iVar4 == param_2) {
        if (uVar2 == 0x70) {
          return uVar1;
        }
        if (uVar2 - 0x40 < 0x3b) {
          return 0;
        }
      }
      else if (uVar2 - 0x40 < 0x3b) {
        uVar2 = (uint)param_1[1];
        iVar4 = iVar4 + 1;
        if (uVar2 == 0) {
          return 0;
        }
        uVar1 = 0;
        pbVar3 = param_1 + 2;
      }
    }
    param_1 = pbVar3;
    if (uVar2 == 0x25) {
      uVar1 = uVar1 ^ 1;
    }
  } while( true );
}


