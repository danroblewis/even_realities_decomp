/*
 * Function: printf_format_string_with_buffer
 * Entry:    000777f0
 * Prototype: undefined __stdcall printf_format_string_with_buffer(undefined4 format_string, undefined4 arg1, undefined4 arg2, undefined4 arg3)
 */


void printf_format_string_with_buffer
               (undefined4 format_string,undefined4 arg1,undefined4 arg2,undefined4 arg3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_20002d20;
  uVar2 = format_string;
  uStack_c = arg1;
  uStack_8 = arg2;
  uStack_4 = arg3;
  if ((DAT_20002d20 != 0) && (*(int *)(DAT_20002d20 + 0x18) == 0)) {
    initialize_buffer_structure(DAT_20002d20);
  }
  printf_format_string(iVar1,*(undefined4 *)(iVar1 + 8),format_string,&uStack_c,uVar2,&uStack_c);
  return;
}


