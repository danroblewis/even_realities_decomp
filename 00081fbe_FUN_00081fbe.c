/*
 * Function: FUN_00081fbe
 * Entry:    00081fbe
 * Prototype: undefined FUN_00081fbe()
 */


undefined4 FUN_00081fbe(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *param_3;
  uVar1 = *(undefined4 *)(iVar6 + 8);
  *(undefined1 *)(param_3 + 3) = 0;
  iVar2 = FUN_00082cba(uVar1,param_1,0x95,0,param_1,param_2);
  *(char *)(param_3 + 3) = (char)iVar2;
  if (iVar2 == 0) {
    uVar5 = (uint)*(ushort *)(param_3[2] + 0x10);
    if ((uint)*(ushort *)(iVar6 + 0x1e) < (uint)*(ushort *)(iVar6 + 0x2e)) {
      iVar2 = *(ushort *)(iVar6 + 0x1e) - uVar5;
    }
    else {
      iVar2 = *(ushort *)(iVar6 + 0x2e) - uVar5;
    }
    if (1 < iVar2) {
      puVar3 = (undefined2 *)FUN_0005f5d0(param_3[2] + 0xc,2);
      uVar5 = FUN_00081e2a(iVar6,param_1,param_3[2],(short)param_3[1],0,0);
      if (-1 < (int)uVar5) {
        *puVar3 = (short)uVar5;
        return 1;
      }
      if (uVar5 < 0xffffff01) {
        cVar4 = '\x0e';
      }
      else {
        cVar4 = -(char)uVar5;
      }
      *(char *)(param_3 + 3) = cVar4;
    }
  }
  return 0;
}


