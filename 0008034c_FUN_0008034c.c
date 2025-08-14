/*
 * Function: FUN_0008034c
 * Entry:    0008034c
 * Prototype: undefined FUN_0008034c()
 */


int FUN_0008034c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int extraout_r3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_1 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x68);
      uVar2 = *(uint *)(param_2 + 0x20);
      *(uint *)(param_2 + 0x20) = uVar2 + iVar3 * 8;
      *(uint *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + (uint)CARRY4(uVar2,iVar3 * 8);
      uVar2 = iVar3 + 1;
      iVar3 = iVar3 + param_2;
      *(uint *)(param_2 + 0x68) = uVar2;
      *(undefined1 *)(iVar3 + 0x28) = 0x80;
      iVar5 = param_2 + 0x28;
      if (0x38 < uVar2) {
        fill_memory_buffer(uVar2 + iVar5,0,0x40 - uVar2,iVar3,param_4);
        FUN_0004fadc(param_2,iVar5);
        *(undefined4 *)(param_2 + 0x68) = 0;
        iVar3 = extraout_r3;
      }
      fill_memory_buffer(*(int *)(param_2 + 0x68) + iVar5,0,0x38 - *(int *)(param_2 + 0x68),iVar3,
                         param_4);
      uVar2 = *(uint *)(param_2 + 0x20);
      uVar4 = *(undefined4 *)(param_2 + 0x24);
      *(uint *)(param_2 + 100) =
           uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18
      ;
      *(char *)(param_2 + 99) = (char)uVar4;
      *(char *)(param_2 + 0x62) = (char)((uint)uVar4 >> 8);
      *(char *)(param_2 + 0x60) = (char)((uint)uVar4 >> 0x18);
      *(char *)(param_2 + 0x61) = (char)((uint)uVar4 >> 0x10);
      FUN_0004fadc(param_2,iVar5);
      puVar1 = (undefined4 *)(param_2 + -4);
      iVar3 = param_1 + 4;
      do {
        puVar1 = puVar1 + 1;
        uVar4 = *puVar1;
        iVar5 = iVar3 + 4;
        *(char *)(iVar3 + -4) = (char)((uint)uVar4 >> 0x18);
        *(char *)(iVar3 + -3) = (char)((uint)uVar4 >> 0x10);
        *(char *)(iVar3 + -2) = (char)((uint)uVar4 >> 8);
        *(char *)(iVar3 + -1) = (char)uVar4;
        iVar3 = iVar5;
      } while (iVar5 != param_1 + 0x24);
      fill_memory_buffer(param_2,0,0x70,iVar5,param_4);
      param_1 = 1;
    }
  }
  return param_1;
}


