/*
 * Function: process_audio_data_with_complex_encoding
 * Entry:    00070b38
 * Prototype: undefined __stdcall process_audio_data_with_complex_encoding(undefined4 buffer_structure, undefined4 encoding_parameters, undefined4 encoding_mode, undefined4 buffer_overflow_handler)
 */


void process_audio_data_with_complex_encoding
               (int buffer_structure,int *encoding_parameters,undefined4 param_3,
               undefined4 buffer_overflow_handler)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  if (0 < *encoding_parameters) {
    iVar7 = 0;
    piVar8 = encoding_parameters + 1;
    piVar6 = encoding_parameters;
    do {
      piVar8 = piVar8 + 1;
      iVar5 = *piVar8;
      uVar1 = *(uint *)(buffer_structure + 0x20);
      iVar3 = uVar1 + 1;
      if (iVar3 < 0x21) {
        *(int *)(buffer_structure + 0x20) = iVar3;
        *(uint *)(buffer_structure + 0x1c) =
             *(uint *)(buffer_structure + 0x1c) | (uint)(0 < iVar5) << (uVar1 & 0xff);
      }
      else {
        write_data_to_buffer_with_bit_manipulation
                  (buffer_structure,(uint)(0 < iVar5),1,iVar3,buffer_overflow_handler);
      }
      if (0 < iVar5) {
        iVar3 = (uint)*(byte *)(encoding_parameters + 1) * 0x44 + 0x900a0;
        uVar1 = *(uint *)(buffer_structure + 8) >> 10;
        uVar4 = uVar1 * *(ushort *)(iVar3 + (iVar5 + -1) * 4) + *(int *)(buffer_structure + 4);
        *(uint *)(buffer_structure + 4) = uVar4;
        uVar1 = *(ushort *)(iVar3 + (iVar5 + -1) * 4 + 2) * uVar1;
        uVar2 = *(uint *)(buffer_structure + 0x10) | uVar4 >> 0x18;
        uVar4 = uVar4 & 0xffffff;
        *(uint *)(buffer_structure + 8) = uVar1;
        *(uint *)(buffer_structure + 0x10) = uVar2;
        *(uint *)(buffer_structure + 4) = uVar4;
        if (uVar1 < 0x10000) {
          flush_buffer_data(buffer_structure);
          uVar4 = *(uint *)(buffer_structure + 4);
          uVar1 = *(uint *)(buffer_structure + 8);
          uVar2 = *(uint *)(buffer_structure + 0x10);
        }
        iVar3 = piVar6[4];
        uVar4 = (uVar1 >> 10) * (uint)*(ushort *)(&LAB_0008fe60 + (iVar3 + 8) * 4) + uVar4;
        *(uint *)(buffer_structure + 4) = uVar4;
        uVar1 = (uVar1 >> 10) * (uint)*(ushort *)(&LAB_0008fe62 + (iVar3 + 8) * 4);
        *(uint *)(buffer_structure + 4) = uVar4 & 0xffffff;
        *(uint *)(buffer_structure + 8) = uVar1;
        *(uint *)(buffer_structure + 0x10) = uVar2 | uVar4 >> 0x18;
        if (uVar1 < 0x10000) {
          flush_buffer_data(buffer_structure);
        }
        if (iVar5 != 1) {
          iVar3 = piVar6[5];
          uVar1 = *(uint *)(buffer_structure + 8) >> 10;
          uVar2 = uVar1 * *(ushort *)(&LAB_0008fea4 + (iVar3 + 8) * 4) +
                  *(int *)(buffer_structure + 4);
          *(uint *)(buffer_structure + 4) = uVar2;
          uVar1 = uVar1 * *(ushort *)(&LAB_0008fea6 + (iVar3 + 8) * 4);
          *(uint *)(buffer_structure + 8) = uVar1;
          *(uint *)(buffer_structure + 0x10) = *(uint *)(buffer_structure + 0x10) | uVar2 >> 0x18;
          *(uint *)(buffer_structure + 4) = uVar2 & 0xffffff;
          if (uVar1 < 0x10000) {
            flush_buffer_data(buffer_structure);
          }
          if (iVar5 != 2) {
            iVar3 = piVar6[6];
            uVar1 = *(uint *)(buffer_structure + 8) >> 10;
            uVar2 = uVar1 * *(ushort *)(&LAB_0008fee8 + (iVar3 + 8) * 4) +
                    *(int *)(buffer_structure + 4);
            *(uint *)(buffer_structure + 4) = uVar2;
            uVar1 = uVar1 * *(ushort *)(&LAB_0008feea + (iVar3 + 8) * 4);
            *(uint *)(buffer_structure + 8) = uVar1;
            *(uint *)(buffer_structure + 0x10) = *(uint *)(buffer_structure + 0x10) | uVar2 >> 0x18;
            *(uint *)(buffer_structure + 4) = uVar2 & 0xffffff;
            if (uVar1 < 0x10000) {
              flush_buffer_data(buffer_structure);
            }
            if (iVar5 != 3) {
              iVar3 = piVar6[7];
              uVar1 = *(uint *)(buffer_structure + 8) >> 10;
              uVar2 = uVar1 * *(ushort *)(&LAB_0008ff2c + (iVar3 + 8) * 4) +
                      *(int *)(buffer_structure + 4);
              *(uint *)(buffer_structure + 4) = uVar2;
              uVar1 = uVar1 * *(ushort *)(&LAB_0008ff2e + (iVar3 + 8) * 4);
              *(uint *)(buffer_structure + 8) = uVar1;
              *(uint *)(buffer_structure + 0x10) =
                   *(uint *)(buffer_structure + 0x10) | uVar2 >> 0x18;
              *(uint *)(buffer_structure + 4) = uVar2 & 0xffffff;
              if (uVar1 < 0x10000) {
                flush_buffer_data(buffer_structure);
              }
              if (iVar5 != 4) {
                iVar3 = piVar6[8];
                uVar1 = *(uint *)(buffer_structure + 8) >> 10;
                uVar2 = uVar1 * *(ushort *)(&LAB_0008ff70 + (iVar3 + 8) * 4) +
                        *(int *)(buffer_structure + 4);
                *(uint *)(buffer_structure + 4) = uVar2;
                uVar1 = uVar1 * *(ushort *)(&LAB_0008ff72 + (iVar3 + 8) * 4);
                *(uint *)(buffer_structure + 8) = uVar1;
                *(uint *)(buffer_structure + 0x10) =
                     *(uint *)(buffer_structure + 0x10) | uVar2 >> 0x18;
                *(uint *)(buffer_structure + 4) = uVar2 & 0xffffff;
                if (uVar1 < 0x10000) {
                  flush_buffer_data(buffer_structure);
                }
                if (iVar5 != 5) {
                  iVar3 = piVar6[9];
                  uVar1 = *(uint *)(buffer_structure + 8) >> 10;
                  uVar2 = uVar1 * *(ushort *)(&LAB_0008ffb4 + (iVar3 + 8) * 4) +
                          *(int *)(buffer_structure + 4);
                  *(uint *)(buffer_structure + 4) = uVar2;
                  uVar1 = uVar1 * *(ushort *)(&LAB_0008ffb6 + (iVar3 + 8) * 4);
                  *(uint *)(buffer_structure + 8) = uVar1;
                  *(uint *)(buffer_structure + 0x10) =
                       *(uint *)(buffer_structure + 0x10) | uVar2 >> 0x18;
                  *(uint *)(buffer_structure + 4) = uVar2 & 0xffffff;
                  if (uVar1 < 0x10000) {
                    flush_buffer_data(buffer_structure);
                  }
                  if (iVar5 != 6) {
                    iVar3 = piVar6[10];
                    uVar1 = *(uint *)(buffer_structure + 8) >> 10;
                    uVar2 = uVar1 * *(ushort *)(&LAB_0008fff8 + (iVar3 + 8) * 4) +
                            *(int *)(buffer_structure + 4);
                    *(uint *)(buffer_structure + 4) = uVar2;
                    uVar1 = uVar1 * *(ushort *)(&LAB_0008fffa + (iVar3 + 8) * 4);
                    *(uint *)(buffer_structure + 8) = uVar1;
                    *(uint *)(buffer_structure + 0x10) =
                         *(uint *)(buffer_structure + 0x10) | uVar2 >> 0x18;
                    *(uint *)(buffer_structure + 4) = uVar2 & 0xffffff;
                    if (uVar1 < 0x10000) {
                      flush_buffer_data(buffer_structure);
                    }
                    if (iVar5 != 7) {
                      iVar3 = piVar6[0xb];
                      uVar1 = *(uint *)(buffer_structure + 8) >> 10;
                      uVar2 = uVar1 * *(ushort *)(&LAB_0009003c + (iVar3 + 8) * 4) +
                              *(int *)(buffer_structure + 4);
                      *(uint *)(buffer_structure + 4) = uVar2;
                      uVar1 = uVar1 * *(ushort *)(&LAB_0009003e + (iVar3 + 8) * 4);
                      *(uint *)(buffer_structure + 8) = uVar1;
                      *(uint *)(buffer_structure + 0x10) =
                           *(uint *)(buffer_structure + 0x10) | uVar2 >> 0x18;
                      *(uint *)(buffer_structure + 4) = uVar2 & 0xffffff;
                      if (uVar1 < 0x10000) {
                        flush_buffer_data(buffer_structure);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 8;
    } while (iVar7 < *encoding_parameters);
  }
  return;
}


