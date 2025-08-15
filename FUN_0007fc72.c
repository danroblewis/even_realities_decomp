/*
 * Function: FUN_0007fc72
 * Entry:    0007fc72
 * Prototype: undefined FUN_0007fc72()
 */


int FUN_0007fc72(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  iVar1 = FUN_0007fc04(param_1,&local_14);
  if (iVar1 == 0) {
    uVar3 = local_14 & 0xff;
    uVar4 = (uint)local_14._1_1_;
    if ((int)(((uVar3 << 0x1f | uVar3 << 0x1e | uVar3 << 0x1d | uVar3 << 0x1c | uVar3 << 0x1b |
                uVar3 << 0x1a | uVar3 << 0x19) >> 0x1f | local_14 >> 7 & 1 | uVar4 & 1 |
               (uVar4 << 0x1e) >> 0x1f | (uVar4 << 0x1d) >> 0x1f | (uVar4 << 0x1c) >> 0x1f |
               (uVar4 << 0x1b) >> 0x1f | (uVar4 << 0x1a) >> 0x1f | (uVar4 << 0x19) >> 0x1f |
              (uint)(local_14._1_1_ >> 7)) << 0x1f) < 0) {
      iVar1 = FUN_0007fc2c(param_1,(int)&local_18 + 3);
      if (iVar1 != 0) {
        return iVar1;
      }
      switch(local_18 >> 0x18) {
      case 0:
        if (param_2 == 0) {
          param_2 = 1;
        }
        break;
      case 1:
        if (param_2 < 2) {
          param_2 = 2;
        }
        break;
      case 2:
        if (param_2 < 3) {
          param_2 = 3;
        }
        break;
      case 3:
        if (param_2 < 4) {
          param_2 = 4;
        }
      }
    }
    iVar2 = FUN_0007f97c(param_1,0x10,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0xf | (byte)((param_2 & 0xf) << 4));
    iVar1 = FUN_0007f98a(param_1,0x10,&local_18,1);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


