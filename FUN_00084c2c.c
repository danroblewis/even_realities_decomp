/*
 * Function: FUN_00084c2c
 * Entry:    00084c2c
 * Prototype: undefined FUN_00084c2c()
 */


undefined4 FUN_00084c2c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = **(int **)(param_1 + 4);
  iVar2 = *(int *)(iVar3 + 0xc);
  if (*(int *)(iVar2 + 8) == 0) {
    uVar1 = 0xfffffff2;
  }
  else {
    *(undefined1 *)(iVar2 + 0xcd) = 0;
    setup_font_rendering(*(int *)(iVar3 + 0xc) + 0x20);
    uVar1 = 0;
    *(undefined4 *)(iVar4 + 0xc) = 1;
  }
  return uVar1;
}


