/*
 * Function: process_ble_service_discovery_and_handle_assignment
 * Entry:    00059d24
 * Prototype: undefined process_ble_service_discovery_and_handle_assignment()
 */


void process_ble_service_discovery_and_handle_assignment
               (undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  int extraout_r2;
  
  iVar1 = FUN_00080f92();
  iVar2 = find_ble_service_by_uuid(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  if (iVar2 == 0) {
    iVar2 = get_ble_handle_value(&DAT_20006330);
    if (iVar2 == 0) {
      iVar2 = 0;
      iVar1 = 0;
    }
    else {
      iVar2 = get_ble_handle_value(&DAT_2000633c);
      if (iVar2 == 0) {
        iVar1 = 1;
        iVar2 = 0xc;
      }
      else {
        iVar2 = get_ble_handle_value(&DAT_20006348);
        if (iVar2 != 0) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","el != ((void *)0)",
                       "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x577);
          DEBUG_PRINT2("\tCan\'t save CF / CCC to flash\n");
                    /* WARNING: Subroutine does not return */
          assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x577);
        }
        iVar1 = 2;
        iVar2 = 0x18;
      }
    }
    FUN_000828da(&DAT_20006329 + iVar2,param_2,&DAT_20006328 + iVar2);
    (&DAT_20006328)[iVar1 * 0xc] = (char)param_1;
    iVar2 = extraout_r2;
  }
  FUN_000826e0(iVar2 + 8,1 << (param_3 & 0xff));
  FUN_0007350c(&DAT_20006350,extraout_r1,0x8000,0);
  return;
}


