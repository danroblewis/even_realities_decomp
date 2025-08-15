/*
 * Function: get_high_resolution_timer
 * Entry:    00063610
 * Prototype: undefined get_high_resolution_timer()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 get_high_resolution_timer(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  DataMemoryBarrier(0x1f);
  uVar1 = _DAT_50015504 + DAT_2000b2dc * 0x1000000;
  uVar2 = (DAT_2000b2dc >> 8) + (uint)CARRY4(_DAT_50015504,DAT_2000b2dc * 0x1000000);
  if ((_DAT_50015504 < 0x100000) &&
     (uVar2 <= DAT_200066bc && (uint)(DAT_200066b8 <= uVar1) <= uVar2 - DAT_200066bc)) {
    bVar3 = 0xfeffffff < uVar1;
    uVar1 = uVar1 + 0x1000000;
    uVar2 = uVar2 + bVar3;
  }
  return CONCAT44(uVar2,uVar1);
}


