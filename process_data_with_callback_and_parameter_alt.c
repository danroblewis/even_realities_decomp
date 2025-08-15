/*
 * Function: process_data_with_callback_and_parameter_alt
 * Entry:    0004f564
 * Prototype: undefined process_data_with_callback_and_parameter_alt()
 */


void process_data_with_callback_and_parameter_alt
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = setup_audio_processing();
  if (iVar1 == 0) {
    process_and_compress_data_with_validation
              (&DAT_000880f0,0x1040,&stack0xfffffff0,0,param_1,param_2,param_3,param_4);
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                 "WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c",0x7b);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/nrf/subsys/app_event_manager/app_event_manager.c",0x7b);
  }
  return;
}


