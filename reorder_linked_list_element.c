/*
 * Function: reorder_linked_list_element
 * Entry:    000613c4
 * Prototype: undefined reorder_linked_list_element()
 */


undefined4 reorder_linked_list_element(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (param_2 == (undefined4 *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","callback",
                 "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio/gpio_utils.h",0x3a);
    DEBUG_PRINT2("\tNo callback!\n");
    uVar3 = 0x3a;
  }
  else {
    if (param_2[1] != 0) {
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if (puVar1 == (undefined4 *)0x0) {
LAB_00061442:
        if (param_3 == 0) {
          return 0xffffffea;
        }
      }
      else {
        if (puVar1 == param_2) {
          uVar3 = *param_2;
          *(undefined4 *)(iVar4 + 4) = uVar3;
          if (param_2 == *(undefined4 **)(iVar4 + 8)) {
            *(undefined4 *)(iVar4 + 8) = uVar3;
          }
        }
        else {
          do {
            puVar2 = puVar1;
            puVar1 = (undefined4 *)*puVar2;
            if (puVar1 == (undefined4 *)0x0) goto LAB_00061442;
          } while (param_2 != puVar1);
          *puVar2 = *param_2;
          if (param_2 == *(undefined4 **)(iVar4 + 8)) {
            *(undefined4 **)(iVar4 + 8) = puVar2;
          }
        }
        *param_2 = 0;
        if (param_3 == 0) {
          return 0;
        }
      }
      *param_2 = *(undefined4 *)(iVar4 + 4);
      *(undefined4 **)(iVar4 + 4) = param_2;
      if (*(int *)(iVar4 + 8) == 0) {
        *(undefined4 **)(iVar4 + 8) = param_2;
      }
      return 0;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","callback->handler",
                 "WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio/gpio_utils.h",0x3b);
    DEBUG_PRINT2("\tNo callback handler!\n");
    uVar3 = 0x3b;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/drivers/gpio/gpio_utils.h",uVar3);
}


