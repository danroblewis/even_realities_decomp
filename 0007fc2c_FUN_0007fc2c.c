/*
 * Function: FUN_0007fc2c
 * Entry:    0007fc2c
 * Prototype: undefined FUN_0007fc2c()
 */


int FUN_0007fc2c(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *local_14;
  
  local_14 = param_2;
  iVar1 = FUN_0007fb20(param_1,2,param_3,param_4,param_1);
  if (iVar1 == 0) {
    iVar2 = FUN_0007f97c(param_1,0x5f,&local_14,1);
    if (iVar2 == 0) {
      uVar3 = (uint)((int)local_14 << 0x1b) >> 0x1e;
      if (((uVar3 == 2) || (uVar3 == 3)) || (uVar3 == 1)) {
        *param_2 = (byte)((uint)((int)local_14 << 0x1b) >> 0x1e);
      }
      else {
        *param_2 = 0;
      }
    }
    iVar1 = FUN_0007fb20(param_1,0);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


