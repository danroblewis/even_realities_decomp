/*
 * Function: initialize_device_components_and_states
 * Entry:    0006058c
 * Prototype: undefined initialize_device_components_and_states()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int initialize_device_components_and_states
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  process_data_with_callback_execution_alt4(5,1,0,param_4,param_4);
  iVar1 = FUN_00065190(&LAB_00060634_1);
  if (iVar1 == 0xbad0000) {
    _DAT_5000555c = 0x9ba5;
    FUN_000651d8();
    iVar1 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x10);
      iVar2 = FUN_0007e212(iVar3 + iVar1 * 0x20,&DAT_0008b5fc);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = iVar1 * 0xc;
      iVar1 = iVar1 + 1;
      *(undefined4 *)(iVar2 + iVar3 + 0x88) = 1;
    } while (iVar1 != 4);
    iVar1 = 0;
  }
  else {
    iVar1 = -5;
  }
  return iVar1;
}


