/*
 * Function: convert_float_format
 * Entry:    000807f6
 * Prototype: undefined __stdcall convert_float_format(undefined4 input_format, undefined4 output_format, undefined4 unused)
 */


void convert_float_format(byte *input_format,byte *output_format,uint unused)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)(input_format + 4);
  uVar2 = *(undefined2 *)(input_format + 6);
  uVar3 = ((uint)*input_format << 0x1b) >> 0x1e;
  if ((*input_format & 7) == 0) {
    bVar4 = 1;
  }
  else {
    bVar4 = 3;
  }
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  output_format[0] = 0;
  output_format[1] = 0;
  output_format[2] = 0;
  output_format[3] = 0;
  *output_format = bVar4 | (byte)(uVar3 << 3) | *output_format & 0xe0;
  *(ushort *)(output_format + 2) = (ushort)((unused & 0xff) << 8) | (ushort)(unused >> 8) & 0xff;
  *(ushort *)(output_format + 4) = uVar1 << 8 | uVar1 >> 8;
  *(undefined2 *)(output_format + 6) = uVar2;
  return;
}


