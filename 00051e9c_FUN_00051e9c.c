/*
 * Function: FUN_00051e9c
 * Entry:    00051e9c
 * Prototype: undefined FUN_00051e9c()
 */


int FUN_00051e9c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  char local_6d;
  undefined4 local_6c;
  undefined4 *local_68;
  int local_64;
  undefined4 local_60 [8];
  char *local_40;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 **ppuStack_34;
  undefined1 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined1 local_1c;
  
  local_40 = "hash";
  local_3c = 4;
  ppuStack_34 = &local_68;
  local_38 = &DAT_00085f97;
  local_2c = "confirm";
  local_28 = 7;
  iVar7 = *(int *)(param_1 + 8);
  local_24 = 0x86007;
  local_20 = &local_6d;
  local_68 = (undefined4 *)0x0;
  local_64 = 0;
  local_6d = '\0';
  local_6c = 0;
  local_30 = 0;
  local_1c = 0;
  iVar1 = FUN_00080872(*(int *)(param_1 + 4) + 4,&local_40,2,&local_6c);
  if (iVar1 != 0) {
    return 3;
  }
  FUN_00080a42();
  if (local_64 == 0) {
    if (local_6d == '\0') {
LAB_00051f16:
      uVar2 = 0x18;
      goto LAB_00051f18;
    }
    FUN_00080a4a();
    iVar1 = FUN_00080a46();
  }
  else {
    if (local_64 != 0x20) goto LAB_00051f16;
    puVar5 = local_60;
    puVar6 = local_68;
    do {
      uVar3 = *puVar6;
      uVar4 = puVar6[1];
      puVar6 = puVar6 + 2;
      *puVar5 = uVar3;
      puVar5[1] = uVar4;
      puVar5 = puVar5 + 2;
    } while (puVar6 != local_68 + 8);
    iVar1 = FUN_00080a4e(local_60,0);
    if (iVar1 < 0) {
      uVar2 = 8;
      goto LAB_00051f18;
    }
  }
  uVar2 = FUN_00051d8c(iVar1,local_6d);
  if (uVar2 == 0) {
    iVar1 = FUN_00051c98(param_1);
    if (iVar1 == 0) {
      FUN_00080a44();
      return 0;
    }
    FUN_00080a44();
    return iVar1;
  }
  uVar2 = uVar2 & 0xffff;
LAB_00051f18:
  iVar1 = FUN_0005160c(iVar7 + 4,1,uVar2);
  FUN_00080a44();
  if (iVar1 != 0) {
    return 0;
  }
  return 7;
}


