/*
 * Function: FUN_000810f2
 * Entry:    000810f2
 * Prototype: undefined FUN_000810f2()
 */


int FUN_000810f2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return -0x16;
  }
  iVar1 = memcmp_byte_arrays(param_2,&DAT_20002069,6,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = process_data_with_initialization_and_store(0x2005,6);
    if (iVar1 == 0) {
      return -0x69;
    }
    ble_memory_copy_utility(iVar1 + 0xc,param_2,6);
    iVar1 = process_data_with_initialization_and_validation(0x2005,iVar1,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_00080fba(&DAT_20002069,param_2);
    *(undefined1 *)(iVar1 + -1) = 1;
  }
  return 0;
}


