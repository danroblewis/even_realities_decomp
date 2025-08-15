/*
 * Function: FUN_0007205c
 * Entry:    0007205c
 * Prototype: undefined FUN_0007205c()
 */


bool FUN_0007205c(uint *param_1)

{
  bool bVar1;
  
  bVar1 = *param_1 == (DMIC_BUFFER_SIZE | DAT_2000b458);
  if (bVar1) {
    *param_1 = 0;
  }
  return bVar1;
}


