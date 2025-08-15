/*
 * Function: configure_device_parameters
 * Entry:    00016110
 * Prototype: undefined configure_device_parameters()
 */


undefined4 configure_device_parameters(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (uint)param_2;
  uStack_10 = param_3;
  pack_parameters_and_call_callback(&DAT_00087c80,3,0x10,0xeb,param_1);
  pack_parameters_and_call_callback(&DAT_00087c80,3,0x11,1);
  pack_parameters_and_call_callback(&DAT_00087c80,3,0x12,0xad);
  pack_parameters_and_call_callback(&DAT_00087c80,3,0x13,1);
  pack_parameters_and_call_callback(&DAT_00087c80,3,0x14,0x3f);
  pack_parameters_and_call_callback(&DAT_00087c80,3,0x15);
  pack_parameters_and_call_callback(&DAT_00087c80,3,0x16,0x2e);
  pack_parameters_and_call_callback(&DAT_00087c80,3,0x17,2);
  call_ble_callback_wrapper(&DAT_00087c80,3,0x10,(int)&uStack_14 + 3);
  DEBUG_PRINT("0x10 is %x\n",uStack_14 >> 0x18);
  call_ble_callback_wrapper(&DAT_00087c80,3,0x11,(int)&uStack_14 + 3);
  DEBUG_PRINT("0x11 is %x\n",uStack_14 >> 0x18);
  call_ble_callback_wrapper(&DAT_00087c80,3,0x12,(int)&uStack_14 + 3);
  DEBUG_PRINT("0x12 is %x\n",uStack_14 >> 0x18);
  call_ble_callback_wrapper(&DAT_00087c80,3,0x13,(int)&uStack_14 + 3);
  DEBUG_PRINT("0x13 is %x\n",uStack_14 >> 0x18);
  call_ble_callback_wrapper(&DAT_00087c80,3,0x14,(int)&uStack_14 + 3);
  DEBUG_PRINT("0x14 is %x\n",uStack_14 >> 0x18);
  call_ble_callback_wrapper(&DAT_00087c80,3,0x15,(int)&uStack_14 + 3);
  DEBUG_PRINT("0x15 is %x\n",uStack_14 >> 0x18);
  call_ble_callback_wrapper(&DAT_00087c80,3,0x16,(int)&uStack_14 + 3);
  DEBUG_PRINT("0x16 is %x\n",uStack_14 >> 0x18);
  call_ble_callback_wrapper(&DAT_00087c80,3,0x17,(int)&uStack_14 + 3);
  DEBUG_PRINT("0x17 is %x\n",uStack_14 >> 0x18);
  return 0;
}


