/*
 * Function: FUN_00081820
 * Entry:    00081820
 * Prototype: undefined FUN_00081820(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4 FUN_00081820(int param_1,short param_2,int param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  char *local_44;
  uint uStack_40;
  undefined4 local_3c;
  undefined4 local_28;
  char *local_24;
  
  psVar4 = (short *)FUN_0005f518(param_3 + 0xc,4);
  sVar1 = *(short *)(param_3 + 0x10);
  psVar4[1] = param_2;
  *psVar4 = sVar1 + -4;
  uStack_40 = (uint)*(byte *)(param_3 + 0xb);
  if (uStack_40 < 8) {
    local_44 = "not enough room in user_data %d < %d";
    local_3c = 8;
    local_48 = 4;
    FUN_000813ca(&DAT_00088108,0x2040,&local_48);
    return 0xffffffea;
  }
  if (*(char *)(param_1 + 0xd) == '\a') {
    if (param_4 == 0) {
      iVar3 = 0;
    }
    else {
      uVar6 = FUN_000748ac();
      if ((undefined *)uVar6 == &DAT_200068d0) {
        uVar2 = 0;
        uVar5 = 0;
      }
      else {
        uVar2 = 0xffffffff;
        uVar5 = 0xffffffff;
      }
      iVar3 = FUN_000727ac(&DAT_20003a60,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar5);
      if (iVar3 == 0) {
        return 0xffffff97;
      }
      if (*(char *)(param_1 + 0xd) != '\a') {
        local_24 = "Disconnected while allocating context";
        local_28 = 2;
        FUN_000813ca(&DAT_00088108,0x1080,&local_28);
        *(undefined4 *)(iVar3 + 4) = 0;
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        initialize_debug_system(&DAT_20003a60,iVar3);
        goto LAB_0005652c;
      }
      *(int *)(iVar3 + 4) = param_4;
      *(undefined4 *)(iVar3 + 8) = param_5;
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    *(int *)(param_3 + 0x18) = iVar3;
    uVar2 = 0;
    *(undefined1 *)(param_3 + 0x1c) = 0;
    FUN_0005f200(param_1 + 0x38,param_3);
  }
  else {
    local_24 = "not connected!";
    local_28 = 2;
    FUN_000813ca(&DAT_00088108,0x1040,&local_28);
LAB_0005652c:
    uVar2 = 0xffffff80;
  }
  return uVar2;
}


