/*
 * Function: FUN_00052edc
 * Entry:    00052edc
 * Prototype: undefined FUN_00052edc()
 */


int FUN_00052edc(void)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  
  iVar1 = FUN_0004e744();
  if (iVar1 != 0) {
    local_1c = "settings_subsys_init failed (err %d)";
    local_20 = 3;
    iStack_18 = iVar1;
    FUN_0004d944(&DAT_00088178,0x1840,&local_20,0);
  }
  return iVar1;
}


