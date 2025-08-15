/*
 * Function: FUN_0005dce0
 * Entry:    0005dce0
 * Prototype: undefined FUN_0005dce0()
 */


undefined4 FUN_0005dce0(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_48;
  char *local_44;
  uint uStack_40;
  uint local_3c;
  undefined4 local_28;
  char *local_24;
  
  if (*(short *)(param_2 + 0x10) == 0) {
    local_24 = "Too small SMP PDU received";
    local_28 = 2;
    FUN_00083074(&DAT_00088180,0x1040,&local_28);
    return 0;
  }
  pbVar1 = (byte *)FUN_0005f594(param_2 + 0xc,1);
  iVar4 = param_1 + -0xf0;
  iVar2 = FUN_00082ff6(param_1 + -0xec,4);
  uVar3 = (uint)*pbVar1;
  if (iVar2 == 0) {
    if (uVar3 < 0xf) {
      if (*(int *)(&DAT_0008b508 + uVar3 * 8) == 0) {
        local_44 = "Unhandled SMP code 0x%02x";
        local_48 = 3;
        uStack_40 = uVar3;
        FUN_00083074(&DAT_00088180,0x1880,&local_48);
        iVar2 = 7;
      }
      else {
        iVar2 = FUN_000831be(iVar4);
        uVar3 = (uint)*pbVar1;
        if (iVar2 == 0) {
          local_44 = "Unexpected SMP code 0x%02x";
          local_48 = 3;
          uStack_40 = uVar3;
          FUN_00083074(&DAT_00088180,0x1880,&local_48);
          iVar2 = FUN_00082ff6(param_1 + -0xec,3);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = 8;
        }
        else if ((uint)(byte)(&DAT_0008b50c)[uVar3 * 8] == (uint)*(ushort *)(param_2 + 0x10)) {
          iVar2 = (**(code **)(&DAT_0008b508 + uVar3 * 8))(iVar4,param_2);
          if (iVar2 == 0) {
            return 0;
          }
        }
        else {
          local_44 = "Invalid len %u for code 0x%02x";
          local_48 = 4;
          uStack_40 = (uint)*(ushort *)(param_2 + 0x10);
          local_3c = uVar3;
          FUN_00083074(&DAT_00088180,0x2040,&local_48);
          iVar2 = 10;
        }
      }
      FUN_0005dc2c(iVar4,iVar2);
      return 0;
    }
    local_44 = "Received reserved SMP code 0x%02x";
  }
  else {
    local_44 = "SMP command (code 0x%02x) received after timeout";
  }
  local_48 = 3;
  uStack_40 = uVar3;
  FUN_00083074(&DAT_00088180,0x1880,&local_48);
  return 0;
}


