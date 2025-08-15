/*
 * Function: process_data_with_callback_and_parameter_alt2
 * Entry:    000518a8
 * Prototype: undefined process_data_with_callback_and_parameter_alt2()
 */


undefined4 process_data_with_callback_and_parameter_alt2(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_38;
  char *local_34;
  uint uStack_30;
  int local_2c;
  int local_24;
  undefined1 auStack_20 [8];
  
  fill_memory_buffer(param_2,0,0x18);
  uVar3 = DAT_2000ab84;
  if (param_1[1] == -1) {
    return 0x14;
  }
  if (param_1[1] == 0) {
    if ((uint)param_1[4] < 0x20) {
      return 0x16;
    }
    if (param_1[2] == 0xffffffff) {
      return 0x15;
    }
    *param_2 = param_1[2];
    param_2[1] = 0;
    piVar4 = (int *)param_1[3];
    if (*piVar4 != -0x690c47c3) {
      return 0x17;
    }
    uVar3 = param_1[6];
    if (0x20 < uVar3) {
      return 0x18;
    }
    if ((((uVar3 != 0) && (DAT_2000ab7c != 0xffffffff)) && (uVar3 == DAT_2000ab88)) &&
       (iVar1 = memcmp_byte_arrays(&DAT_2000ab89,param_1[5]), iVar1 == 0)) {
      return 0;
    }
    iVar1 = *param_1;
    if (iVar1 == -1) {
      iVar1 = 0;
    }
    uVar3 = shift_left_by_one(iVar1);
    if (3 < uVar3) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","slot >= 0 && slot < (2 << 1)",
                   "WEST_TOPDIR/zephyr/subsys/mgmt/mcumgr/grp/img_mgmt/include/mgmt/mcumgr/grp/img_mgmt/img_mgmt_priv.h"
                   ,0x71);
      DEBUG_PRINT2("\tImpossible slot number\n");
                    /* WARNING: Subroutine does not return */
      assertion_failure("WEST_TOPDIR/zephyr/subsys/mgmt/mcumgr/grp/img_mgmt/include/mgmt/mcumgr/grp/img_mgmt/img_mgmt_priv.h"
                        ,0x71);
    }
    iVar1 = validate_state_transition(uVar3 ^ 1);
    if (iVar1 == 0) {
      uVar3 = process_data_with_state_management_alt3(uVar3 ^ 1);
      param_2[3] = uVar3;
      if (-1 < (int)uVar3) {
        local_2c = setup_device_buffer_with_validation(uVar3 & 0xff,&local_24);
        if (local_2c != 0) {
          uStack_30 = param_2[3];
          local_34 = "Failed to open flash area ID %u: %d";
          local_38 = 4;
          call_system_cleanup(&DAT_00088208,0x2040,&local_38);
          return 10;
        }
        if (*(uint *)(local_24 + 8) < (uint)param_1[2]) {
          FUN_0007ef7e();
          uStack_30 = param_1[2];
          local_2c = *(undefined4 *)(local_24 + 8);
          local_34 = "Upload too large for slot: %u > %u";
          local_38 = 4;
          call_system_cleanup(&DAT_00088208,0x2040,&local_38);
          return 0x1e;
        }
        FUN_0007ef7e();
        if ((char)param_1[7] != '\0') {
          iVar1 = clear_key_slot(auStack_20);
          if (iVar1 != 0) {
            return 0x1a;
          }
          iVar1 = compare_versions(auStack_20,piVar4 + 5);
          if (-1 < iVar1) {
            return 0x1b;
          }
        }
        goto LAB_00051a24;
      }
    }
    else {
      param_2[3] = 0xffffffff;
    }
    uVar2 = 9;
  }
  else {
    param_2[3] = DAT_2000ab7c;
    *param_2 = uVar3;
    param_2[1] = 0;
    if (param_1[1] == DAT_2000ab80) {
      if (uVar3 < (uint)(param_1[1] + param_1[4])) {
        return 0x1f;
      }
LAB_00051a24:
      param_2[2] = param_1[4];
      *(undefined1 *)(param_2 + 4) = 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}


