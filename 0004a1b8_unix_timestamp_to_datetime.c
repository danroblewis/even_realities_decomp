/*
 * Function: unix_timestamp_to_datetime
 * Entry:    0004a1b8
 * Prototype: undefined __stdcall unix_timestamp_to_datetime(undefined4 unix_timestamp, undefined4 datetime_array)
 */


undefined4 unix_timestamp_to_datetime(uint unix_timestamp,undefined2 *datetime_array)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  ushort *puVar7;
  
  uVar3 = unix_timestamp / 0x15180;
  uVar2 = 0x7b2;
  while( true ) {
    if (((uVar2 & 3) == 0) && (uVar2 % 100 != 0)) {
      uVar4 = 0x16e;
    }
    else if (uVar2 % 400 == 0) {
      uVar4 = 0x16e;
    }
    else {
      uVar4 = 0x16d;
    }
    if (uVar3 < uVar4) break;
    uVar3 = uVar3 - uVar4;
    uVar2 = uVar2 + 1 & 0xffff;
  }
  iVar5 = 0;
  *datetime_array = (short)uVar2;
  puVar7 = &DAT_00099014;
  do {
    while( true ) {
      uVar4 = (uint)*puVar7;
      sVar6 = (short)iVar5;
      if (iVar5 != 1) break;
      if ((((uVar2 & 3) == 0) && (uVar2 % 100 != 0)) || (uVar2 % 400 == 0)) {
        if (uVar3 < 0x1d) goto LAB_0004a26c;
        iVar5 = -0x1d;
      }
      else {
        if (uVar3 < uVar4) goto LAB_0004a26c;
        iVar5 = -uVar4;
      }
      uVar3 = uVar3 + iVar5;
      iVar5 = 2;
      puVar7 = puVar7 + 1;
    }
    if (uVar2 % 400 == 0) {
      uVar4 = 0x1d;
    }
    if (uVar3 < uVar4) goto LAB_0004a26c;
    iVar5 = iVar5 + 1;
    uVar3 = uVar3 - uVar4;
    puVar7 = puVar7 + 1;
  } while (iVar5 != 0xc);
  sVar6 = 0xc;
LAB_0004a26c:
  datetime_array[2] = (short)uVar3 + 1;
  uVar2 = (unix_timestamp % 0x15180) % 0xe10;
  datetime_array[3] = (short)((unix_timestamp % 0x15180) / 0xe10);
  sVar1 = (short)(uVar2 / 0x3c);
  datetime_array[5] = (short)uVar2 + sVar1 * -0x3c;
  datetime_array[1] = sVar6 + 1;
  datetime_array[4] = sVar1;
  return 0;
}


