/*
 * Function: parse_config_data
 * Entry:    00080cf2
 * Prototype: undefined __stdcall parse_config_data(undefined4 config_data, undefined4 output_buffer)
 */


undefined4 parse_config_data(int config_data,undefined1 *output_buffer)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar1 = parse_string_until_delimiter(config_data,0);
  if (iVar1 == 0xd) {
    if (*(char *)(config_data + 0xc) == '0') {
      uVar3 = 0;
    }
    else {
      if (*(char *)(config_data + 0xc) != '1') goto LAB_00080d34;
      uVar3 = 1;
    }
    puVar5 = output_buffer + 6;
    *output_buffer = uVar3;
    iVar1 = config_data;
    do {
      iVar4 = iVar1 + 2;
      FUN_0007dd0a(iVar1,2,puVar5,1);
      puVar5 = puVar5 + -1;
      iVar1 = iVar4;
    } while (iVar4 != config_data + 0xc);
    uVar2 = 0;
  }
  else {
LAB_00080d34:
    uVar2 = 0xffffffea;
  }
  return uVar2;
}


