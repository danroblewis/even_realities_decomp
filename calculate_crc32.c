/*
 * Function: calculate_crc32
 * Entry:    0002360c
 * Prototype: undefined calculate_crc32()
 */


uint calculate_crc32(uint param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  
  param_1 = ~param_1;
  pbVar1 = param_2 + param_3;
  for (; param_2 != pbVar1; param_2 = param_2 + 1) {
    param_1 = (&CRC32_CALCULATION_AND_LOOKUP_TABLE_GENERATION)[(*param_2 ^ param_1) & 0xff] ^
              param_1 >> 8;
  }
  return ~param_1;
}


