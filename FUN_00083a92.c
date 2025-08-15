/*
 * Function: FUN_00083a92
 * Entry:    00083a92
 * Prototype: undefined FUN_00083a92()
 */


undefined4 FUN_00083a92(uint *param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *local_20;
  int local_1c;
  
  uVar1 = param_1[2];
  *param_3 = 0;
  param_3[2] = 0;
  local_20 = param_1;
  local_1c = param_2;
  (**(code **)(uVar1 + 0x10))(param_1,&local_20,&local_1c);
  while( true ) {
    if (local_1c == 0) {
      return 0xffffffea;
    }
    uVar1 = local_20[1];
    param_3[1] = uVar1;
    if (param_2 == 0) {
      uVar2 = -param_3[2];
    }
    else {
      uVar2 = (uint)(param_2 - *param_3) / uVar1;
    }
    if (*local_20 <= uVar2) {
      uVar2 = *local_20;
    }
    *param_3 = uVar2 * uVar1 + *param_3;
    param_3[2] = param_3[2] + uVar2;
    if (uVar2 < *local_20) break;
    local_20 = local_20 + 2;
    local_1c = local_1c + -1;
  }
  return 0;
}


