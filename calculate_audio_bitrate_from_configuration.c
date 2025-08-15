/*
 * Function: calculate_audio_bitrate_from_configuration
 * Entry:    000709d8
 * Prototype: undefined calculate_audio_bitrate_from_configuration()
 */


int calculate_audio_bitrate_from_configuration(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *param_1) {
    iVar1 = param_1[2];
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    else {
      iVar2 = (uint)*(ushort *)(&DAT_0008fd50 + (param_1[4] + 8) * 2) +
              *(ushort *)(&LAB_00090080 + (iVar1 + -1 + (uint)*(byte *)(param_1 + 1) * 8) * 2) +
              0x800;
      if ((((iVar1 != 1) &&
           (iVar2 = iVar2 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[5] + 0x19) * 2), iVar1 != 2))
          && (iVar2 = iVar2 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[6] + 0x2a) * 2), iVar1 != 3
             )) && (((iVar2 = iVar2 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[7] + 0x3b) * 2),
                     iVar1 != 4 &&
                     (iVar2 = iVar2 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[8] + 0x4c) * 2),
                     iVar1 != 5)) &&
                    ((iVar2 = iVar2 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[9] + 0x5d) * 2),
                     iVar1 != 6 &&
                     (iVar2 = iVar2 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[10] + 0x6e) * 2),
                     iVar1 != 7)))))) {
        iVar2 = iVar2 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[0xb] + 0x7f) * 2);
      }
      iVar1 = iVar2 + 0x7ff >> 0xb;
    }
    if (*param_1 != 1) {
      iVar2 = param_1[3];
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      else {
        iVar3 = (uint)*(ushort *)(&DAT_0008fd50 + (param_1[0xc] + 8) * 2) +
                *(ushort *)(&LAB_00090080 + (iVar2 + -1 + (uint)*(byte *)(param_1 + 1) * 8) * 2) +
                0x800;
        if ((((iVar2 != 1) &&
             (iVar3 = iVar3 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[0xd] + 0x19) * 2),
             iVar2 != 2)) &&
            ((iVar3 = iVar3 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[0xe] + 0x2a) * 2),
             iVar2 != 3 &&
             (((iVar3 = iVar3 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[0xf] + 0x3b) * 2),
               iVar2 != 4 &&
               (iVar3 = iVar3 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[0x10] + 0x4c) * 2),
               iVar2 != 5)) &&
              (iVar3 = iVar3 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[0x11] + 0x5d) * 2),
              iVar2 != 6)))))) &&
           (iVar3 = iVar3 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[0x12] + 0x6e) * 2),
           iVar2 != 7)) {
          iVar3 = iVar3 + (uint)*(ushort *)(&DAT_0008fd50 + (param_1[0x13] + 0x7f) * 2);
        }
        iVar2 = iVar3 + 0x7ff >> 0xb;
      }
      iVar1 = iVar1 + iVar2;
    }
    return iVar1;
  }
  return 0;
}


