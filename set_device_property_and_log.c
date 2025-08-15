/*
 * Function: set_device_property_and_log
 * Entry:    000609c4
 * Prototype: undefined set_device_property_and_log()
 */


undefined4 set_device_property_and_log(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_18;
  char *local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_14 = "erase error: address or size exceeds expected values.Addr: 0x%lx size %zu";
  local_18 = 4;
  uStack_10 = param_1;
  local_c = param_2;
  execute_device_memory_data_compression(&DAT_00088270,0x2040,&local_18);
  return 0xffffffea;
}


