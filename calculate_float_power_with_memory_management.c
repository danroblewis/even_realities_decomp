/*
 * Function: calculate_float_power_with_memory_management
 * Entry:    00078728
 * Prototype: undefined calculate_float_power_with_memory_management(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void calculate_float_power_with_memory_management
               (undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int extraout_r2;
  int iVar3;
  int extraout_r3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar1 = 0;
  iVar3 = (param_4 + 8) / 9;
  iVar2 = 1;
  iVar6 = param_4;
  do {
    if (iVar3 <= iVar2) {
      iVar1 = manage_float_context_with_memory_allocation(param_1,iVar1,iVar2,iVar3,iVar6);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x14) = param_5;
        *(undefined4 *)(iVar1 + 0x10) = 1;
        if (param_3 < 10) {
          pbVar4 = (byte *)(param_2 + 10);
          param_3 = 9;
        }
        else {
          pbVar4 = (byte *)(param_2 + 9);
          do {
            pbVar5 = pbVar4 + 1;
            iVar1 = multiply_float_with_memory_management(param_1,iVar1,10,*pbVar4 - 0x30);
            pbVar4 = pbVar5;
          } while (pbVar5 != (byte *)(param_2 + param_3));
          pbVar4 = (byte *)(param_2 + 9) + param_3 + -8;
        }
        param_3 = param_3 - (int)pbVar4;
        for (; (int)(pbVar4 + param_3) < param_4; pbVar4 = pbVar4 + 1) {
          iVar1 = multiply_float_with_memory_management(param_1,iVar1,10,*pbVar4 - 0x30);
        }
        return;
      }
      process_data_loop_with_validation_and_retry
                ("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/mprec.c"
                 ,0xce,0,"Balloc succeeded");
      iVar1 = extraout_r1;
      iVar2 = extraout_r2;
      iVar3 = extraout_r3;
    }
    iVar2 = iVar2 << 1;
    iVar1 = iVar1 + 1;
  } while( true );
}


