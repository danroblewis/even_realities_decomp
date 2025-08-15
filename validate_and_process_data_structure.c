/*
 * Function: validate_and_process_data_structure
 * Entry:    0007ea64
 * Prototype: int validate_and_process_data_structure(undefined4 param1, undefined4 param2, undefined4 param3, undefined4 param4, undefined4 param5, undefined4 param6)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int validate_and_process_data_structure(undefined4 param1, undefined4 param2,
   undefined4 param3, undefined4 param4, undefined4 param5, undefined4 param6) */

int validate_and_process_data_structure
              (int param1,int param2,int *param3,uint *param4,uint param5,uint param6)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  if (param2 == 0) {
    iVar1 = -2;
  }
  else if ((param3 == (int *)0x0) || (param4 == (uint *)0x0)) {
    iVar1 = -0x16;
  }
  else {
    uVar2 = param6 + (0xfffffffe < param5);
    if (uVar2 == 0 && (1 < param5 + 1) <= uVar2) {
      if ((*param4 == 0) || (uVar2 = *(uint *)(*(int *)(param1 + 0x10) + 0x3c0), *param4 <= uVar2))
      {
        puVar3 = param4;
        do {
          iVar1 = (param5 & param6) + 1;
          iVar1 = execute_stored_callback_with_return(param2,param4,iVar1 == 0,iVar1,puVar3);
          if (iVar1 != 0) {
            *param3 = iVar1;
            return 0;
          }
        } while (param6 == 0xffffffff && param5 == 0xffffffff);
        iVar1 = -0x69;
      }
      else {
        iVar1 = -0xc;
        *param4 = uVar2;
      }
    }
    else {
      iVar1 = -0x86;
    }
  }
  return iVar1;
}


