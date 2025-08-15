/*
 * Function: format_integer_to_string_with_radix
 * Entry:    0004bb90
 * Prototype: undefined __stdcall format_integer_to_string_with_radix(undefined4 value_low, undefined4 value_high, undefined4 format_flags, undefined4 buffer_start, undefined4 buffer_end)
 */


char * format_integer_to_string_with_radix
                 (undefined4 value_low,undefined4 value_high,byte *format_flags,char *buffer_start,
                 char *buffer_end)

{
  uint extraout_r2;
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  uVar7 = CONCAT44(value_high,value_low);
  uVar2 = (uint)format_flags[3];
  bVar1 = (&DAT_000f8a6b)[uVar2];
  pcVar8 = buffer_start;
  if (uVar2 == 0x6f) {
    uVar2 = 8;
  }
  else {
    if (uVar2 < 0x70) {
      bVar6 = uVar2 == 0x58;
    }
    else {
      bVar6 = (uVar2 & 0xf7) == 0x70;
    }
    if (bVar6) {
      uVar2 = 0x10;
      uVar7 = CONCAT44(value_high,value_low);
    }
    else {
      uVar2 = 10;
      uVar7 = CONCAT44(value_high,value_low);
    }
  }
  do {
    uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
    uVar5 = (uint)uVar7;
    uVar7 = handle_unsigned_division(uVar5,uVar4,uVar2,0,pcVar8);
    cVar3 = (char)extraout_r2;
    if (extraout_r2 < 10) {
      cVar3 = cVar3 + '0';
    }
    else if ((bVar1 & 3) == 1) {
      cVar3 = cVar3 + '7';
    }
    else {
      cVar3 = cVar3 + 'W';
    }
    buffer_end = buffer_end + -1;
    *buffer_end = cVar3;
  } while ((uVar4 != 0 || uVar4 < (uVar2 <= uVar5)) && (buffer_start < buffer_end));
  if ((int)((uint)*format_flags << 0x1a) < 0) {
    if (uVar2 == 8) {
      bVar1 = format_flags[2] | 8;
    }
    else {
      if (uVar2 != 0x10) {
        return buffer_end;
      }
      bVar1 = format_flags[2] | 0x10;
    }
    format_flags[2] = bVar1;
  }
  return buffer_end;
}


