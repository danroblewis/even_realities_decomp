/*
 * Function: process_string_with_callback
 * Entry:    0007e2be
 * Prototype: int process_string_with_callback(void * callback, void * callback_data, char * string, int max_length)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int process_string_with_callback(void *callback, void *callback_data, char
   *string, int max_length) */

int process_string_with_callback(void *callback,void *callback_data,char *string,int max_length)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = string;
  while ((pcVar2 < (uint)max_length || ((max_length == 0 && (*pcVar2 != '\0'))))) {
    iVar1 = (*(code *)callback)(*pcVar2,callback_data);
    pcVar2 = pcVar2 + 1;
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return (int)pcVar2 - (int)string;
}


