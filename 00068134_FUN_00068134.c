/*
 * Function: FUN_00068134
 * Entry:    00068134
 * Prototype: undefined FUN_00068134()
 */


undefined4 FUN_00068134(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_2000b42c;
  while( true ) {
    if ((undefined4 **)puVar2 == &DAT_2000b42c) {
      return 0xfffffffe;
    }
    iVar1 = FUN_0000eefe(puVar2[-9],param_1);
    if ((iVar1 == 0) && (param_2 != (undefined4 *)0x0)) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  *param_2 = puVar2 + -9;
  return 0;
}


