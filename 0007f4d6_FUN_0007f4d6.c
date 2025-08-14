/*
 * Function: FUN_0007f4d6
 * Entry:    0007f4d6
 * Prototype: undefined FUN_0007f4d6()
 */


undefined4 * FUN_0007f4d6(int param_1,undefined4 *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  puVar4 = (undefined4 *)(param_1 + 0x1c);
  if ((param_2 == (undefined4 *)0x0) ||
     (puVar4 = param_2, (undefined4 *)(param_1 + 0x1c) <= param_2)) {
    iVar3 = *(int *)(param_1 + 0x134);
    local_1c = param_2;
    uStack_18 = param_3;
    do {
      puVar4 = puVar4 + 2;
      if ((undefined4 *)(param_1 + iVar3 * 8 + 0x1c) <= puVar4) goto LAB_0007f4e2;
      uVar1 = (ushort)local_1c;
      local_1c = (undefined4 *)CONCAT22(0x2803,uVar1 & 0xff00);
      iVar2 = FUN_00080d3e(&local_1c,*puVar4);
    } while (iVar2 != 0);
  }
  else {
LAB_0007f4e2:
    puVar4 = (undefined4 *)0x0;
  }
  return puVar4;
}


