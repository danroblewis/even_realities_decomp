/*
 * Function: FUN_00068d2c
 * Entry:    00068d2c
 * Prototype: undefined FUN_00068d2c()
 */


void FUN_00068d2c(byte *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar3 = param_1[2] + 1;
  if (param_1[2] == 4) {
    iVar3 = 6;
  }
  puVar2 = (undefined2 *)(*(int *)(param_1 + 0x4a0) + -2);
  puVar5 = *(undefined4 **)(param_1 + 0x4a4);
  puVar4 = puVar2 + (*param_1 + 3) * iVar3 * 0x14;
  do {
    uVar1 = (uint)param_2[1] << 0x10 | (uint)*param_2 << 8 | (uint)param_2[2] << 0x18;
    puVar2 = puVar2 + 1;
    *puVar2 = (short)(uVar1 >> 0x10);
    uVar6 = FUN_00086976((float)(longlong)(int)uVar1,0xfffffff0);
    *puVar5 = uVar6;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + param_3 * 3;
  } while (puVar2 != puVar4);
  return;
}


