/*
 * Function: FUN_00068b14
 * Entry:    00068b14
 * Prototype: undefined FUN_00068b14()
 */


char FUN_00068b14(uint param_1)

{
  char cVar1;
  
  cVar1 = 1 < param_1;
  if (param_1 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (3 < param_1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


