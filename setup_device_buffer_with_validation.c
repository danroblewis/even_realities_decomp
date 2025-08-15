/*
 * Function: setup_device_buffer_with_validation
 * Entry:    0004e048
 * Prototype: undefined setup_device_buffer_with_validation()
 */


undefined4 setup_device_buffer_with_validation(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  
  if (DEVICE_BUFFER_SETUP_WITH_VALIDATION == (byte *)0x0) {
    uVar1 = 0xfffffff3;
  }
  else {
    pbVar3 = DEVICE_BUFFER_SETUP_WITH_VALIDATION;
    for (iVar2 = 0; iVar2 < 0x16; iVar2 = iVar2 + 1) {
      if (*pbVar3 == param_1) {
        if ((*(int *)(pbVar3 + 0xc) != 0) && (iVar2 = check_driver_ready(), iVar2 != 0)) {
          *param_2 = pbVar3;
          return 0;
        }
        return 0xffffffed;
      }
      pbVar3 = pbVar3 + 0x10;
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}


