/*
 * Function: ncs_notification
 * Entry:    00021c04
 * Prototype: undefined ncs_notification()
 */


undefined4 ncs_notification(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = create_json_obj();
  add_json_field_complex(uVar1,"app_identifier","com.tencent.xin");
  add_json_field_complex(uVar1,"title",param_1);
  add_json_field_complex(uVar1,"subtitle",&DAT_0009d768);
  add_json_field_complex(uVar1,"message",param_2);
  add_json_field_complex(uVar1,"date","08-04 09:50");
  add_json_field_complex(uVar1,"display_name",&DAT_0009d789);
  uVar2 = create_json_obj();
  add_json_named_object(uVar2,"ncs_notification",uVar1);
  uVar1 = format_json_value_wrapper(uVar2);
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): %s\n","mobile_send_notification_to_ble_device_test",uVar1);
    }
    else {
      handle_heartbeat();
    }
  }
  uVar3 = calculate_string_length(uVar1);
  subcontracing_send_data_pkcs7(uVar1,uVar3,0x4b,param_3);
  cleanup_json_node(uVar2);
  return 0;
}


