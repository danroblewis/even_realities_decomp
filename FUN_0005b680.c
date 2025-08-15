/*
 * Function: FUN_0005b680
 * Entry:    0005b680
 * Prototype: undefined FUN_0005b680()
 */


undefined4 FUN_0005b680(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_28;
  char *local_24;
  
  iVar2 = FUN_00082cba(param_1,*(undefined4 *)(param_3 + 4),0x94);
  if (iVar2 == 0) {
    iVar2 = FUN_0005b0dc(param_1,*(undefined4 *)(param_3 + 4),1);
    if (iVar2 == 0) {
      local_24 = "Device is not subscribed to characteristic";
      local_28 = 2;
      FUN_00082a42(&DAT_00088128,0x1080,&local_28);
      uVar3 = 0xffffffea;
    }
    else {
      iVar2 = process_ble_characteristic_value_change_with_callback_execution
                        (param_1,0x1b,*(ushort *)(param_3 + 0xc) + 2);
      if (iVar2 != 0) {
        puVar4 = (undefined2 *)FUN_0005f5d0(iVar2 + 0xc,2);
        *puVar4 = param_2;
        FUN_0005f5d0(iVar2 + 0xc,*(undefined2 *)(param_3 + 0xc));
        memcpy(puVar4 + 1,*(undefined4 *)(param_3 + 8),*(undefined2 *)(param_3 + 0xc));
        FUN_000825ac(iVar2,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),1);
        if (param_1 == 0) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conn",
                       "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0xf22);
          uVar3 = 0xf22;
        }
        else {
          if (iVar2 != 0) {
            iVar1 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution_and_parameter
                              ();
            if (iVar1 == 0) {
              bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
                        (*(undefined4 *)(iVar2 + 0x18));
              FUN_0005f24c(iVar2);
              uVar3 = 0xffffff80;
            }
            else {
              FUN_0005f200(iVar1 + 0xc,iVar2);
              piVar5 = *(int **)(iVar1 + 0x30);
              if (piVar5 != (int *)0x0) {
                piVar6 = (int *)*piVar5;
                piVar5 = piVar5 + -100;
                if (piVar6 != (int *)0x0) {
                  piVar6 = piVar6 + -100;
                }
                while (iVar2 = FUN_00082114(piVar5,iVar1 + 0xc), piVar5 = piVar6, iVar2 != 0) {
                  while( true ) {
                    if (piVar5 == (int *)0x0) goto LAB_00059a5a;
                    piVar6 = (int *)piVar5[100];
                    if (piVar6 != (int *)0x0) {
                      piVar6 = piVar6 + -100;
                    }
                    if (iVar2 != -2) break;
                    iVar2 = -2;
                    piVar5 = piVar6;
                  }
                }
              }
LAB_00059a5a:
              uVar3 = 0;
            }
            return uVar3;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf",
                       "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0xf23);
          uVar3 = 0xf23;
        }
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",uVar3);
      }
      local_24 = "No buffer available to send notification";
      local_28 = 2;
      FUN_00082a42(&DAT_00088128,0x1080,&local_28);
      uVar3 = 0xfffffff4;
    }
  }
  else {
    local_24 = "Link is not encrypted";
    local_28 = 2;
    FUN_00082a42(&DAT_00088128,0x1080,&local_28);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


