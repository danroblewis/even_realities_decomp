/*
 * Function: FUN_0008199a
 * Entry:    0008199a
 * Prototype: undefined FUN_0008199a()
 */


undefined4 FUN_0008199a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  uVar1 = FUN_00057394();
  *(char *)(param_1 + 0xb8) = (char)uVar1;
  iVar2 = FUN_000573f4(0x14,uVar1,10);
  if (iVar2 == 0) {
    uVar1 = 0xfffffff4;
  }
  else {
    puVar3 = (undefined2 *)FUN_0005f5d0(iVar2 + 0xc,10);
    *puVar3 = *(undefined2 *)(param_1 + 0xb6);
    puVar3[1] = *(undefined2 *)(param_1 + 0x14);
    puVar3[2] = *(undefined2 *)(param_1 + 0x16);
    puVar3[3] = *(undefined2 *)(param_1 + 0x18);
    puVar3[4] = (short)*(undefined4 *)(param_1 + 0x1c);
    FUN_00081962(param_1,iVar2,0x140000,0,param_4);
    uVar1 = 0;
  }
  return uVar1;
}


