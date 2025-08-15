/*
 * Function: initialize_data_structures
 * Entry:    000864d0
 * Prototype: undefined initialize_data_structures()
 */


uint * initialize_data_structures(uint *param_1,int param_2)

{
  if (param_1 != (uint *)0x0) {
    if (((*param_1 & 3) != 0) && (param_1 = (uint *)param_1[1], param_2 != 0)) {
      initialize_microphone();
    }
  }
  return param_1;
}


