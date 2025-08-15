/*
 * Function: append_linked_list_to_another
 * Entry:    0005f390
 * Prototype: undefined append_linked_list_to_another()
 */


int append_linked_list_to_another(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","frag","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x24d)
    ;
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/net/buf.c",0x24d);
  }
  if (param_1 == 0) {
    iVar1 = increment_counter_in_structure(param_2,param_2,param_3,param_4);
    return iVar1;
  }
  uVar2 = find_last_element_in_linked_list();
  merge_linked_lists(uVar2,param_2);
  return param_1;
}


