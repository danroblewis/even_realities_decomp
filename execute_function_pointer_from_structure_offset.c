/*
 * Function: execute_function_pointer_from_structure_offset
 * Entry:    0007e53e
 * Prototype: undefined execute_function_pointer_from_structure_offset()
 */


void execute_function_pointer_from_structure_offset(int *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0007e558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(param_1[10] + 8))
            (param_1[10],
             (param_2 >> 0x10) * (uint)*(ushort *)(param_1 + 3) + *param_1 + (param_2 & 0xffff));
  return;
}


