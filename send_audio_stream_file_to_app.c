/*
 * Function: send_audio_stream_file_to_app
 * Entry:    00047bf8
 * Prototype: undefined __stdcall send_audio_stream_file_to_app(undefined1 stream_type, undefined1 stream_config)
 */


int send_audio_stream_file_to_app(undefined1 stream_type,undefined1 stream_config)

{
  int iVar1;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined2 local_26;
  undefined1 local_24;
  undefined1 local_23;
  
  fill_memory_buffer(&uStack_27,0,0x17);
  local_28 = 2;
  local_26 = 2;
  local_24 = stream_type;
  local_23 = stream_config;
  iVar1 = enqueue_message_to_queue(&MESSAGE_QUEUE_CONTEXT,&local_28,0,0);
  if (iVar1 != 0) {
    DEBUG_PRINT("message queue send failed %s\r\n","sendAudioStreamFileToApp");
    iVar1 = -1;
  }
  return iVar1;
}


