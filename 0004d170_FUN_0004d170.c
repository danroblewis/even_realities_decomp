/*
 * Function: FUN_0004d170
 * Entry:    0004d170
 * Prototype: undefined FUN_0004d170()
 */


int FUN_0004d170(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  
  if (param_1 == 0) {
    iVar1 = -0x16;
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(char **)(param_1 + 0x34) = "sram0.shm";
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x98);
    FUN_00085442(param_1 + 0x40,*(undefined4 *)(param_1 + 0x98),(undefined4 *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 0x9c),0xffffffff,0,0);
    local_20 = &LAB_000682b4_1;
    uStack_1c = 6;
    iVar1 = FUN_00068240(&local_20);
    if (((iVar1 == 0) && (iVar1 = FUN_00068204(param_1 + 0x34), iVar1 == 0)) &&
       (iVar1 = FUN_00085406("generic","sram0.shm",&local_24), iVar1 == 0)) {
      if (*(int *)(local_24 + 8) == 0) {
        local_24 = 0;
      }
      else {
        local_24 = local_24 + 0xc;
      }
      *(int *)(param_1 + 0xa0) = local_24;
      iVar1 = FUN_0007ed88(*(undefined4 *)(param_1 + 0x94));
      *(int *)(param_1 + 0xd4) = iVar1;
      if (iVar1 != 0) {
        iVar1 = FUN_0007ed88(*(undefined4 *)(param_1 + 0x94));
        *(int *)(param_1 + 0xd8) = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x8c);
          *(undefined4 *)(param_1 + 0xac) = 4;
          *(undefined4 *)(param_1 + 0xc4) = 4;
          *(undefined4 *)(param_1 + 0x28) = 2;
          *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xa0);
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xa0);
          *(undefined **)(param_1 + 0x20) = &DAT_0008ac74;
          *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_1 + 0x94);
          *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xd4);
          *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x90);
          *(undefined2 *)(param_1 + 200) = *(undefined2 *)(param_1 + 0x94);
          *(int *)(param_1 + 0xbc) = iVar1;
          *(undefined4 *)(param_1 + 0x18) = param_2;
          *(int *)(param_1 + 0x2c) = param_1 + 0xa4;
          return 0;
        }
      }
      iVar1 = -0xc;
    }
  }
  return iVar1;
}


