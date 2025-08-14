/*
 * Function: FUN_0007eb7e
 * Entry:    0007eb7e
 * Prototype: undefined FUN_0007eb7e()
 */


void FUN_0007eb7e(int param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *local_1c;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar4 = *(int *)(param_1 + 0xb0) + -0x19c;
    iVar3 = *(int *)(param_1 + 0xb0) + 0x14;
    local_1c = param_2;
    resource_mutex_acquire(iVar3,param_2,0xffffffff,0xffffffff,param_1);
    iVar2 = FUN_0004cd24(iVar4,&local_1c,param_2);
    pcVar1 = local_1c;
    if (local_1c != (char *)0x0) {
      if (iVar2 != 0) {
        mutex_unlock(iVar3);
        FUN_0004cce0(iVar4,pcVar1,param_2,param_3);
        return;
      }
      FUN_0008705a(local_1c + 0x40,param_2,0x20);
      *(undefined4 *)(pcVar1 + 0x60) = param_3;
    }
    mutex_unlock(iVar3);
    return;
  }
  return;
}


