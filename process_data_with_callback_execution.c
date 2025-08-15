/*
 * Function: process_data_with_callback_execution
 * Entry:    0004ddf8
 * Prototype: undefined process_data_with_callback_execution()
 */


void process_data_with_callback_execution(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  
  uVar1 = *param_2;
  iVar4 = *(int *)(param_2 + 2);
  uVar6 = *(undefined4 *)(param_2 + 4);
  if (iVar4 != 0) {
    if ((iVar4 + -0x88070) * 0x2000 >> 0x10 < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = get_system_parameter_by_offset(((uint)(byte)*param_2 << 0x1a) >> 0x1d);
    }
  }
  puVar2 = param_2 + 8;
  uVar3 = (uint)(*(int *)param_2 << 0xc) >> 0x15;
  pbVar5 = (byte *)((int)puVar2 + uVar3);
  if (uVar3 == 0) {
    puVar2 = (ushort *)0x0;
  }
  process_task_completion_with_state_management
            (param_1,uVar6,0,iVar4,0,((uint)uVar1 << 0x17) >> 0x1d,puVar2,pbVar5,
             ((uint)param_2[1] << 0x10) >> 0x14,param_3);
  return;
}


