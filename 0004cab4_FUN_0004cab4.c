/*
 * Function: FUN_0004cab4
 * Entry:    0004cab4
 * Prototype: undefined FUN_0004cab4(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5)
 */


uint FUN_0004cab4(int param_1,uint param_2,undefined4 param_3,uint param_4,ushort param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint local_3c;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  undefined4 local_28;
  char *local_24;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_24 = "NVS not initialized";
    local_28 = 2;
    FUN_0007e658(&DAT_000881b8,0x1040,&local_28);
    uVar1 = 0xfffffff3;
  }
  else {
    iVar2 = FUN_0007e65e(*(undefined4 *)(param_1 + 0x2c),8);
    if ((uint)*(ushort *)(param_1 + 0xc) + iVar2 * -2 < param_4) {
      uVar1 = 0xffffffea;
    }
    else {
      uVar4 = 0;
      local_3c = *(uint *)(param_1 + 4);
      uVar1 = local_3c;
      do {
        uVar3 = local_3c;
        if (param_5 < uVar4) {
          uVar3 = uVar1;
          if (*(uint *)(param_1 + 4) != local_3c) goto LAB_0004cb52;
          break;
        }
        uVar1 = FUN_0007e6e2(param_1,&local_3c,&local_38);
        if (uVar1 != 0) {
          return uVar1;
        }
        if ((local_38 == param_2) && (iVar2 = FUN_0007e672(param_1,&local_38), iVar2 != 0)) {
          uVar4 = uVar4 + 1;
        }
        uVar1 = uVar3;
      } while (*(uint *)(param_1 + 4) != local_3c);
      if (local_38 == param_2) {
LAB_0004cb52:
        uVar1 = (uint)local_34;
        if ((uVar1 != 0) && (param_5 <= uVar4)) {
          if (param_4 <= uVar1) {
            uVar1 = param_4;
          }
          uVar1 = FUN_0007e53e(param_1,(uVar3 & 0xffff0000) + (uint)local_36,param_3,uVar1);
          if (uVar1 != 0) {
            return uVar1;
          }
          return (uint)local_34;
        }
      }
      uVar1 = 0xfffffffe;
    }
  }
  return uVar1;
}


