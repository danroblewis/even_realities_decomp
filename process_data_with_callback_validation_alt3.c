/*
 * Function: process_data_with_callback_validation_alt3
 * Entry:    00051c98
 * Prototype: undefined process_data_with_callback_validation_alt3()
 */


undefined4
process_data_with_callback_validation_alt3
          (int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_24;
  
  iVar6 = *(int *)(param_1 + 8) + 4;
  uStack_24 = param_2;
  uVar2 = call_with_parameters(iVar6,"images",6,param_4,param_1);
  if (uVar2 != 0) {
    uVar2 = FUN_00086344(iVar6,4);
  }
  iVar7 = 0;
  uVar2 = uVar2 & 1;
  no_operation();
  do {
    if (uVar2 == 0) {
LAB_00051cde:
      no_operation_alt();
      return 7;
    }
    if (iVar7 == 2) {
      iVar7 = FUN_00086354(iVar6,4);
      if (((iVar7 != 0) && (iVar7 = call_with_parameters(iVar6,"splitStatus",0xb), iVar7 != 0)) &&
         (iVar6 = FUN_0008630c(iVar6,0), iVar6 != 0)) {
        no_operation_alt();
        return 0;
      }
      goto LAB_00051cde;
    }
    uStack_24 = uStack_24 & 0xffffff;
    uVar3 = process_state_machine(iVar7,(int)&uStack_24 + 3);
    uVar4 = shift_left_by_one(iVar7);
    uVar2 = uVar4;
    if (3 < uVar4) {
      uVar2 = process_data_with_state_management_alt4();
    }
    uVar1 = uStack_24 >> 0x18;
    uVar10 = uVar2 ^ 1;
    if (uVar1 == 2) {
      iVar8 = 1;
      iVar5 = iVar8;
      if (uVar3 != uVar2) goto LAB_00051d30;
LAB_00051d1e:
      iVar9 = 0;
      iVar8 = iVar5;
    }
    else {
      iVar8 = 5;
      iVar5 = 5;
      if ((uVar3 == uVar2) || (iVar5 = iVar8, 2 < uVar1)) goto LAB_00051d1e;
LAB_00051d30:
      iVar9 = (int)(char)(&DAT_000f27cc)[uVar1];
    }
    if ((int)uVar4 < (int)uVar10) {
      iVar5 = process_data_with_callback_execution_alt3(iVar6,uVar4,iVar8);
    }
    else {
      iVar5 = process_data_with_callback_execution_alt3(iVar6,uVar10,iVar9);
      uVar10 = uVar4;
      iVar9 = iVar8;
    }
    if (iVar5 == 0) goto LAB_00051cde;
    uVar2 = process_data_with_callback_execution_alt3(iVar6,uVar10,iVar9);
    iVar7 = iVar7 + 1;
  } while( true );
}


