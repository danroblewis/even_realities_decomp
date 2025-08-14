/*
 * Function: FUN_00080294
 * Entry:    00080294
 * Prototype: undefined FUN_00080294()
 */


int FUN_00080294(int param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_1 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x44);
      if (iVar3 == 0x10) {
        iVar3 = param_2 + 0x10;
      }
      else {
        fill_memory_buffer(iVar3 + 0x30 + param_2,0,0x10 - iVar3);
        iVar3 = param_2 + 0x20;
        *(undefined1 *)(*(int *)(param_2 + 0x44) + param_2 + 0x30) = 0x80;
      }
      pbVar2 = (byte *)(iVar3 + -1);
      pbVar4 = (byte *)(param_2 + -1);
      do {
        pbVar1 = pbVar4 + 1;
        pbVar2 = pbVar2 + 1;
        *pbVar1 = *pbVar1 ^ pbVar4[0x31] ^ *pbVar2;
        pbVar4 = pbVar1;
      } while ((byte *)(param_2 + 0xf) != pbVar1);
      FUN_00080058(param_1,param_2,*(undefined4 *)(param_2 + 0x48));
      FUN_0008012e(param_2);
      param_1 = 1;
    }
  }
  return param_1;
}


