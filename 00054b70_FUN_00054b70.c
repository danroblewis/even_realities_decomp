/*
 * Function: FUN_00054b70
 * Entry:    00054b70
 * Prototype: undefined FUN_00054b70()
 */


int FUN_00054b70(void)

{
  int iVar1;
  undefined4 local_40;
  char *local_3c;
  int iStack_38;
  undefined4 local_20;
  char *local_1c;
  
  if (DAT_20002168 == 0) {
    iVar1 = -0x13;
    local_1c = "No HCI driver registered";
    local_20 = 2;
    FUN_00080ea2(&DAT_00088138,0x1040,&local_20);
  }
  else if (*(int *)(DAT_20002168 + 0x10) == 0) {
    iVar1 = -0x86;
  }
  else {
    iVar1 = FUN_00080e6a(&DAT_200020d4,2);
    if (iVar1 << 0x1e < 0) {
      iVar1 = -0x78;
    }
    else {
      FUN_00080ea8(&DAT_200020d4,0xfffffffb);
      iVar1 = (**(code **)(DAT_20002168 + 0x10))();
      if (iVar1 == 0) {
        fill_memory_buffer(&DAT_20002080,0,0x40);
        FUN_00080e94(&DAT_20002068,&DAT_000f2b3a);
        FUN_0005571c();
        FUN_00055e1c();
        FUN_00056990();
        DAT_2000ff06 = 0;
        FUN_00050b8c(&DAT_20005e30);
        FUN_00050b8c(&DAT_20005f08);
        FUN_00080ea8(&DAT_200020d4,0xfffffffe);
      }
      else {
        local_3c = "HCI driver close failed (%d)";
        local_40 = 3;
        iStack_38 = iVar1;
        FUN_00080ea2(&DAT_00088138,0x1840,&local_40);
        FUN_00080e6a(&DAT_200020d4,4);
      }
    }
  }
  return iVar1;
}


