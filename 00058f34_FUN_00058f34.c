/*
 * Function: FUN_00058f34
 * Entry:    00058f34
 * Prototype: undefined FUN_00058f34()
 */


undefined4 FUN_00058f34(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_30;
  char *local_2c;
  int iStack_28;
  uint local_24;
  uint uStack_20;
  undefined4 uStack_18;
  
  uStack_20 = param_3 + 1;
  local_24 = (uint)*(ushort *)(param_1 + 0x2e);
  if ((uint)*(ushort *)(param_1 + 0x1e) <= (uint)*(ushort *)(param_1 + 0x2e)) {
    local_24 = (uint)*(ushort *)(param_1 + 0x1e);
  }
  uStack_18 = param_4;
  if (local_24 < uStack_20) {
    local_2c = "ATT channel %p MTU too small for RSP (%u < %u)";
    local_30 = 5;
    iStack_28 = param_1;
    FUN_00081ddc(&DAT_00088100,0x2880,&local_30);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_000585f0();
  }
  return uVar1;
}


