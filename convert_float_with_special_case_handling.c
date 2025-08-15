/*
 * Function: convert_float_with_special_case_handling
 * Entry:    00078ce0
 * Prototype: undefined convert_float_with_special_case_handling()
 */


int convert_float_with_special_case_handling
              (uint param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_r2;
  uint uVar4;
  uint uVar5;
  uint local_28;
  int *local_24;
  int *piStack_20;
  
  local_28 = param_3;
  local_24 = param_4;
  piStack_20 = param_5;
  iVar1 = manage_float_context_with_memory_allocation(param_3,1);
  if (iVar1 == 0) {
    process_data_loop_with_validation_and_retry
              ("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/mprec.c"
               ,0x30a,0,"Balloc succeeded");
  }
  uVar5 = (param_2 << 1) >> 0x15;
  local_24 = (int *)(param_2 & 0xfffff);
  if (uVar5 != 0) {
    local_24 = (int *)((uint)local_24 | 0x100000);
  }
  if (param_1 == 0) {
    iVar3 = handle_special_float_cases(&local_24);
    uVar2 = iVar3 + 0x20;
    iVar3 = 1;
    *(int **)(iVar1 + 0x14) = local_24;
  }
  else {
    local_28 = param_1;
    uVar2 = handle_special_float_cases(&local_28);
    if (uVar2 == 0) {
      *(uint *)(iVar1 + 0x14) = local_28;
    }
    else {
      uVar4 = (int)local_24 << (0x20 - uVar2 & 0xff);
      local_24 = (int *)((uint)local_24 >> (uVar2 & 0xff));
      *(uint *)(iVar1 + 0x14) = uVar4 | local_28;
    }
    *(int **)(iVar1 + 0x18) = local_24;
    if (local_24 == (int *)0x0) {
      iVar3 = 1;
    }
    else {
      iVar3 = 2;
    }
  }
  *(int *)(iVar1 + 0x10) = iVar3;
  if (uVar5 == 0) {
    *param_4 = uVar2 - 0x432;
    iVar3 = process_float_formatting(*(undefined4 *)(iVar1 + iVar3 * 4 + 0x10));
    iVar3 = extraout_r2 * 0x20 - iVar3;
  }
  else {
    iVar3 = 0x35 - uVar2;
    *param_4 = (uVar5 - 0x433) + uVar2;
  }
  *param_5 = iVar3;
  return iVar1;
}


