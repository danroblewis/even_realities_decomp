/*
 * Function: setup_ble_configuration_and_connection
 * Entry:    0005a724
 * Prototype: undefined setup_ble_configuration_and_connection()
 */


int setup_ble_configuration_and_connection(int param_1,int param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_58;
  char *local_54;
  uint uStack_50;
  undefined2 local_4c;
  undefined1 local_48;
  byte local_47;
  int local_44;
  undefined1 auStack_40 [24];
  undefined4 local_28;
  char *local_24;
  
  if (param_1 == 0) {
    local_24 = "Insufficient number of arguments";
    local_28 = 2;
    ble_data_processing_wrapper(&DAT_00088128,0x1040,&local_28);
  }
  else {
    iVar1 = parse_config_data(param_1,auStack_40);
    if (iVar1 == 0) {
      parse_string_until_delimiter(param_1,&local_44);
      if ((local_44 == 0) ||
         (iVar1 = convert_string_to_number_with_base_detection(local_44,0,10), iVar1 == 0)) {
        puVar2 = (undefined1 *)find_ble_characteristic_by_uuid(0,auStack_40);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)find_ble_attribute_by_handle();
          if (puVar2 == (undefined1 *)0x0) {
            local_24 = "Unable to restore CF: no cfg left";
            local_28 = 2;
            ble_data_processing_wrapper(&DAT_00088128,0x1040,&local_28);
            return -0xc;
          }
          *puVar2 = 0;
          copy_data_structure_fields(puVar2 + 1,auStack_40);
        }
        if (param_2 != 0) {
          iVar1 = (*param_3)(param_4,&local_48,2);
          if (iVar1 < 0) {
            local_54 = "Failed to decode value (err %zd)";
            local_58 = 3;
            uStack_50 = iVar1;
            ble_data_processing_wrapper(&DAT_00088128,0x1840,&local_58);
            return iVar1;
          }
          puVar2[8] = local_48;
          if (iVar1 == 2) {
            uStack_50 = (uint)local_47;
            if (uStack_50 < 2) {
              conditional_bit_set_or_clear(puVar2,uStack_50 & 1);
              return 0;
            }
            local_54 = 
            "Read back bad change-aware value: 0x%x, defaulting peer status to change-unaware";
            local_58 = 3;
            ble_data_processing_wrapper(&DAT_00088128,0x1880,&local_58);
          }
          else {
            local_24 = 
            "Change-aware status not found in settings, defaulting peer status to change-unaware";
            local_28 = 2;
            ble_data_processing_wrapper(&DAT_00088128,0x1080,&local_28);
          }
          conditional_ble_service_discovery_processing(puVar2,0);
          return 0;
        }
        initialize_ble_connection_data(puVar2);
        return 0;
      }
      local_54 = "Invalid local identity %lu";
      local_58 = 3;
      uStack_50 = iVar1;
      ble_data_processing_wrapper(&DAT_00088128,0x1840,&local_58);
    }
    else {
      local_54 = "Unable to decode address %s";
      local_4c = 0x200;
      local_58 = 0x1000003;
      uStack_50 = param_1;
      ble_data_processing_wrapper(&DAT_00088128,0x1c40,&local_58);
    }
  }
  return -0x16;
}


