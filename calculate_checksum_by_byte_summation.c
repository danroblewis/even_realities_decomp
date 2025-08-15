/*
 * Function: calculate_checksum_by_byte_summation
 * Entry:    0007d16a
 * Prototype: undefined calculate_checksum_by_byte_summation()
 */


undefined4 calculate_checksum_by_byte_summation(int *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_1 == (int *)0x0) || (param_2 == (byte *)0x0)) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = '\0';
    bVar1 = *param_2;
    for (iVar4 = 0; iVar4 < (int)(uint)bVar1; iVar4 = iVar4 + 1) {
      cVar2 = cVar2 + *(char *)(*param_1 + iVar4);
    }
    *(char *)(*param_1 + (uint)bVar1) = cVar2;
    uVar3 = 0;
    *param_2 = bVar1 + 1;
  }
  return uVar3;
}


