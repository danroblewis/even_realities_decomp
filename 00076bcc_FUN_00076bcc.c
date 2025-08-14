/*
 * Function: FUN_00076bcc
 * Entry:    00076bcc
 * Prototype: undefined FUN_00076bcc()
 */


void FUN_00076bcc(undefined *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  FUN_00076bb4();
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    puVar2 = &DAT_20002d24;
    *(undefined1 **)(param_1 + 0x28) = &LAB_00076b90_1;
    if (param_1 == &DAT_20002d24) {
      puVar2 = (undefined *)0x1;
    }
    if (param_1 == &DAT_20002d24) {
      *(undefined **)(param_1 + 0x18) = puVar2;
    }
    uVar1 = FUN_00076c3c(param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = FUN_00076c3c(param_1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = FUN_00076c3c(param_1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    FUN_00076b48(*(undefined4 *)(param_1 + 4),4,0);
    FUN_00076b48(*(undefined4 *)(param_1 + 8),9,1);
    FUN_00076b48(*(undefined4 *)(param_1 + 0xc),0x12,2);
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  FUN_00051134(&DAT_20003818);
  return;
}


