/*
 * Function: FUN_0000eefe
 * Entry:    0000eefe
 * Prototype: undefined FUN_0000eefe()
 */


int FUN_0000eefe(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  do {
    uVar2 = (uint)*param_1;
    bVar1 = *param_2;
    bVar3 = uVar2 == 1;
    if (uVar2 != 0) {
      bVar3 = uVar2 == bVar1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar3);
  return uVar2 - bVar1;
}


