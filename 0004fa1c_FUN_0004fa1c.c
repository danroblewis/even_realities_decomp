/*
 * Function: FUN_0004fa1c
 * Entry:    0004fa1c
 * Prototype: undefined FUN_0004fa1c()
 */


void FUN_0004fa1c(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + -1);
  do {
    pbVar1 = pbVar1 + 1;
    *pbVar1 = (&DAT_000f1968)[*pbVar1];
  } while (pbVar1 != (byte *)(param_1 + 0xf));
  return;
}


