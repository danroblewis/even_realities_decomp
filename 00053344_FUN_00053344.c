/*
 * Function: FUN_00053344
 * Entry:    00053344
 * Prototype: undefined FUN_00053344()
 */


char * FUN_00053344(uint param_1)

{
  char *pcVar1;
  char *local_48 [14];
  
  local_48[0] = "1.0b";
  local_48[1] = "1.1";
  local_48[2] = "1.2";
  local_48[3] = "2.0";
  local_48[4] = "2.1";
  local_48[5] = "3.0";
  local_48[6] = "4.0";
  local_48[7] = "4.1";
  local_48[8] = "4.2";
  local_48[9] = "5.0";
  local_48[10] = "5.1";
  local_48[0xb] = "5.2";
  local_48[0xc] = "5.3";
  local_48[0xd] = "5.4";
  if (param_1 < 0xe) {
    pcVar1 = local_48[param_1];
  }
  else {
    pcVar1 = "unknown";
  }
  return pcVar1;
}


