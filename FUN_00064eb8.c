/*
 * Function: FUN_00064eb8
 * Entry:    00064eb8
 * Prototype: undefined FUN_00064eb8()
 */


undefined4 FUN_00064eb8(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  
  do {
    uVar1 = *param_1;
    if (uVar1 == 0) {
      return 0xbad0002;
    }
  } while (*param_1 != uVar1);
  *param_1 = uVar1 & ~(1 << (0x1fU - LZCOUNT(uVar1) & 0xff));
  *param_2 = (char)(0x1fU - LZCOUNT(uVar1));
  return 0xbad0000;
}


