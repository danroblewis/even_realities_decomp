/*
 * Function: convert_number_to_decimal_string
 * Entry:    0007dc4a
 * Prototype: undefined convert_number_to_decimal_string()
 */


void convert_number_to_decimal_string(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 100;
  iVar4 = 4;
  cVar2 = '\0';
  do {
    if (param_2 == 0) {
      return;
    }
    while( true ) {
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        *param_1 = '\0';
        return;
      }
      if (((uVar3 <= param_3) || (uVar3 == 1)) || (cVar2 != '\0')) break;
      iVar1 = uVar3 * (param_3 / uVar3);
      uVar3 = uVar3 / 10;
      param_3 = param_3 - iVar1 & 0xff;
    }
    *param_1 = (char)(param_3 / uVar3) + '0';
    iVar1 = uVar3 * (param_3 / uVar3);
    uVar3 = uVar3 / 10;
    cVar2 = cVar2 + '\x01';
    param_2 = param_2 - 1 & 0xff;
    param_3 = param_3 - iVar1 & 0xff;
    param_1 = param_1 + 1;
  } while( true );
}


