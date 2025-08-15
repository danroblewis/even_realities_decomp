/*
 * Function: calculate_work_mode_parameters
 * Entry:    00025ecc
 * Prototype: int calculate_work_mode_parameters(char * attitude_data)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int calculate_work_mode_parameters(char *attitude_data) */

int calculate_work_mode_parameters(char *attitude_data)

{
  byte bVar1;
  char cVar2;
  int work_mode_timing;
  int base_timing_value;
  int iVar3;
  
  work_mode_timing = *(int *)(attitude_data + 0x88);
  bVar1 = attitude_data[0x10];
  cVar2 = attitude_data[0x11];
  if ((((*(int *)(attitude_data + 0x80) != DAT_20007a9c) || ((uint)DAT_20018c6b != (uint)bVar1)) ||
      (DAT_20003024 != cVar2)) ||
     ((DAT_200023f8 != work_mode_timing || (DAT_20007a98 != *(int *)(attitude_data + 0x84))))) {
    if (cVar2 == '\0') {
      iVar3 = -0x15e;
    }
    else if (cVar2 == '\x02') {
      iVar3 = 700;
    }
    else {
      iVar3 = 0;
    }
    if (*attitude_data == '\x02') {
      base_timing_value = 0x76c;
    }
    else {
      base_timing_value = 4000;
    }
    DAT_200023f4 = (int)(base_timing_value * (uint)bVar1) / work_mode_timing;
    DAT_200023f8 = work_mode_timing;
    DAT_20003024 = cVar2;
    DAT_20007a98 = *(int *)(attitude_data + 0x84);
    DAT_20007a9c = *(int *)(attitude_data + 0x80);
    DAT_20018c6b = bVar1;
    get_work_mode();
    work_mode_timing = *(int *)(attitude_data + 0x84);
    iVar3 = (short)(ushort)(byte)attitude_data[0x10] * 0x32 + iVar3;
    if ((work_mode_timing == 0) &&
       (work_mode_timing = *(int *)(attitude_data + 0x80), work_mode_timing == 0)) {
      *(int *)(attitude_data + 8) = iVar3 + -0x189c;
      *(int *)(attitude_data + 0xc) = iVar3 + -0x2454;
    }
    else {
      *(int *)(attitude_data + 8) = work_mode_timing - iVar3;
      *(int *)(attitude_data + 0xc) = (work_mode_timing + -0x1194) - iVar3;
    }
  }
  return DAT_200023f4;
}


