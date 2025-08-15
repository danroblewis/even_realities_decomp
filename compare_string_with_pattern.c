/*
 * Function: compare_string_with_pattern
 * Entry:    0007f1a0
 * Prototype: undefined compare_string_with_pattern()
 */


bool compare_string_with_pattern(char *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 != (char *)0x0) {
    if (param_2 == 0) {
      return false;
    }
    pcVar2 = (char *)(param_2 + -1);
    do {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        cVar1 = *param_1;
        if (cVar1 == '/') {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = param_1 + 1;
          }
        }
        else if (cVar1 != '=') {
          return cVar1 == '\0';
        }
        return true;
      }
    } while ((cVar1 == *param_1) && (param_1 = param_1 + 1, cVar1 != '='));
  }
  return false;
}


