/*
 * Function: send_control_message_and_process_status_response
 * Entry:    0007ca24
 * Prototype: undefined send_control_message_and_process_status_response()
 */


void send_control_message_and_process_status_response(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uStack_c;
  
  *param_2 = 0;
  uStack_c = param_2;
  iVar1 = send_control_message_with_retry_and_mutex(param_1,0x2004,(int)&uStack_c + 3,1,param_1);
  if (iVar1 == 0) {
    if (uStack_c._3_1_ == '\0') {
      *param_2 = 0;
    }
    else {
      *param_2 = 1;
    }
  }
  return;
}


