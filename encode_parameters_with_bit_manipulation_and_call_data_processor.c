/*
 * Function: encode_parameters_with_bit_manipulation_and_call_data_processor
 * Entry:    000841fc
 * Prototype: undefined encode_parameters_with_bit_manipulation_and_call_data_processor(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
encode_parameters_with_bit_manipulation_and_call_data_processor
          (int param_1,int param_2,char param_3,byte param_4,char param_5)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar1 = param_3 + 1;
  bVar3 = param_2 == 1;
  if (bVar3) {
    bVar1 = bVar1 * '\b';
  }
  if (!bVar3) {
    param_4 = bVar1 | param_4 << 6;
  }
  if (bVar3) {
    param_4 = bVar1 | param_4 << 7;
  }
  if (param_5 == '\x01') {
    uVar2 = 0xd;
  }
  else if (param_5 == '\x02') {
    uVar2 = 0xe;
  }
  else {
    if (param_5 != '\0') {
      return 0xffffff7a;
    }
    uVar2 = 0xc;
  }
  uVar2 = handle_ble_operations_with_mutex_protection
                    (*(undefined4 *)(param_1 + 0x1c),4,uVar2,param_4);
  return uVar2;
}


