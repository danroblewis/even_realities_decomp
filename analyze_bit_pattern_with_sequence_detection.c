/*
 * Function: analyze_bit_pattern_with_sequence_detection
 * Entry:    0007a63c
 * Prototype: undefined analyze_bit_pattern_with_sequence_detection()
 */


undefined4 analyze_bit_pattern_with_sequence_detection(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != 0) && (param_2 - 1U < 0x210)) {
    uVar1 = 0;
    uVar3 = 0;
    uVar4 = 0;
    do {
      while ((uVar2 = *(uint *)(param_1 + (uVar1 >> 5) * 4) >> (uVar1 & 0x1f),
             (uVar1 & 0x1f) != 0x1f && (uVar2 = uVar2 & 1, uVar1 == 0))) {
        uVar1 = 1;
        uVar3 = uVar2;
        uVar4 = uVar1;
      }
      uVar1 = uVar1 + 1;
      if (uVar3 == uVar2) {
        uVar4 = uVar4 + 1;
        if (uVar4 == param_3) {
          return 0xf10c36;
        }
      }
      else {
        uVar4 = 1;
        uVar3 = uVar2;
      }
    } while (uVar1 != param_2 * 8);
    return 0;
  }
  return 0xf10c36;
}


