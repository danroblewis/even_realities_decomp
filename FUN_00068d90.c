/*
 * Function: FUN_00068d90
 * Entry:    00068d90
 * Prototype: undefined FUN_00068d90()
 */


void FUN_00068d90(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = 0;
  iVar3 = param_1[2] + 1;
  if (param_1[2] == 4) {
    iVar3 = 6;
  }
  puVar2 = (undefined2 *)(*(int *)(param_1 + 0x4a0) + -2);
  puVar5 = *(undefined4 **)(param_1 + 0x4a4);
  puVar4 = puVar2 + (*param_1 + 3) * iVar3 * 0x14;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = (short)((uint)*(undefined4 *)(param_2 + iVar1) >> 8);
    uVar6 = setup_audio_buffers((float)(longlong)*(int *)(param_2 + iVar1),0xfffffff8);
    *puVar5 = uVar6;
    puVar5 = puVar5 + 1;
    iVar1 = iVar1 + param_3 * 4;
  } while (puVar2 != puVar4);
  return;
}


