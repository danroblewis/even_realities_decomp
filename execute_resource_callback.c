/*
 * Function: execute_resource_callback
 * Entry:    00085406
 * Prototype: undefined execute_resource_callback()
 */


int execute_resource_callback(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  char *local_14;
  int iStack_10;
  
  if ((((param_1 == (char *)0x0) || (*param_1 == '\0')) || (param_2 == (char *)0x0)) ||
     ((*param_2 == '\0' || (param_3 == 0)))) {
    iVar1 = -0x16;
  }
  else {
    local_14 = param_2;
    iStack_10 = param_3;
    iVar1 = search_data_structure_by_identifier(param_1,&local_14,param_3,*param_2,param_1);
    if (iVar1 == 0) {
      if (*(code **)(local_14 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00085432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (**(code **)(local_14 + 8))(local_14,param_2,param_3);
        return iVar1;
      }
      iVar1 = -0x13;
    }
  }
  return iVar1;
}


