/*
 * Function: FUN_0004f518
 * Entry:    0004f518
 * Prototype: undefined FUN_0004f518()
 */


undefined4 FUN_0004f518(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_28 [4];
  undefined *local_24;
  undefined4 uStack_20;
  undefined2 local_1c;
  undefined1 *local_18;
  
  fill_memory_buffer(auStack_28,0,0x18);
  local_24 = &DAT_0008ad40;
  local_18 = &LAB_0004f4f0_1;
  uStack_20 = param_2;
  local_1c = param_3;
  if ((param_1 == 0) || (iVar2 = FUN_0005b0dc(param_1,&DAT_0008ad40,1), iVar2 != 0)) {
    uVar1 = FUN_0005b754(param_1,auStack_28);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}


