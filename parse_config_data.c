/*
 * Function: parse_config_data
 * Entry:    00080cf2
 * Prototype: undefined __stdcall parse_config_data(undefined4 config_data, undefined4 output_buffer)
 */


undefined4 parse_config_data(char *config_data,undefined1 *output_buffer)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char *source;
  char *pcVar4;
  char *destination;
  
  iVar1 = parse_string_until_delimiter(config_data,0);
  if (iVar1 == 0xd) {
    if (config_data[0xc] == '0') {
      uVar3 = 0;
    }
    else {
      if (config_data[0xc] != '1') goto LAB_00080d34;
      uVar3 = 1;
    }
    destination = output_buffer + 6;
    *output_buffer = uVar3;
    source = config_data;
    do {
      pcVar4 = source + 2;
      convert_hex_string_to_binary(source,2,destination,1);
      destination = destination + -1;
      source = pcVar4;
    } while (pcVar4 != config_data + 0xc);
    uVar2 = 0;
  }
  else {
LAB_00080d34:
    uVar2 = 0xffffffea;
  }
  return uVar2;
}


