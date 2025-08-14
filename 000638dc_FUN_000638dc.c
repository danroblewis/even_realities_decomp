/*
 * Function: FUN_000638dc
 * Entry:    000638dc
 * Prototype: undefined FUN_000638dc()
 */


void FUN_000638dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == -1) {
    param_1 = 0x7fffff;
  }
  else if (param_1 < 2) {
    param_1 = 1;
  }
  else if (0x7ffffe < param_1) {
    param_1 = 0x7fffff;
  }
  iVar1 = FUN_00063610();
  if (0x7fffff < iVar1 - DAT_200066b0) {
    param_1 = 0;
  }
  uVar2 = param_1 + (iVar1 - DAT_200066b0);
  if (0x7ffffe < uVar2) {
    uVar2 = 0x7fffff;
  }
  FUN_00063654(0,&LAB_000634dc_1,uVar2 + DAT_200066b0,
               DAT_200066b4 + (uint)CARRY4(uVar2,DAT_200066b0),&LAB_000634dc_1,0,0,param_4);
  return;
}


