/*
 * Function: FUN_00080300
 * Entry:    00080300
 * Prototype: undefined FUN_00080300()
 */


int FUN_00080300(int param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (param_1 != 0) {
    if (param_2 == (undefined1 *)0x0) {
      param_1 = 0;
    }
    else {
      if (param_3 != 0) {
        iVar5 = param_1 + 0x28;
        puVar3 = param_2;
        do {
          iVar2 = *(int *)(param_1 + 0x68);
          uVar1 = iVar2 + 1;
          *(uint *)(param_1 + 0x68) = uVar1;
          puVar4 = puVar3 + 1;
          iVar2 = iVar2 + param_1;
          *(undefined1 *)(iVar2 + 0x28) = *puVar3;
          if (0x3f < uVar1) {
            param_1 = FUN_0004fadc(param_1,iVar5,uVar1,iVar2,param_4);
            uVar1 = *(uint *)(param_1 + 0x20);
            *(uint *)(param_1 + 0x20) = uVar1 + 0x200;
            *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)(0xfffffdff < uVar1);
            *(undefined4 *)(param_1 + 0x68) = 0;
          }
          puVar3 = puVar4;
        } while (param_2 + param_3 != puVar4);
      }
      param_1 = 1;
    }
  }
  return param_1;
}


