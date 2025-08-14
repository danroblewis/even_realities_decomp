/*
 * Function: FUN_0007c99e
 * Entry:    0007c99e
 * Prototype: undefined FUN_0007c99e()
 */


void FUN_0007c99e(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_2c;
  undefined1 local_28 [4];
  undefined1 local_24;
  undefined1 local_23 [4];
  undefined1 local_1f [11];
  
  local_2c = 0;
  fill_memory_buffer(local_28,0,0xd);
  uVar6 = *param_2;
  uVar5 = param_2[1];
  local_24 = 9;
  uVar3 = 0x18;
  puVar4 = &local_2c;
  do {
    *(char *)puVar4 = (char)(uVar6 >> (uVar3 & 0xff));
    uVar1 = uVar3 & 0xff;
    uVar3 = uVar3 - 8;
    uVar2 = (undefined1)(uVar5 >> uVar1);
    *(undefined1 *)(puVar4 + 1) = uVar2;
    *(undefined1 *)((int)puVar4 + 9) = *(undefined1 *)puVar4;
    *(undefined1 *)((int)puVar4 + 0xd) = uVar2;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (uVar3 != 0xfffffff8);
  FUN_00025850(param_1,0x900,&local_2c,0x11);
  return;
}


