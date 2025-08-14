/*
 * Function: FUN_0004da90
 * Entry:    0004da90
 * Prototype: undefined FUN_0004da90()
 */


void FUN_0004da90(undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 << 0x1b < 0) {
    return;
  }
  if (param_2 << 0x1a < 0) {
    pcVar1 = "\n";
  }
  else {
    pcVar1 = "\r\n";
  }
  FUN_0004da6c(param_1,pcVar1);
  return;
}


