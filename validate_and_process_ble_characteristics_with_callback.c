/*
 * Function: validate_and_process_ble_characteristics_with_callback
 * Entry:    00055ba0
 * Prototype: undefined validate_and_process_ble_characteristics_with_callback()
 */


void validate_and_process_ble_characteristics_with_callback
               (undefined1 *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  
  puVar1 = param_2 + 0x10;
  if (param_2 < param_1) {
    bVar2 = puVar1 <= param_1;
  }
  else {
    if (param_1 == param_2) goto LAB_00055bae;
    bVar2 = param_1 + 0x10 <= param_2;
  }
  if (bVar2) {
    param_1 = param_1 + -1;
    do {
      puVar1 = puVar1 + -1;
      param_1 = param_1 + 1;
      *param_1 = *puVar1;
    } while (puVar1 != param_2);
    return;
  }
LAB_00055bae:
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
               "((psrc < pdst && (psrc + length) <= pdst) || (psrc > pdst && (pdst + length) <= psrc))"
               ,"WEST_TOPDIR/zephyr/include/zephyr/sys/byteorder.h",0x215,param_4);
  DEBUG_PRINT2("\tSource and destination buffers must not overlap\n");
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/sys/byteorder.h",0x215);
}


