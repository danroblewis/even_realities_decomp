/*
 * Function: find_character_in_string
 * Entry:    00086bc8
 * Prototype: undefined find_character_in_string()
 */


char * find_character_in_string(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  do {
    pcVar2 = pcVar1;
    if (pcVar2 == param_1 + param_3) {
      return (char *)0x0;
    }
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != param_2);
  return pcVar2;
}


