/*
 * Function: write_literal_text_to_buffer
 * Entry:    00086cb6
 * Prototype: undefined __stdcall write_literal_text_to_buffer(undefined4 buffer_ctx, undefined4 format_ctx, undefined4 text_start, undefined4 text_length)
 */


int write_literal_text_to_buffer
              (undefined4 buffer_ctx,undefined4 format_ctx,undefined1 *text_start,int text_length)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = text_start + text_length;
  iVar3 = text_length;
  do {
    if (text_start == puVar2) {
      return 0;
    }
    iVar1 = write_byte_to_buffer(buffer_ctx,*text_start,format_ctx,text_length,iVar3);
    text_length = iVar1 + 1;
    text_start = text_start + 1;
  } while (text_length != 0);
  return iVar1;
}


