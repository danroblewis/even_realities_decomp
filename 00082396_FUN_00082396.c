/*
 * Function: FUN_00082396
 * Entry:    00082396
 * Prototype: undefined FUN_00082396()
 */


undefined4 FUN_00082396(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  uVar1 = **(ushort **)(param_2 + 0xc);
  if (uVar1 < 0x17) {
    uVar4 = 4;
  }
  else {
    iVar2 = FUN_00058f34(param_1,3,2);
    if (iVar2 == 0) {
      uVar4 = 0xe;
    }
    else {
      puVar3 = (undefined1 *)FUN_0005f5d0(iVar2 + 0xc,2);
      *puVar3 = 0xf2;
      puVar3[1] = 1;
      FUN_000821a4(param_1,iVar2);
      *(undefined2 *)((int)param_1 + 0x1e) = 0x1f2;
      *(ushort *)((int)param_1 + 0x2e) = uVar1;
      *(uint *)(*(int *)*param_1 + 4) = *(uint *)(*(int *)*param_1 + 4) | 0x1000;
      FUN_00081c22(param_1);
      uVar4 = 0;
    }
  }
  return uVar4;
}


