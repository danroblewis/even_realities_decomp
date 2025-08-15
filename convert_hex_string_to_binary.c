/*
 * Function: convert_hex_string_to_binary
 * Entry:    0007dd0a
 * Prototype: int convert_hex_string_to_binary(char * source, int length, char * destination, int max_dest_size)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int convert_hex_string_to_binary(char *source, int length, char *destination,
   int max_dest_size) */

int convert_hex_string_to_binary(char *source,int length,char *destination,int max_dest_size)

{
  int iVar1;
  byte *extraout_r2;
  char *extraout_r2_00;
  char *extraout_r2_01;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 uStack_1c;
  char *pcStack_18;
  
  uVar4 = (length & 1U) + ((uint)length >> 1);
  if ((uint)max_dest_size < uVar4) {
LAB_0007dd1e:
    uVar4 = 0;
  }
  else {
    pcVar6 = source;
    uStack_1c = length;
    pcStack_18 = destination;
    if ((length & 1U) != 0) {
      iVar1 = convert_hex_char_to_value
                        (*source,(int)&uStack_1c + 3,destination,max_dest_size,source);
      if (iVar1 < 0) goto LAB_0007dd1e;
      max_dest_size = (int)uStack_1c._3_1_;
      source = source + 1;
      destination = (char *)(extraout_r2 + 1);
      *extraout_r2 = uStack_1c._3_1_;
    }
    pbVar5 = (byte *)destination + ((uint)length >> 1);
    pcVar3 = source + 1;
    while ((byte *)destination != pbVar5) {
      iVar1 = convert_hex_char_to_value
                        (pcVar3[-1],(int)&uStack_1c + 3,destination,max_dest_size,pcVar6);
      if (iVar1 < 0) goto LAB_0007dd1e;
      cVar2 = uStack_1c._3_1_ * '\x10';
      *extraout_r2_00 = cVar2;
      iVar1 = convert_hex_char_to_value(*pcVar3);
      if (iVar1 < 0) goto LAB_0007dd1e;
      max_dest_size = (int)uStack_1c._3_1_;
      *extraout_r2_01 = cVar2 + uStack_1c._3_1_;
      pcVar3 = pcVar3 + 2;
      destination = extraout_r2_01 + 1;
    }
  }
  return uVar4;
}


