/*
 * Function: FUN_0007f7d2
 * Entry:    0007f7d2
 * Prototype: undefined FUN_0007f7d2()
 */


undefined4 FUN_0007f7d2(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  
  if (param_3 == 0) {
    return 0xffffffea;
  }
  *(undefined1 *)(param_1 + 0x908) = 0;
  uVar4 = *(uint *)(param_1 + 4);
  uVar3 = uVar4 | 4;
  *(uint *)(param_1 + 4) = uVar3;
  if ((uVar4 & 4) == 0) {
    local_24 = param_2;
    local_20 = param_3;
    local_1c = param_4;
    FUN_000836ec(&local_24,param_1 + 0x28,0x800,uVar3,param_1);
    local_20 = local_20 & 0xffff0000;
    local_24 = local_1c;
    iVar1 = FUN_00083730(&local_24);
    if (iVar1 != 0) {
      FUN_00083758(&local_24,1);
      uVar3 = FUN_00083730(&local_24);
      if (param_3 + 1 <= uVar3) {
        FUN_00083740(&local_24,param_2,param_3);
        FUN_00083758(&local_24,0);
        *(undefined4 *)(param_1 + 0x8f8) = 0;
        if (*(char *)(param_1 + 0x8e8) != '\0') {
          iVar1 = FUN_00083730(&local_24);
          if (iVar1 == 0) {
            return 0xfffffff4;
          }
          FUN_00083758(&local_24,0);
          *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 0x8f8) + 1;
        }
        uVar2 = process_data_with_validation_and_callback_alt(param_1,local_20 & 0xffff,param_4);
        *(undefined4 *)(param_1 + 0x904) = *(undefined4 *)(param_1 + 0x8f8);
        return uVar2;
      }
    }
    return 0xfffffff4;
  }
  return 0xfffffff0;
}


