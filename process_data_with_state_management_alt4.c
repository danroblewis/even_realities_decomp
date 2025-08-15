/*
 * Function: process_data_with_state_management_alt4
 * Entry:    00051c38
 * Prototype: undefined process_data_with_state_management_alt4()
 */


void process_data_with_state_management_alt4(void)

{
  undefined4 in_r3;
  
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","slot >= 0 && slot < (2 << 1)",
               "WEST_TOPDIR/zephyr/subsys/mgmt/mcumgr/grp/img_mgmt/include/mgmt/mcumgr/grp/img_mgmt/img_mgmt_priv.h"
               ,0x71,in_r3);
  DEBUG_PRINT2("\tImpossible slot number\n");
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call
            ("WEST_TOPDIR/zephyr/subsys/mgmt/mcumgr/grp/img_mgmt/include/mgmt/mcumgr/grp/img_mgmt/img_mgmt_priv.h"
             ,0x71);
}


