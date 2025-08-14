/*
 * Function: FUN_00054a44
 * Entry:    00054a44
 * Prototype: undefined FUN_00054a44()
 */


int FUN_00054a44(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_40;
  char *local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 local_20;
  char *local_1c;
  
  if (DAT_20002168 == 0) {
    iVar2 = -0x13;
    local_1c = "No HCI driver registered";
    local_20 = 2;
    FUN_00080ea2(&DAT_00088138,0x1040,&local_20);
  }
  else {
    uVar1 = FUN_00080ea8(&DAT_200020d4,0xfffffffd);
    iVar2 = FUN_00080e6a(uVar1,1);
    if (iVar2 << 0x1f < 0) {
      iVar2 = -0x78;
    }
    else {
      iVar2 = FUN_00052edc();
      if (iVar2 == 0) {
        DAT_2000ac6c = param_1;
        FUN_00086534(&DAT_20002128,1);
        FUN_000864e8(&DAT_2000214c);
        local_38 = 0;
        uStack_34 = 0;
        local_40 = iVar2;
        FUN_00071eac(&DAT_20005e30,&DAT_2002bb80,0x400,0x545f1,0,0,0,0xfffffff7);
        FUN_00086412(&DAT_20005e30,"BT TX");
        FUN_000730b4(&DAT_20005f08);
        FUN_000730e8(&DAT_20005f08,&DAT_2002bf80,0x898,0xfffffff8,0);
        FUN_00086412(&DAT_20005f08,"BT RX");
        iVar2 = (**(code **)(DAT_20002168 + 0xc))();
        if (iVar2 == 0) {
          if (param_1 == 0) {
            iVar2 = FUN_00012080();
          }
          else {
            FUN_00072fdc(&DAT_200020c4);
          }
        }
        else {
          local_3c = "HCI driver open failed (%d)";
          local_40 = 3;
          local_38 = iVar2;
          FUN_00080ea2(&DAT_00088138,0x1840,&local_40);
        }
      }
    }
  }
  return iVar2;
}


