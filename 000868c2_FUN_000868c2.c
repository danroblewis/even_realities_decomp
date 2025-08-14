/*
 * Function: FUN_000868c2
 * Entry:    000868c2
 * Prototype: undefined FUN_000868c2()
 */


/* WARNING: Removing unreachable block (ram,0x000758f8) */
/* WARNING: Removing unreachable block (ram,0x000758d8) */
/* WARNING: Removing unreachable block (ram,0x000758ec) */

undefined4 * FUN_000868c2(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((param_1 < 0xfffffffc) &&
     (puVar1 = (undefined4 *)FUN_000719f4(&DAT_200037d8,4,param_1 + 4,param_4,0,0),
     puVar1 != (undefined4 *)0x0)) {
    puVar2 = puVar1 + 1;
    *puVar1 = &DAT_200037d8;
    if (((uint)puVar2 & 3) != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "align == 0 || ((uintptr_t)mem & (align - 1)) == 0",
                   "WEST_TOPDIR/zephyr/kernel/mempool.c",0x25);
      DEBUG_PRINT2("\tmisaligned memory at %p (align = %zu)\n",puVar2,4);
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/zephyr/kernel/mempool.c",0x25);
    }
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}


