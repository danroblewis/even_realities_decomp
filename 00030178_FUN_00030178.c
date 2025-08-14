/*
 * Function: FUN_00030178
 * Entry:    00030178
 * Prototype: undefined FUN_00030178()
 */


undefined4 FUN_00030178(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 local_18;
  ushort local_14;
  undefined2 uStack_12;
  undefined4 uStack_10;
  
  cVar2 = '\x03';
  local_18 = CONCAT13((char)(param_2 >> 0x10),
                      CONCAT12((char)(param_2 >> 0x18),
                               (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff));
  _local_14 = CONCAT22((short)(param_2 >> 0x10),
                       (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff);
  uStack_10 = param_3;
  do {
    iVar1 = (**(code **)(DAT_20007bc0 + 4))(&local_18,6);
    if (iVar1 == 0) {
      return 0;
    }
    cVar2 = cVar2 + -1;
    FUN_0003016c(1);
  } while (cVar2 != '\0');
  return 0xffffffff;
}


