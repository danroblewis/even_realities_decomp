/*
 * Function: process_data_and_execute_callback
 * Entry:    0007f894
 * Prototype: undefined process_data_and_execute_callback()
 */


undefined4
process_data_and_execute_callback(undefined4 param_1,int param_2,ushort *param_3,uint param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 local_c;
  
  uVar1 = 0;
  local_c = 0;
  if (*(code **)(param_2 + 0x1c) != (code *)0x0) {
    bVar2 = param_4 == 4;
    if (bVar2) {
      local_c = (uint)*param_3;
      param_4 = (uint)param_3[1];
    }
    else {
      uVar1 = 0xffffffea;
    }
    if (bVar2) {
      local_c = CONCAT22((short)param_4,(undefined2)local_c);
    }
    (**(code **)(param_2 + 0x1c))(param_2 + -8,&local_c,uVar1,param_4,param_1);
  }
  return 1;
}


