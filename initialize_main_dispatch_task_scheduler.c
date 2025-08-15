/*
 * Function: initialize_main_dispatch_task_scheduler
 * Entry:    00023a54
 * Prototype: undefined initialize_main_dispatch_task_scheduler()
 */


void initialize_main_dispatch_task_scheduler(undefined4 param_1)

{
  setup_bluetooth_stack(&DAT_200079e4,0,0x14);
  FUN_00071eac(&DAT_20003e38,&DAT_20021968,0x800,0x23481,param_1,0,0,0xfffffff4,0);
  FUN_00071eac(&DAT_20003f10,&DAT_20022168,0x1400,0x23845,param_1,0,0,0xfffffff5,0);
  return;
}


