/*
 * Function: process_message_dequeue_with_callback_execution
 * Entry:    0007c20a
 * Prototype: undefined process_message_dequeue_with_callback_execution()
 */


undefined4 process_message_dequeue_with_callback_execution(int param_1)

{
  short sVar1;
  int iVar2;
  undefined1 local_d4;
  undefined1 auStack_d3 [203];
  
  while( true ) {
    fill_memory_buffer(auStack_d3,0,0xca);
    local_d4 = 0xf4;
    iVar2 = handle_message_dequeue_alt(auStack_d3);
    if (iVar2 != 0) break;
    sVar1 = calculate_string_length(&local_d4);
    (**(code **)(param_1 + 0xc))(&local_d4,sVar1 + 1);
  }
  return 0;
}


