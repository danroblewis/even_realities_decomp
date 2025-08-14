/*
 * Function: FUN_000785d4
 * Entry:    000785d4
 * Prototype: undefined FUN_000785d4()
 */


undefined4 * FUN_000785d4(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    puVar1 = (undefined4 *)malloc_maybe(0x10);
    *(undefined4 **)(param_1 + 0x24) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)
               FUN_00076a94("/__w/_temp/workspace/build/.build/HOST-x86_64-w64-mingw32/arm-zephyr-eabi/src/newlib-nano/newlib/libc/stdlib/mprec.c"
                            ,0x66,0,"REENT malloc succeeded");
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
  }
  iVar4 = *(int *)(param_1 + 0x24);
  if (*(int *)(iVar4 + 0xc) == 0) {
    uVar2 = FUN_000876d0(param_1,4,0x21);
    iVar3 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(iVar4 + 0xc) = uVar2;
    if (*(int *)(iVar3 + 0xc) != 0) goto LAB_00078602;
LAB_00078638:
    puVar1 = (undefined4 *)0x0;
  }
  else {
LAB_00078602:
    iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
    puVar1 = *(undefined4 **)(iVar4 + param_2 * 4);
    if (puVar1 == (undefined4 *)0x0) {
      iVar4 = 1 << (param_2 & 0xff);
      puVar1 = (undefined4 *)FUN_000876d0(param_1,1,(iVar4 + 5) * 4);
      if (puVar1 == (undefined4 *)0x0) goto LAB_00078638;
      puVar1[1] = param_2;
      puVar1[2] = iVar4;
    }
    else {
      *(undefined4 *)(iVar4 + param_2 * 4) = *puVar1;
    }
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  return puVar1;
}


