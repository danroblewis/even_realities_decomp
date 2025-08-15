/*
 * Function: handle_configuration_setting_with_parameters
 * Entry:    0004e780
 * Prototype: undefined handle_configuration_setting_with_parameters()
 */


int handle_configuration_setting_with_parameters(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined1 uStack_75;
  int local_74;
  short local_70;
  undefined1 auStack_6c [76];
  
  iVar6 = param_1 + 8;
  sVar5 = *(short *)(param_1 + 0x38) + 1;
  do {
    while( true ) {
      sVar3 = sVar5;
      sVar5 = sVar3 + -1;
      if (sVar5 == -0x8000) {
        return 0;
      }
      iVar1 = FUN_0007e9dc(iVar6,sVar5,auStack_6c,0x4a);
      sVar4 = sVar3 + 0x3fff;
      iVar2 = FUN_0007e9dc(iVar6,sVar4,&uStack_75,1);
      if (0 < iVar1) break;
      if (0 < iVar2) {
LAB_0004e7d8:
        if (*(short *)(param_1 + 0x38) == sVar5) {
          *(short *)(param_1 + 0x38) = sVar3 + -2;
          search_and_update_data_structure_with_mutex_protection
                    (iVar6,0x8000,(short *)(param_1 + 0x38),2);
        }
        FUN_0007e9d4(iVar6,sVar5);
        FUN_0007e9d4(iVar6,sVar4);
      }
    }
    if (iVar2 < 1) goto LAB_0004e7d8;
    auStack_6c[iVar1] = 0;
    local_74 = iVar6;
    local_70 = sVar4;
    iVar1 = handle_configuration_setting(auStack_6c,iVar2,0x7f211,&local_74,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
  } while( true );
}


