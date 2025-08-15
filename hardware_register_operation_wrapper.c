/*
 * Function: hardware_register_operation_wrapper
 * Entry:    00066ae0
 * Prototype: undefined hardware_register_operation_wrapper()
 */


int hardware_register_operation_wrapper
              (undefined4 param_1,uint3 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 local_10;
  uint local_c;
  
  local_10 = 0x1000205;
  uStack_14 = (uint)param_2;
  local_c = param_4 & 0xffff0000;
  iVar1 = handle_hardware_register_operation
                    (&local_10,(int)&uStack_14 + 3,(int)&uStack_14 + 3,0,param_1);
  if ((iVar1 == 0xbad0000) && ((uStack_14 & 0x1000000) != 0)) {
    iVar1 = 0xbad000b;
  }
  return iVar1;
}


