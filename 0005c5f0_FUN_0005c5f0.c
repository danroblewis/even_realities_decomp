/*
 * Function: FUN_0005c5f0
 * Entry:    0005c5f0
 * Prototype: undefined FUN_0005c5f0()
 */


void FUN_0005c5f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_50;
  char *local_4c;
  uint uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  short *local_3c;
  undefined1 auStack_34 [4];
  ushort local_30;
  
  local_40 = param_3;
  iVar2 = FUN_00059c70();
  if (iVar2 != 0) {
    FUN_000836ec(auStack_34,param_2,local_40);
    while (4 < local_30) {
      local_3c = (short *)FUN_0005f594(auStack_34,4);
      uVar6 = (uint)(ushort)local_3c[1];
      sVar1 = *local_3c;
      if (local_30 < uVar6) {
        local_44 = local_40;
        local_4c = "Invalid data len %u > %u";
        local_50 = 4;
        uStack_48 = uVar6;
        FUN_00082a42(&DAT_00088128,0x2040,&local_50);
        return;
      }
      piVar5 = *(int **)(iVar2 + 8);
      if (piVar5 != (int *)0x0) {
        piVar4 = (int *)*piVar5;
        if (piVar4 != (int *)0x0) {
          piVar4 = piVar4 + -6;
        }
        if ((short)piVar5[-3] != sVar1) goto LAB_0005c6a6;
        piVar5 = piVar5 + -6;
        do {
          if ((*(byte *)((int)piVar5 + 0x12) <= *(byte *)(param_1 + 9)) &&
             (iVar3 = (*(code *)*piVar5)(param_1,piVar5,local_3c + 2,uVar6), iVar3 == 0)) {
            FUN_0005c4f0(param_1,piVar5);
          }
LAB_0005c6a6:
          if (piVar4 == (int *)0x0) break;
          do {
            piVar5 = piVar4;
            if (piVar5[6] == 0) {
              piVar4 = (int *)0x0;
              if ((short)piVar5[3] != sVar1) goto LAB_0005c6ac;
              break;
            }
            piVar4 = (int *)(piVar5[6] + -0x18);
          } while ((short)piVar5[3] != sVar1);
        } while( true );
      }
LAB_0005c6ac:
      FUN_0005f594(auStack_34,uVar6);
    }
  }
  return;
}


