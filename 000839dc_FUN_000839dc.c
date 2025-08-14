/*
 * Function: FUN_000839dc
 * Entry:    000839dc
 * Prototype: undefined FUN_000839dc()
 */


undefined4 FUN_000839dc(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_000851e8();
  if (((int)param_1 < 0) || (uVar1 <= param_1)) {
    uVar2 = 0;
  }
  else if (uVar1 - param_1 < param_2) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


