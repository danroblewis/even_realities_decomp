/*
 * Function: process_data_with_validation_and_retry_alt
 * Entry:    0004ed3c
 * Prototype: undefined process_data_with_validation_and_retry_alt()
 */


int process_data_with_validation_and_retry_alt(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar3 = search_data_structures_with_pattern_matching_and_bounds_checking(param_1,iVar3);
    if (iVar3 == 0) {
      return 0;
    }
    puVar1 = (undefined4 *)validate_data_structure_header_with_pattern_0x2803();
    if (puVar1 == (undefined4 *)0x0) break;
    iVar2 = compare_data_structures(param_2,*puVar1);
    if (iVar2 == 0) {
      return iVar3;
    }
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chrc != ((void *)0)",
               "WEST_TOPDIR/nrf/subsys/bluetooth/gatt_dm.c",0x21c);
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/nrf/subsys/bluetooth/gatt_dm.c",0x21c);
}


