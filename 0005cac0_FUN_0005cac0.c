/*
 * Function: FUN_0005cac0
 * Entry:    0005cac0
 * Prototype: undefined FUN_0005cac0()
 */


undefined4 FUN_0005cac0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x238);
  if ((undefined *)*puVar1 == &DAT_20006450) {
    *puVar1 = DAT_2000ad28;
  }
  return *puVar1;
}


