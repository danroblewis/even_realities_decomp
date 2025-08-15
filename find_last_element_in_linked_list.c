/*
 * Function: find_last_element_in_linked_list
 * Entry:    0005f304
 * Prototype: undefined find_last_element_in_linked_list()
 */


int find_last_element_in_linked_list
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x236,
                 param_4);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/net/buf.c",0x236);
  }
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 4);
  } while (param_1 != 0);
  return iVar1;
}


