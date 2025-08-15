/*
 * Function: FUN_0007e6e2
 * Entry:    0007e6e2
 * Prototype: undefined FUN_0007e6e2()
 */


int FUN_0007e6e2(uint param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uStack_20;
  uint *puStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = param_1;
  puStack_1c = param_2;
  uStack_18 = param_3;
  iVar1 = FUN_0007e65e(*(undefined4 *)(param_1 + 0x2c),8);
  iVar2 = FUN_0007e53e(param_1,*param_2);
  iVar3 = iVar2;
  if (iVar2 == 0) {
    uVar4 = *param_2 + iVar1;
    *param_2 = uVar4;
    if ((uVar4 & 0xffff) == (uint)*(ushort *)(param_1 + 0xc) - iVar1) {
      if (uVar4 >> 0x10 == 0) {
        uVar4 = uVar4 + (*(ushort *)(param_1 + 0xe) - 1) * 0x10000;
      }
      else {
        uVar4 = uVar4 - 0x10000;
      }
      *param_2 = uVar4;
      iVar3 = FUN_0007e53e(param_1,uVar4,&uStack_20,8);
      if (iVar3 == 0) {
        iVar3 = 0;
        puVar5 = &uStack_20;
        do {
          if (*(char *)(*(int *)(param_1 + 0x2c) + 4) != (char)*puVar5) {
            iVar3 = FUN_0007e6a6(param_1,&uStack_20);
            if (iVar3 == 0) {
              iVar3 = process_data_buffer_with_alignment_handling(param_1,param_2);
              return iVar3;
            }
            uVar4 = (*param_2 & 0xffff0000) + (uStack_20 >> 0x10);
            goto LAB_0007e756;
          }
          iVar3 = iVar3 + 1;
          puVar5 = (uint *)((int)puVar5 + 1);
        } while (iVar3 != 8);
        uVar4 = *(uint *)(param_1 + 4);
LAB_0007e756:
        *param_2 = uVar4;
        iVar3 = iVar2;
      }
    }
  }
  return iVar3;
}


