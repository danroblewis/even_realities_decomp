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
  
  if (WHITELIST_APPLICATION_MANAGEMENT == 0) {
    WHITELIST_APPLICATION_MANAGEMENT = malloc_maybe(0x1800);
    if (WHITELIST_APPLICATION_MANAGEMENT == 0) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("[%s-%d] malloc failed !!\n","put_whitelist_app_from_app",0x1ca);
      }
      else {
        handle_heartbeat();
      }
    }
    else {
      fill_memory_buffer(WHITELIST_APPLICATION_MANAGEMENT,0,0x1800);
    }
  }
  if (WHITELIST_APPLICATION_MANAGEMENT == 0) goto LAB_00035718;
  iVar1 = handle_data_processing(WHITELIST_APPLICATION_MANAGEMENT,whitelist_data,data_length);
  *(char *)(response_buffer + 1) = (char)iVar1;
  if (iVar1 != 0xc9) goto LAB_00035718;
  iVar1 = validate_whitelist_app_data(WHITELIST_APPLICATION_MANAGEMENT);
  if (iVar1 == 0) {
    iVar1 = parse_whitelist_app_json(WHITELIST_APPLICATION_MANAGEMENT);
    if (iVar1 == 0) {
      format_string = "invalid whilte list json ! \n";
    }
    else {
      iVar1 = verify_whitelist_app_chunked_data();
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
  call_data_verification_handler_with_memory_cleanup(WHITELIST_APPLICATION_MANAGEMENT);
  WHITELIST_APPLICATION_MANAGEMENT = 0;
LAB_00035718:
                    /* WARNING: Could not recover jumptable at 0x00035722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(response_context + 0xc))(response_buffer,2);
  return;
}


