/*
 * Function: FUN_00087340
 * Entry:    00087340
 * Prototype: undefined FUN_00087340()
 */


char FUN_00087340(int param_1)

{
  char cVar1;
  
  cVar1 = (char)param_1;
  if (param_1 - 0x30U < 10) {
    cVar1 = cVar1 + -0x20;
  }
  else if (param_1 - 0x61U < 6) {
    cVar1 = cVar1 + -0x47;
  }
  else {
    if (5 < param_1 - 0x41U) {
      return '\0';
    }
    cVar1 = cVar1 + -0x27;
  }
  return cVar1;
}


