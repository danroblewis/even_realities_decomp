/*
 * Function: FUN_00086596
 * Entry:    00086596
 * Prototype: undefined FUN_00086596()
 */


uint FUN_00086596(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar6 = param_1[3];
  if (-1 < iVar6 << 0x1e) {
    iVar8 = param_1[2];
    iVar2 = FUN_00086554(param_1 + 3,2);
    if (iVar2 != 0) {
      puVar1 = *(undefined4 **)(iVar8 + 0xd8);
      puVar9 = (undefined4 *)((uint)(iVar6 << 0x1e) >> 0x1f);
      while (puVar4 = puVar1, puVar4 != (undefined4 *)0x0) {
        if (param_1 == puVar4) {
          uVar5 = *param_1;
          if (puVar9 == (undefined4 *)0x0) {
            *(undefined4 *)(iVar8 + 0xd8) = uVar5;
            if (param_1 == *(undefined4 **)(iVar8 + 0xdc)) {
              *(undefined4 *)(iVar8 + 0xdc) = uVar5;
            }
          }
          else {
            *puVar9 = uVar5;
            if (param_1 == *(undefined4 **)(iVar8 + 0xdc)) {
              *(undefined4 **)(iVar8 + 0xdc) = puVar9;
            }
          }
          *param_1 = 0;
          break;
        }
        puVar9 = puVar4;
        puVar1 = (undefined4 *)*puVar4;
      }
    }
  }
  uVar7 = param_1[3];
  uVar3 = uVar7 & 0xf;
  if (uVar3 != 0) {
    uVar7 = uVar7 | 2;
  }
  if (uVar3 != 0) {
    param_1[3] = uVar7;
    uVar3 = uVar3 | 2;
  }
  return uVar3;
}


