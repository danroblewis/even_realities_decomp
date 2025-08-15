/*
 * Function: process_data_with_validation_and_parameter_alt4
 * Entry:    00051f88
 * Prototype: undefined process_data_with_validation_and_parameter_alt4()
 */


int process_data_with_validation_and_parameter_alt4(undefined1 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 2);
  uVar3 = (uint)(byte)param_1[1];
  iVar1 = FUN_00077914(param_2,0x19,"%hu.%hu.%hu",*param_1,uVar3,uVar2);
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    iVar4 = FUN_00077914(param_2 + iVar1,0x19 - iVar1,".%u",iVar4,uVar3,uVar2);
  }
  return iVar1 + iVar4;
}


