/*
 * Function: process_data_with_callback_validation_alt6
 * Entry:    00052cdc
 * Prototype: undefined process_data_with_callback_validation_alt6()
 */


undefined * process_data_with_callback_validation_alt6(undefined1 *param_1)

{
  char *pcVar1;
  undefined1 auStack_1c [16];
  
  switch(*param_1) {
  case 0:
    pcVar1 = "public";
    break;
  case 1:
    pcVar1 = "random";
    break;
  case 2:
    pcVar1 = "public-id";
    break;
  case 3:
    pcVar1 = "random-id";
    break;
  default:
    format_string_with_variable_arguments(auStack_1c,10,"0x%02x");
    goto LAB_00052cfa;
  }
  strcpy_safe(auStack_1c,pcVar1);
LAB_00052cfa:
  format_string_with_variable_arguments
            (&DAT_2001d452,0x1e,"%02X:%02X:%02X:%02X:%02X:%02X (%s)",param_1[6],param_1[5],
             param_1[4],param_1[3],param_1[2],param_1[1],auStack_1c);
  return &DAT_2001d452;
}


