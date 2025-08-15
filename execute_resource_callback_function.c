/*
 * Function: execute_resource_callback_function
 * Entry:    0007dcb8
 * Prototype: undefined execute_resource_callback_function()
 */


void execute_resource_callback_function
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  (**(code **)(param_1 + 0xc))
            (param_2,param_3,&uStack_4,*(code **)(param_1 + 0xc),param_1,&uStack_4,param_3);
  return;
}


