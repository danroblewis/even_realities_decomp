/*
 * Function: parse_string_until_delimiter
 * Entry:    0007f1e8
 * Prototype: undefined parse_string_until_delimiter()
 */


char * parse_string_until_delimiter(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  pcVar2 = param_1;
  if (param_1 != (char *)0x0) {
    do {
      pcVar3 = pcVar2;
      cVar1 = *pcVar3;
      if ((cVar1 == '\0') || (cVar1 == '=')) goto LAB_0007f208;
      pcVar2 = pcVar3 + 1;
    } while (cVar1 != '/');
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = pcVar3 + 1;
    }
LAB_0007f208:
    param_1 = pcVar3 + -(int)param_1;
  }
  return param_1;
}


