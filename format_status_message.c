/*
 * Function: format_status_message
 * Entry:    00018334
 * Prototype: undefined format_status_message()
 */


void format_status_message(undefined1 *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined1 auStack_1c [12];
  
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
    FUN_0007ddbe(auStack_1c,10,"0x%02x");
    goto LAB_00018354;
  }
  strcpy_safe(auStack_1c,pcVar1);
LAB_00018354:
  FUN_0007ddbe(param_2,0x1e,"%02X:%02X:%02X:%02X:%02X:%02X (%s)",param_1[6],param_1[5],param_1[4],
               param_1[3],param_1[2],param_1[1],auStack_1c);
  return;
}


