/*
 * Function: FUN_0008260c
 * Entry:    0008260c
 * Prototype: undefined FUN_0008260c()
 */


undefined1 FUN_0008260c(undefined4 *param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined2 local_2e;
  undefined2 auStack_2c [12];
  
  pcVar4 = (char *)*param_1;
  if (*pcVar4 != '\0') {
    return 1;
  }
  uVar3 = (uint)*(ushort *)(pcVar4 + 2);
  local_2e = param_2;
  if (uVar3 == 0x2900) {
LAB_0008262c:
    iVar1 = FUN_000801c0(param_3,&local_2e,2);
    if (iVar1 != 0) {
      local_2e = *(undefined2 *)(pcVar4 + 2);
      iVar1 = FUN_000801c0(param_3,&local_2e,2);
      if (iVar1 != 0) {
        iVar1 = (*(code *)param_1[1])(0,param_1,auStack_2c,0x13,0);
        if (iVar1 < 0) goto LAB_00082642;
        puVar2 = auStack_2c;
LAB_00082684:
        iVar1 = FUN_000801c0(param_3,puVar2,iVar1);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  else {
    if (uVar3 < 0x2901) {
      if (3 < uVar3 - 0x2800) {
        return 1;
      }
      goto LAB_0008262c;
    }
    if (4 < (uVar3 + 0xd6ff & 0xffff)) {
      return 1;
    }
    iVar1 = FUN_000801c0(param_3,&local_2e,2);
    if (iVar1 != 0) {
      local_2e = *(undefined2 *)(pcVar4 + 2);
      iVar1 = 2;
      puVar2 = &local_2e;
      goto LAB_00082684;
    }
  }
  iVar1 = -0x16;
LAB_00082642:
  *(int *)(param_3 + 0x58) = iVar1;
  return 0;
}


