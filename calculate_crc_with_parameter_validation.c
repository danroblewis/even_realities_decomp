/*
 * Function: calculate_crc_with_parameter_validation
 * Entry:    0007da4a
 * Prototype: undefined calculate_crc_with_parameter_validation()
 */


undefined4
calculate_crc_with_parameter_validation
          (undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (param_3 < 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = calculate_crc_with_bit_processing(param_1,0x8005,0xffff,1,1,param_2,param_3,param_4);
  }
  return uVar1;
}


