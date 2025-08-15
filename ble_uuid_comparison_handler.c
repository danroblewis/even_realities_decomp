/*
 * Function: ble_uuid_comparison_handler
 * Entry:    000814e6
 * Prototype: undefined ble_uuid_comparison_handler()
 */


bool ble_uuid_comparison_handler(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  if (*(byte *)(param_1 + 8) == param_2) {
    iVar2 = memcmp_byte_arrays(param_3,param_1 + 0x90,7,(uint)*(byte *)(param_1 + 8),param_4);
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      if (*(char *)(param_1 + 3) == '\0') {
        iVar2 = param_1 + 0x9e;
      }
      else {
        iVar2 = param_1 + 0x97;
      }
      iVar2 = memcmp_byte_arrays(param_3,iVar2,7,*(char *)(param_1 + 3),param_4);
      bVar1 = iVar2 == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


