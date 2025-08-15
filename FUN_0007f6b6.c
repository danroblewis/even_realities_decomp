/*
 * Function: FUN_0007f6b6
 * Entry:    0007f6b6
 * Prototype: undefined FUN_0007f6b6()
 */


undefined4 FUN_0007f6b6(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  if ((*(byte *)(param_2 + 1) < 3) && (*(byte *)((int)param_2 + 6) < 0xc)) {
    *(undefined1 *)(param_1 + 0x908) = 0;
    uVar6 = *param_2;
    iVar2 = FUN_0007f612(param_1 + 4,2);
    if (iVar2 == 0) {
      *(char *)(param_1 + 0x2a) = (char)((uint)uVar6 >> 8);
      *(char *)(param_1 + 0x29) = (char)uVar6;
      *(char *)(param_1 + 0x2b) = (char)((uint)uVar6 >> 0x10);
      iVar4 = param_1 + 0x28;
      *(undefined4 *)(param_1 + 0x8f8) = 0;
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(char *)(param_1 + 0x2c) = (char)((uint)uVar6 >> 0x18);
      iVar2 = 0;
      uVar3 = 5;
      iVar5 = param_1;
LAB_0007f704:
      do {
        iVar8 = iVar2 + 1;
        uVar7 = uVar3;
        if (*(char *)(iVar5 + 0x868) != '\0') {
          *(char *)(iVar4 + uVar3) = (char)iVar2;
          uVar7 = uVar3 + 1;
          if (iVar2 - 1U < 3) {
            uVar1 = *(undefined2 *)(iVar5 + 0x870);
            *(char *)(iVar4 + uVar7) = (char)uVar1;
            *(char *)(iVar4 + uVar7 + 1) = (char)((ushort)uVar1 >> 8);
            *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 0x8f8) + 1;
            iVar2 = iVar8;
            uVar3 = uVar3 + 3;
            iVar5 = iVar5 + 0x10;
            goto LAB_0007f704;
          }
          *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 0x8f8) + 1;
        }
        iVar2 = iVar8;
        uVar3 = uVar7;
        iVar5 = iVar5 + 0x10;
        if (iVar8 == 8) {
          *(undefined4 *)(param_1 + 0x904) = *(undefined4 *)(param_1 + 0x8f8);
          uVar6 = process_data_with_validation_and_callback_alt
                            (param_1,uVar7 & 0xffff,param_3,param_4);
          return uVar6;
        }
      } while( true );
    }
    uVar6 = 0xfffffff0;
  }
  else {
    uVar6 = 0xffffffea;
  }
  return uVar6;
}


