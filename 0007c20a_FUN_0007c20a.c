/*
 * Function: FUN_0007c20a
 * Entry:    0007c20a
 * Prototype: undefined FUN_0007c20a()
 */


undefined4 FUN_0007c20a(int param_1)

{
  short sVar1;
  int iVar2;
  undefined1 local_d4;
  undefined1 auStack_d3 [203];
  
  while( true ) {
    fill_memory_buffer(auStack_d3,0,0xca);
    local_d4 = 0xf4;
    iVar2 = FUN_00019c44(auStack_d3);
    if (iVar2 != 0) break;
    sVar1 = FUN_0000ef12(&local_d4);
    (**(code **)(param_1 + 0xc))(&local_d4,sVar1 + 1);
  }
  return 0;
}


