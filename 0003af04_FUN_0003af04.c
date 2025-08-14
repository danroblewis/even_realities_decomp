/*
 * Function: FUN_0003af04
 * Entry:    0003af04
 * Prototype: undefined FUN_0003af04()
 */


void FUN_0003af04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  uStack_c = param_4;
  pcVar3 = (char *)get_work_mode();
  if (*pcVar3 == '\x02') {
    return;
  }
  local_18 = 0x822;
  local_10 = 0;
  uStack_c = 0;
  local_14 = 2;
  iVar4 = get_work_mode();
  uVar1 = local_14;
  local_14._3_1_ = SUB41(uVar1,3);
  local_14._0_3_ =
       CONCAT12(DAT_2000496a,
                CONCAT11(*(undefined1 *)(*(int *)(iVar4 + 0xfec) + 100),(undefined1)local_14));
  if (DAT_2000496a == '\0') {
    cVar2 = get_work_mode_status();
  }
  else if (DAT_2000496a == '\x01') {
    cVar2 = FUN_000370bc();
  }
  else {
    if (DAT_2000496a != '\x02') goto LAB_0003af4c;
    cVar2 = FUN_0003719c();
  }
  local_14 = CONCAT13(cVar2 + '\x01',(undefined3)local_14);
LAB_0003af4c:
  send_response_data_to_msgqueue(&local_18,8);
  FUN_00047ba8();
  return;
}


