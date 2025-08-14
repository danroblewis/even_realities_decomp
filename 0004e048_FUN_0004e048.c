/*
 * Function: FUN_0004e048
 * Entry:    0004e048
 * Prototype: undefined FUN_0004e048()
 */


undefined4 FUN_0004e048(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  
  if (DAT_20002848 == (byte *)0x0) {
    uVar1 = 0xfffffff3;
  }
  else {
    pbVar3 = DAT_20002848;
    for (iVar2 = 0; iVar2 < 0x16; iVar2 = iVar2 + 1) {
      if (*pbVar3 == param_1) {
        if ((*(int *)(pbVar3 + 0xc) != 0) && (iVar2 = FUN_0008638c(), iVar2 != 0)) {
          *param_2 = pbVar3;
          return 0;
        }
        return 0xffffffed;
      }
      pbVar3 = pbVar3 + 0x10;
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}


