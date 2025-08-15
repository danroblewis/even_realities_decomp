/*
 * Function: convert_utf8_to_unicode_with_validation
 * Entry:    00047844
 * Prototype: undefined convert_utf8_to_unicode_with_validation()
 */


int convert_utf8_to_unicode_with_validation(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
LAB_00047858:
  do {
    if (param_2 <= iVar2) {
LAB_00047886:
      *(undefined2 *)(param_3 + iVar3 * 2) = 0;
      return iVar3;
    }
    uVar1 = (uint)*(byte *)(param_1 + iVar2);
    if (uVar1 == 0) goto LAB_00047886;
    if (((uVar1 == 0xd) || (uVar1 == 10)) || (uVar1 - 0x20 < 0x60)) {
      iVar2 = iVar2 + 1;
LAB_00047876:
      *(short *)(param_3 + iVar3 * 2) = (short)uVar1;
      if (param_4 + -1 == iVar3) {
        printf_format_string_with_buffer("maybe array overflow!(k=%d)\n",iVar3);
        goto LAB_00047886;
      }
      iVar3 = iVar3 + 1;
      goto LAB_00047858;
    }
    if ((uVar1 & 0xf0) == 0xe0) {
      uVar1 = utf8_to_unicode(param_1 + iVar2,3);
      iVar2 = iVar2 + 3;
      goto LAB_00047876;
    }
    if ((uVar1 & 0xe0) == 0xc0) {
      uVar1 = utf8_to_unicode(param_1 + iVar2,2);
      iVar2 = iVar2 + 2;
      goto LAB_00047876;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


