/*
 * Function: check_device_status_flag
 * Entry:    000659b8
 * Prototype: undefined check_device_status_flag()
 */


char check_device_status_flag(void)

{
  char cVar1;
  
  cVar1 = HARDWARE_STATE_AND_MEMORY_BUFFER;
  if (HARDWARE_STATE_AND_MEMORY_BUFFER != '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}


