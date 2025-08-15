/*
 * Function: process_data_with_validation_and_callback_alt2
 * Entry:    000516ac
 * Prototype: undefined process_data_with_validation_and_callback_alt2()
 */


int process_data_with_validation_and_callback_alt2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_78;
  char *local_74;
  uint uStack_70;
  int local_6c;
  int local_64;
  int aiStack_60 [17];
  
  uVar1 = process_data_with_state_management_alt3();
  if ((int)uVar1 < 0) {
    iVar5 = 0xe;
  }
  else {
    local_6c = setup_device_buffer_with_validation(uVar1 & 0xff,&local_64);
    iVar5 = local_64;
    if (local_6c < 0) {
      local_74 = "Failed to open flash area ID %u: %d";
      local_78 = 4;
      uStack_70 = uVar1;
      call_system_cleanup(&DAT_00088208,0x2040,&local_78);
      iVar5 = 10;
    }
    else {
      uVar1 = *(uint *)(local_64 + 8) & 3;
      if (uVar1 != 0) {
        process_data_loop_with_validation_and_retry
                  ("WEST_TOPDIR/zephyr/subsys/mgmt/mcumgr/grp/img_mgmt/src/zephyr_img_mgmt.c",0x43,
                   "img_mgmt_flash_check_empty_inner","fa->fa_size % 4 == 0");
      }
      iVar2 = FUN_0007f012(iVar5);
      iVar7 = *(int *)(iVar5 + 8);
      for (; (int)uVar1 < iVar7; uVar1 = uVar1 + 0x40) {
        iVar6 = iVar7 - uVar1;
        if (0x3f < iVar6) {
          iVar6 = 0x40;
        }
        iVar3 = FUN_0007ef80(iVar5,uVar1,aiStack_60,iVar6);
        if (iVar3 < 0) {
          local_74 = "Failed to read data from flash area: %d";
          local_78 = 3;
          uStack_70 = iVar3;
          call_system_cleanup(&DAT_00088208,0x1840,&local_78);
          iVar5 = 0xb;
          goto LAB_00051770;
        }
        piVar4 = aiStack_60;
        for (iVar3 = 0; iVar3 != iVar6 >> 2; iVar3 = iVar3 + 1) {
          if (*piVar4 != iVar2 * 0x1010101) {
            iVar5 = FUN_0007efd4(local_64,0,*(undefined4 *)(local_64 + 8));
            if (iVar5 != 0) {
              local_74 = "Failed to erase flash area: %d";
              local_78 = 3;
              uStack_70 = iVar5;
              call_system_cleanup(&DAT_00088208,0x1840,&local_78);
              iVar5 = 0xd;
            }
            goto LAB_00051770;
          }
          piVar4 = piVar4 + 1;
        }
      }
      iVar5 = 1;
LAB_00051770:
      FUN_0007ef7e(local_64);
    }
  }
  return iVar5;
}


