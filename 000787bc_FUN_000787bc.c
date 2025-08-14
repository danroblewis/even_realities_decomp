/*
 * Function: FUN_000787bc
 * Entry:    000787bc
 * Prototype: undefined FUN_000787bc()
 */


void FUN_000787bc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_000785d4(param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_00076a94("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/mprec.c"
                         ,0x140,0,"Balloc succeeded");
  }
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  return;
}


