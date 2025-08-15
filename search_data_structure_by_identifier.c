/*
 * Function: search_data_structure_by_identifier
 * Entry:    00068134
 * Prototype: undefined search_data_structure_by_identifier()
 */


undefined4 search_data_structure_by_identifier(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_2000b42c;
  while( true ) {
    if ((undefined4 **)puVar2 == &DAT_2000b42c) {
      return 0xfffffffe;
    }
    iVar1 = compare_byte_arrays(puVar2[-9],param_1);
    if ((iVar1 == 0) && (param_2 != (undefined4 *)0x0)) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  *param_2 = puVar2 + -9;
  return 0;
}


