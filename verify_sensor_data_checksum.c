/*
 * Function: verify_sensor_data_checksum
 * Entry:    000302cc
 * Prototype: undefined verify_sensor_data_checksum()
 */


int verify_sensor_data_checksum(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 4;
  do {
    pbVar1 = &UNK_000a49a5 + iVar3;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (iVar3 != 0x1be4);
  iVar2 = iVar2 + -0x9244d;
  if (iVar2 != 0) {
    iVar2 = -1;
  }
  return iVar2;
}


