/*
 * Function: FUN_00036558
 * Entry:    00036558
 * Prototype: undefined FUN_00036558()
 */


void FUN_00036558(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (DAT_20009fcc == 0) {
    DAT_20009fcc = malloc_maybe(0x140);
    if (DAT_20009fcc == 0) {
      DEBUG_PRINT("[%s-%d]malloc error \n","pixelto4bithex_for_flash",0x28,param_4);
      return;
    }
    fill_memory_buffer(DAT_20009fcc,0,0x140);
  }
  uVar1 = 0;
  do {
    if (param_2 <= DAT_20009fc4) {
      return;
    }
    DAT_20009fc4 = DAT_20009fc4 + 2;
    uVar3 = param_1 << (uVar1 & 0xff) & 0xc0;
    uVar2 = (undefined1)uVar3;
    if (uVar3 == 0xc0) {
      uVar2 = 0xff;
    }
    else if (uVar3 == 0x80) {
      uVar2 = 0xf0;
    }
    else if (uVar3 == 0x40) {
      uVar2 = 0xf;
    }
    else if (uVar3 != 0) {
      uVar2 = 0x99;
    }
    *(undefined1 *)(DAT_20009fcc + DAT_20009fc8) = uVar2;
    uVar1 = uVar1 + 2;
    DAT_20009fc8 = DAT_20009fc8 + 1;
  } while (uVar1 != 8);
  return;
}


