/*
 * Function: FUN_00068204
 * Entry:    00068204
 * Prototype: undefined FUN_00068204()
 */


undefined4 FUN_00068204(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((((char *)*param_1 == (char *)0x0) || (*(char *)*param_1 == '\0')) || (1 < (uint)param_1[2]))
  {
    uVar2 = 0xffffffea;
  }
  else {
    param_1[1] = &DAT_20002c3c;
    param_1[0x12] = DAT_2000b440;
    param_1[0x11] = &DAT_2000b43c;
    uVar2 = 0;
    puVar1 = param_1 + 0x11;
    *DAT_2000b440 = param_1 + 0x11;
    DAT_2000b440 = puVar1;
  }
  return uVar2;
}


