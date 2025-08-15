/*
 * Function: convert_timestamp_and_debug_print
 * Entry:    0004a2a4
 * Prototype: undefined convert_timestamp_and_debug_print()
 */


void convert_timestamp_and_debug_print(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  unix_timestamp_to_datetime(param_1,&local_24);
  uVar3 = local_24 & 0xffff;
  uVar1 = local_24 >> 0x10;
  uVar4 = local_20 & 0xffff;
  DEBUG_PRINT("date: %u: %04d/%02d/%02d-%02d:%02d:%02d\n",param_1,uVar3,uVar1,uVar4,local_20 >> 0x10
              ,local_1c & 0xffff,local_1c >> 0x10);
  cVar2 = FUN_0007d280(uVar3,uVar1,uVar4);
  FUN_0007d4b2(cVar2 + ';');
  return;
}


