/*
 * Function: process_data_with_initialization_and_store
 * Entry:    00053cd4
 * Prototype: undefined process_data_with_initialization_and_store()
 */


int process_data_with_initialization_and_store(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar1 = FUN_000836de(&DAT_20003b4c,param_2,0xffffffff,0xffffffff);
  if (iVar1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/hci_core.c",0x10a);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/hci_core.c",0x10a);
  }
  FUN_0005f4d4(iVar1 + 0xc,1);
  *(undefined1 *)(iVar1 + 0x18) = 0;
  iVar2 = FUN_0005ee18(iVar1);
  *(undefined2 *)(&DAT_2000abf6 + iVar2 * 0xc) = param_1;
  iVar2 = FUN_0005ee18(iVar1);
  *(undefined4 *)(&DAT_2000abfc + iVar2 * 0xc) = 0;
  iVar2 = FUN_0005ee18(iVar1);
  *(undefined4 *)(&DAT_2000abf8 + iVar2 * 0xc) = 0;
  puVar3 = (undefined2 *)FUN_0005f5d0(iVar1 + 0xc,3);
  *puVar3 = param_1;
  *(char *)(puVar3 + 1) = (char)param_2;
  return iVar1;
}


