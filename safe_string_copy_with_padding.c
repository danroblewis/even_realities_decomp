/*
 * Function: safe_string_copy_with_padding
 * Entry:    0008705a
 * Prototype: undefined __stdcall safe_string_copy_with_padding(undefined4 dest_buffer, undefined4 src_data, undefined4 max_length)
 */


void safe_string_copy_with_padding(char *dest_buffer,int src_data,int max_length)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)(src_data + -1);
  do {
    pcVar3 = dest_buffer;
    if (max_length == 0) break;
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
    max_length = max_length + -1;
    pcVar3 = dest_buffer + 1;
    *dest_buffer = cVar1;
    dest_buffer = pcVar3;
  } while (cVar1 != '\0');
  pcVar2 = pcVar3 + max_length;
  for (; pcVar3 != pcVar2; pcVar3 = pcVar3 + 1) {
    *pcVar3 = '\0';
  }
  return;
}


