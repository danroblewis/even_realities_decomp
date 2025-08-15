/*
 * Function: process_buffer_validation_and_set_status
 * Entry:    00084db2
 * Prototype: undefined process_buffer_validation_and_set_status()
 */


undefined4
process_buffer_validation_and_set_status
          (undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  iVar1 = call_callback_function_with_bounds_validation(param_1,param_3,param_2,1,param_4);
  if (iVar1 < 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = validate_buffer_all_bytes_match(param_1,param_2,1);
    if (iVar1 == 0) {
      if (*param_2 == '\x01') {
        cVar3 = '\x01';
      }
      else {
        cVar3 = '\x02';
      }
    }
    else {
      cVar3 = '\x03';
    }
    uVar2 = 0;
    *param_2 = cVar3;
  }
  return uVar2;
}


