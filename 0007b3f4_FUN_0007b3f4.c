/*
 * Function: FUN_0007b3f4
 * Entry:    0007b3f4
 * Prototype: undefined FUN_0007b3f4()
 */


undefined4 FUN_0007b3f4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    uVar5 = *(uint *)(param_1 + 8);
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar3 = *(uint *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x10) =
         uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18;
    *(uint *)(param_1 + 0x14) =
         uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar4 = *(uint *)(param_1 + 0x1c);
    uVar2 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 8) =
         uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
    *(uint *)(param_1 + 0xc) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    *(uint *)(param_1 + 0x18) =
         uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar1 = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x1c) =
         uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
    *(uint *)(param_1 + 0x20) =
         uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
    uVar3 = *(uint *)(param_1 + 0x2c);
    uVar4 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x24) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    *(uint *)(param_1 + 0x28) =
         uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x2c) =
         uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
    uVar3 = *(uint *)(param_1 + 0x34);
    uVar2 = *(uint *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x30) =
         uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
    *(uint *)(param_1 + 0x34) =
         uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
    uVar3 = *(uint *)(param_1 + 0x40);
    uVar4 = *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x38) =
         uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18;
    *(uint *)(param_1 + 0x3c) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    *(uint *)(param_1 + 0x40) =
         uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
    *(uint *)(param_1 + 0x44) =
         uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
    return 0;
  }
  return 0xf30000;
}


