/*
 * Function: handle_command_data_processing
 * Entry:    00021334
 * Prototype: undefined handle_command_data_processing()
 */


undefined4 handle_command_data_processing(int param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 local_28;
  undefined1 local_24 [20];
  
  local_28 = 0;
  fill_memory_buffer(local_24,0,0x11);
  uVar1 = CURRENT_PACKET_INDEX;
  uVar2 = PACKET_COUNT;
  bVar4 = *(byte *)((int)param_2 + 1);
  if (0x12 < bVar4) {
    if (bVar4 == 0xf1) {
      local_28._0_2_ = 0xc90f;
LAB_000213b0:
      uVar3 = *(undefined1 *)(param_1 + -0x6b0);
    }
    else {
      if (bVar4 == 0xf2) {
        local_28._0_2_ = 0xc94e;
        goto LAB_000213b0;
      }
      if (bVar4 != 0xf0) goto switchD_0002135c_caseD_b;
      local_28._0_2_ = 0xc90d;
      uVar3 = *(undefined1 *)(param_1 + -0x6af);
    }
    local_28._0_3_ = CONCAT12(uVar3,(undefined2)local_28);
    CURRENT_PACKET_INDEX = 0;
    local_28 = CONCAT13(uVar1,(undefined3)local_28);
    PACKET_COUNT = 0;
    local_24[0] = uVar2;
    goto LAB_0002139e;
  }
  switch(bVar4) {
  case 9:
    bVar4 = *(byte *)(param_2 + 1);
    local_28 = CONCAT22(local_28._2_2_,*param_2);
    break;
  case 10:
    local_28 = CONCAT22(local_28._2_2_,0xaf5);
    bVar4 = *(byte *)(param_1 + 0x844);
    if (bVar4 == 0x5d) {
      if (*(char *)(param_1 + 0x846) == '\0') {
        bVar4 = 0x5e;
      }
      else {
        bVar4 = 0x5f;
      }
    }
    else if (bVar4 == 0x5e) {
      if (*(char *)(param_1 + 0x846) == '\0') {
        bVar4 = 0x60;
      }
      else {
        bVar4 = 0x61;
      }
    }
    else if (bVar4 == 0x5f) {
      bVar4 = 0x62;
    }
    else if (bVar4 == 0x60) {
      bVar4 = 99;
    }
    else if (0x60 < bVar4) {
      bVar4 = 100;
    }
    break;
  default:
switchD_0002135c_caseD_b:
    local_28 = CONCAT31(CONCAT21(local_28._2_2_,bVar4),0xf5);
    goto LAB_0002139e;
  case 0xe:
    local_28 = CONCAT22(local_28._2_2_,0xef5);
    uVar2 = get_glassbox_charge_status();
    goto LAB_000213de;
  case 0xf:
    local_28 = CONCAT22(local_28._2_2_,0xff5);
    uVar2 = get_glassbox_charge_percent();
LAB_000213de:
    local_28._0_3_ = CONCAT12(uVar2,(undefined2)local_28);
    goto LAB_0002139e;
  case 0x12:
    local_28 = CONCAT22(local_28._2_2_,0x12f5);
    bVar4 = *(byte *)(param_1 + 0x759);
  }
  local_28._0_3_ = CONCAT12(bVar4,(undefined2)local_28);
LAB_0002139e:
  (**(code **)(param_1 + 0xc))(&local_28,0x15);
  return 0;
}


