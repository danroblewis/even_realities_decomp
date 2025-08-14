/*
 * Function: FUN_0004cf78
 * Entry:    0004cf78
 * Prototype: undefined FUN_0004cf78()
 */


undefined4 FUN_0004cf78(int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *local_24;
  undefined4 *puStack_20;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar5 + 0x3bc) != 2) {
    return 0xfffffff0;
  }
  if (((char *)*param_3 != (char *)0x0) && (cVar1 = *(char *)*param_3, cVar1 != '\0')) {
    local_24 = param_2;
    puStack_20 = param_3;
    if (*(int *)(iVar5 + 0x3b8) == 0) {
      iVar6 = iVar5 + 0x1b0;
      resource_mutex_acquire(iVar6,param_2,0xffffffff,0xffffffff);
      iVar2 = FUN_0004cd24(iVar5,&local_24,*param_3);
      piVar3 = local_24;
      if (local_24 != (int *)0x0) {
        local_24[0x1a] = (int)(param_3 + 2);
        iVar4 = param_3[5];
        *(undefined1 *)(local_24 + 0x19) = 0;
        local_24[0x1b] = iVar4;
        local_24[0xf] = (int)local_24;
        if (iVar2 == 0) {
          FUN_0008705a(local_24 + 0x10,*param_3,0x20);
          mutex_unlock(iVar6);
        }
        else {
          mutex_unlock(iVar6);
          FUN_0004cce0(iVar5,piVar3,*param_3,piVar3[0x18]);
        }
LAB_0004cff8:
        *param_2 = (int)piVar3;
        return 0;
      }
      mutex_unlock(iVar6);
    }
    else {
      piVar3 = (int *)FUN_0007eae4(iVar5,&LAB_000a8ea0,param_3,cVar1,param_1);
      if (piVar3 != (int *)0x0) {
        piVar3[0x1a] = (int)(param_3 + 2);
        iVar2 = param_3[5];
        piVar3[0xf] = (int)piVar3;
        piVar3[0x1b] = iVar2;
        *(undefined1 *)(piVar3 + 0x19) = 0;
        FUN_0008705a(piVar3 + 0x10,*param_3,0x20);
        iVar5 = FUN_0004d0c4(iVar5,1,piVar3);
        if (iVar5 == 0) goto LAB_0004cff8;
      }
    }
  }
  return 0xffffffea;
}


