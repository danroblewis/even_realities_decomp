/*
 * Function: FUN_00053658
 * Entry:    00053658
 * Prototype: undefined FUN_00053658()
 */


void FUN_00053658(uint param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 local_20;
  char *local_1c;
  uint uStack_18;
  uint local_14;
  
  pbVar1 = param_3;
  do {
    pbVar2 = pbVar1;
    if (param_3 + param_4 * 8 == pbVar2) {
      FUN_00053580(param_1);
      return;
    }
    pbVar1 = pbVar2 + 8;
  } while (*pbVar2 != param_1);
  uStack_18 = (uint)*(ushort *)(param_2 + 0x10);
  if (uStack_18 < pbVar2[1]) {
    local_1c = "Too small (%u bytes) event 0x%02x";
    local_20 = 4;
    local_14 = param_1;
    FUN_00080ea2(&DAT_00088138,0x2040,&local_20);
  }
  else {
    (**(code **)(pbVar2 + 4))(param_2);
  }
  return;
}


