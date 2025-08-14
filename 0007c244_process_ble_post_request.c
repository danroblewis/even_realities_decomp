/*
 * Function: process_ble_post_request
 * Entry:    0007c244
 * Prototype: undefined __stdcall process_ble_post_request(undefined4 request_data, undefined4 request_id, undefined4 request_context)
 */


void process_ble_post_request
               (undefined1 *request_data,undefined4 request_id,undefined4 request_context)

{
  undefined4 ble_handle;
  undefined4 response_header;
  undefined4 response_data;
  undefined1 *data_pointer;
  
  data_pointer = request_data;
  response_header = request_id;
  response_data = request_context;
  ble_handle = get_bluetooth_manager();
  response_header = CONCAT22((short)request_id,CONCAT11(1,*request_data));
  ble_process_post_req(ble_handle,&response_header,request_data,1,data_pointer);
  return;
}


