/*
 * Function: FUN_000640e8
 * Entry:    000640e8
 * Prototype: undefined FUN_000640e8()
 */


void FUN_000640e8(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint extraout_r1;
  char *pcVar2;
  uint uVar3;
  
  uVar1 = param_1;
  uVar3 = param_2;
  if (param_3 < 0xf) goto LAB_000640fe;
  pcVar2 = "(image_num) < 0xF";
  while( true ) {
    FUN_00076a94("WEST_TOPDIR/bootloader/mcuboot/boot/bootutil/src/bootutil_public.c",0x182,
                 "boot_write_swap_info",pcVar2,uVar1,uVar3);
    param_2 = extraout_r1;
LAB_000640fe:
    if (param_2 < 0xf) break;
    pcVar2 = "(swap_type) < 0xF";
  }
  uVar1 = FUN_00084d64();
  FUN_00084dea(param_1,uVar1,&stack0xfffffff7,1);
  return;
}


