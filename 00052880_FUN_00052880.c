/*
 * Function: FUN_00052880
 * Entry:    00052880
 * Prototype: undefined FUN_00052880()
 */


undefined4 FUN_00052880(int param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [4];
  undefined *local_64;
  int local_60;
  short local_5c;
  undefined4 local_58;
  undefined1 auStack_50 [36];
  char local_2c;
  
  fill_memory_buffer(auStack_68,0,0x18);
  iVar8 = *(int *)(param_1 + 0x18);
  local_64 = &DAT_200028ec;
  local_60 = *(int *)(param_1 + 0xc);
  local_58 = 0x80c8d;
  if (((iVar8 != 0) && (iVar3 = FUN_00056f4c(iVar8,auStack_50), iVar3 == 0)) && (local_2c == '\x02')
     ) {
    uVar4 = FUN_00080c7c(param_1);
    if (uVar4 == 0) {
LAB_000528e0:
      uVar6 = 1;
      goto LAB_000528aa;
    }
    iVar3 = FUN_000527dc(iVar8);
    if (((iVar3 != 0) && (*(char *)(iVar3 + 0x69) != '\0')) &&
       (*(char *)(param_1 + 0x1c) == *(char *)(iVar3 + 0x69))) {
      FUN_000729fc(iVar3 + 0x6c);
      uVar7 = 0;
      bVar2 = false;
      while (uVar5 = (uint)*(ushort *)(param_1 + 0x10), uVar6 = 0, uVar7 < uVar5) {
        if ((*(char *)(iVar3 + 0x69) == '\0') ||
           (*(char *)(param_1 + 0x1c) != *(char *)(iVar3 + 0x69))) goto LAB_000528a8;
        if ((int)uVar5 < (int)(uVar7 + uVar4)) {
          uVar4 = uVar5 - uVar7 & 0xffff;
        }
        local_5c = (short)uVar4;
        uVar9 = FUN_0005b754(iVar8,auStack_68);
        if ((int)uVar9 == -0xc) {
          if (!bVar2) {
            if (uVar4 < 0x14) {
              uVar6 = 2;
              break;
            }
            uVar4 = (uVar4 << 0xf) >> 0x10;
          }
          FUN_000745c8();
        }
        else {
          if ((int)uVar9 != 0) goto LAB_000528e0;
          uVar1 = (short)uVar7 + (short)uVar4;
          uVar7 = (uint)uVar1;
          local_60 = *(int *)(param_1 + 0xc) + (uint)uVar1;
          FUN_00072908(iVar3 + 0x6c,(int)((ulonglong)uVar9 >> 0x20),0xffffffff,0xffffffff);
          bVar2 = true;
        }
      }
      goto LAB_000528aa;
    }
  }
LAB_000528a8:
  uVar6 = 5;
LAB_000528aa:
  FUN_00080c06(param_1 + 0x18);
  thunk_FUN_0005f24c(param_1);
  return uVar6;
}


