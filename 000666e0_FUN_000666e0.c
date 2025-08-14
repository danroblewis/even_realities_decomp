/*
 * Function: FUN_000666e0
 * Entry:    000666e0
 * Prototype: undefined FUN_000666e0()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000666e0(undefined4 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_5002b63c;
  uVar1 = _DAT_5002b638;
  switch(param_1) {
  case 9:
    param_2[7] = (char)((uint)_DAT_5002b63c >> 0x18);
  case 8:
    param_2[6] = (char)((uint)uVar2 >> 0x10);
  case 7:
    param_2[5] = (char)((uint)uVar2 >> 8);
  case 6:
    param_2[4] = (char)uVar2;
  case 5:
    param_2[3] = (char)((uint)uVar1 >> 0x18);
  case 4:
    param_2[2] = (char)((uint)uVar1 >> 0x10);
  case 3:
    param_2[1] = (char)((uint)uVar1 >> 8);
  case 2:
    *param_2 = (char)uVar1;
    return;
  default:
    return;
  }
}


