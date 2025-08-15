/*
 * Function: FUN_00085f06
 * Entry:    00085f06
 * Prototype: undefined FUN_00085f06()
 */


int FUN_00085f06(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 local_14;
  undefined4 uStack_10;
  
  puVar4 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_00085da2();
  if (iVar1 != 0) {
    bVar3 = *(byte *)*param_1 & 0x1f;
    if (bVar3 == 0x1f) {
      local_14 = 0xffffffef;
      if (param_1[2] == 0) {
        FUN_00085d70(param_1,3);
        return 0;
      }
      *param_1 = (byte *)*param_1 + 1;
      param_1[2] = param_1[2] + -1;
    }
    else {
      iVar1 = FUN_00085e1a(param_1,&local_14,4,bVar3,puVar4);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = 0;
    }
    iVar2 = FUN_00085c38(param_1,local_14);
    if (iVar2 != 0) {
      *(char *)(param_1 + 4) = (char)iVar1;
      return iVar2;
    }
    *param_1 = param_1[1];
    param_1[2] = param_1[2] + 1;
  }
  return 0;
}


