/*
 * Function: FUN_0007f3c2
 * Entry:    0007f3c2
 * Prototype: undefined FUN_0007f3c2()
 */


void FUN_0007f3c2(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x134) = 0;
  while (puVar1 = *(undefined4 **)(param_1 + 0x150), puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    *(undefined4 *)(param_1 + 0x150) = uVar2;
    if (puVar1 == *(undefined4 **)(param_1 + 0x154)) {
      *(undefined4 *)(param_1 + 0x154) = uVar2;
    }
    initialize_microphone();
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  return;
}


