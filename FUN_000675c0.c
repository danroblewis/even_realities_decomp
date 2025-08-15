/*
 * Function: FUN_000675c0
 * Entry:    000675c0
 * Prototype: undefined FUN_000675c0()
 */


void FUN_000675c0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = param_2[2];
  iVar3 = *param_1;
  if (*(char *)((int)param_2 + 0xf) == '\0') {
    uVar1 = param_2[1];
    *(undefined4 *)(iVar3 + 0x508) = *param_2;
    *(undefined4 *)(iVar3 + 0x50c) = uVar1;
  }
  *(undefined4 *)(iVar3 + 0x524) = uVar2;
  if (*(int *)(&DAT_2000b3cc + (uint)*(byte *)(param_1 + 1) * 0x28) != 0) {
    process_data_with_parameter_validation_alt4((*param_1 << 0xc) >> 0x18);
    return;
  }
  return;
}


