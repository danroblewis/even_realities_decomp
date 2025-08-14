/*
 * Function: FUN_0004ee68
 * Entry:    0004ee68
 * Prototype: undefined FUN_0004ee68()
 */


undefined4 FUN_0004ee68(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 local_a0 [2];
  undefined2 local_9e;
  undefined1 local_9c [2];
  undefined2 local_9a;
  undefined4 local_98 [2];
  undefined1 local_90 [12];
  undefined4 local_84 [2];
  undefined1 local_7c [12];
  undefined4 local_70 [2];
  undefined1 local_68 [12];
  undefined4 local_5c [2];
  undefined1 local_54 [12];
  undefined4 local_48 [2];
  undefined1 local_40 [12];
  undefined4 local_34 [2];
  undefined1 local_2c [16];
  
  FUN_0007f4d2();
  puVar1 = (undefined4 *)FUN_0007f460();
  puVar6 = &DAT_000887b7;
  uVar7 = *puVar1;
  puVar1 = local_34;
  do {
    uVar2 = *puVar6;
    uVar5 = puVar6[1];
    puVar6 = puVar6 + 2;
    *puVar1 = uVar2;
    puVar1[1] = uVar5;
    puVar1 = puVar1 + 2;
  } while (puVar6 != (undefined4 *)&UNK_000887c7);
  *(undefined1 *)puVar1 = 0x79;
  iVar3 = FUN_00080d3e(uVar7,local_34);
  if (iVar3 == 0) {
    puVar6 = &DAT_000887c8;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined2 *)(param_2 + 4) = 0;
    puVar1 = local_98;
    do {
      uVar7 = *puVar6;
      uVar2 = puVar6[1];
      puVar6 = puVar6 + 2;
      *puVar1 = uVar7;
      puVar1[1] = uVar2;
      puVar1 = puVar1 + 2;
    } while (puVar6 != (undefined4 *)&UNK_000887d8);
    *(undefined1 *)puVar1 = 0x69;
    iVar3 = FUN_0004ed3c(param_1,local_98);
    if (iVar3 != 0) {
      puVar6 = &DAT_000887c8;
      puVar1 = local_84;
      do {
        uVar7 = *puVar6;
        uVar2 = puVar6[1];
        puVar6 = puVar6 + 2;
        *puVar1 = uVar7;
        puVar1[1] = uVar2;
        puVar1 = puVar1 + 2;
      } while (puVar6 != (undefined4 *)&UNK_000887d8);
      *(undefined1 *)puVar1 = 0x69;
      iVar3 = FUN_0007f570(param_1,iVar3,local_84);
      if (iVar3 != 0) {
        *(undefined2 *)(param_2 + 2) = *(undefined2 *)(iVar3 + 4);
        puVar6 = &DAT_000887d9;
        puVar1 = local_70;
        do {
          uVar7 = *puVar6;
          uVar2 = puVar6[1];
          puVar6 = puVar6 + 2;
          *puVar1 = uVar7;
          puVar1[1] = uVar2;
          puVar1 = puVar1 + 2;
        } while (puVar6 != (undefined4 *)&UNK_000887e9);
        *(undefined1 *)puVar1 = 0x9f;
        iVar3 = FUN_0004ed3c(param_1,local_70);
        if (iVar3 != 0) {
          puVar6 = &DAT_000887d9;
          puVar1 = local_5c;
          do {
            uVar7 = *puVar6;
            uVar2 = puVar6[1];
            puVar6 = puVar6 + 2;
            *puVar1 = uVar7;
            puVar1[1] = uVar2;
            puVar1 = puVar1 + 2;
          } while (puVar6 != (undefined4 *)&UNK_000887e9);
          *(undefined1 *)puVar1 = 0x9f;
          iVar4 = FUN_0007f570(param_1,iVar3,local_5c);
          if (iVar4 != 0) {
            *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)(iVar4 + 4);
            local_a0[0] = 0;
            local_9e = 0x2902;
            iVar3 = FUN_0007f570(param_1,iVar3,local_a0);
            if (iVar3 != 0) {
              *(undefined2 *)(param_2 + 3) = *(undefined2 *)(iVar3 + 4);
              puVar6 = &DAT_000887ea;
              puVar1 = local_48;
              do {
                uVar7 = *puVar6;
                uVar2 = puVar6[1];
                puVar6 = puVar6 + 2;
                *puVar1 = uVar7;
                puVar1[1] = uVar2;
                puVar1 = puVar1 + 2;
              } while (puVar6 != (undefined4 *)&UNK_000887fa);
              *(undefined1 *)puVar1 = 0x22;
              iVar3 = FUN_0004ed3c(param_1,local_48);
              if (iVar3 != 0) {
                puVar6 = &DAT_000887ea;
                puVar1 = local_34;
                do {
                  uVar7 = *puVar6;
                  uVar2 = puVar6[1];
                  puVar6 = puVar6 + 2;
                  *puVar1 = uVar7;
                  puVar1[1] = uVar2;
                  puVar1 = puVar1 + 2;
                } while (puVar6 != (undefined4 *)&UNK_000887fa);
                *(undefined1 *)puVar1 = 0x22;
                iVar4 = FUN_0007f570(param_1,iVar3,local_34);
                if (iVar4 != 0) {
                  *(undefined2 *)((int)param_2 + 0xe) = *(undefined2 *)(iVar4 + 4);
                  local_9c[0] = 0;
                  local_9a = 0x2902;
                  iVar3 = FUN_0007f570(param_1,iVar3,local_9c);
                  if (iVar3 != 0) {
                    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(iVar3 + 4);
                    uVar7 = FUN_0007f4c8(param_1);
                    *param_2 = uVar7;
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar7 = 0xffffffea;
  }
  else {
    uVar7 = 0xffffff7a;
  }
  return uVar7;
}


