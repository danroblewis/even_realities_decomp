/*
 * Function: FUN_00081c22
 * Entry:    00081c22
 * Prototype: undefined FUN_00081c22()
 */


void FUN_00081c22(undefined4 *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  
  puVar5 = (undefined4 *)((undefined4 *)*param_1)[0xc];
  if (puVar5 == (undefined4 *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
LAB_00081c64:
    uVar9 = (uint)*(ushort *)((int)param_1 + 0x2e);
    uVar1 = *(ushort *)((int)param_1 + 0x1e);
    if ((uVar9 <= uVar3) && (uVar1 <= uVar4)) {
      return;
    }
    if (uVar4 < uVar1) {
      uVar4 = uVar1;
    }
    uVar2 = *(undefined4 *)*param_1;
    piVar10 = DAT_2000af10;
    if (uVar3 < uVar9) {
      uVar3 = uVar9;
    }
    for (; piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
      pcVar6 = (code *)piVar10[-1];
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar2,uVar3,uVar4,pcVar6,uVar9);
      }
    }
    return;
  }
  puVar7 = (undefined4 *)*puVar5;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7 = puVar7 + -100;
  }
  uVar4 = 0;
  uVar3 = 0;
  puVar5 = puVar5 + -100;
  do {
    puVar8 = puVar7;
    if (puVar5 == param_1) goto LAB_00081c54;
    while( true ) {
      if (uVar3 < *(ushort *)((int)puVar5 + 0x2e)) {
        uVar3 = (uint)*(ushort *)((int)puVar5 + 0x2e);
      }
      puVar8 = puVar7;
      if (uVar4 < *(ushort *)((int)puVar5 + 0x1e)) {
        uVar4 = *(ushort *)((int)puVar5 + 0x1e);
      }
LAB_00081c54:
      if (puVar8 == (undefined4 *)0x0) goto LAB_00081c64;
      puVar5 = puVar8;
      if (puVar8[100] != 0) break;
      puVar7 = (undefined4 *)0x0;
      if (puVar8 == param_1) goto LAB_00081c64;
    }
    puVar7 = (undefined4 *)(puVar8[100] + -400);
  } while( true );
}


