/*
 * Function: handle_whitelist_app_from_app
 * Entry:    00035688
 * Prototype: undefined __stdcall handle_whitelist_app_from_app(undefined4 response_context, undefined4 user_data, undefined4 whitelist_data, undefined4 data_length, undefined4 response_buffer)
 */


void handle_whitelist_app_from_app
               (int response_context,undefined4 param_2,undefined4 whitelist_data,
               undefined4 data_length,int response_buffer)

{
  int iVar1;
  char *format_string;
  
  if (DAT_20009fbc == 0) {
    DAT_20009fbc = malloc_maybe(0x1800);
    if (DAT_20009fbc == 0) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("[%s-%d] malloc failed !!\n","put_whitelist_app_from_app",0x1ca);
      }
      else {
        handle_heartbeat();
      }
    }
    else {
      fill_memory_buffer(DAT_20009fbc,0,0x1800);
    }
  }
  if (DAT_20009fbc == 0) goto LAB_00035718;
  iVar1 = FUN_00019cd0(DAT_20009fbc,whitelist_data,data_length);
  *(char *)(response_buffer + 1) = (char)iVar1;
  if (iVar1 != 0xc9) goto LAB_00035718;
  iVar1 = FUN_00035050(DAT_20009fbc);
  if (iVar1 == 0) {
    iVar1 = parse_whitelist_app_json(DAT_20009fbc);
    if (iVar1 == 0) {
      format_string = "invalid whilte list json ! \n";
    }
    else {
      iVar1 = FUN_00035608();
      if (iVar1 == 0) goto LAB_0003570e;
      format_string = "store_write#whitelist_app: FAIL";
    }
    if (IS_DEBUG == 0) {
      DEBUG_PRINT(format_string);
    }
    else {
      handle_heartbeat();
    }
    *(undefined1 *)(response_buffer + 1) = 0xca;
  }
LAB_0003570e:
  FUN_00076d7c(DAT_20009fbc);
  DAT_20009fbc = 0;
LAB_00035718:
                    /* WARNING: Could not recover jumptable at 0x00035722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(response_context + 0xc))(response_buffer,2);
  return;
}


