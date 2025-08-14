/*
 * Function: FUN_00025528
 * Entry:    00025528
 * Prototype: undefined FUN_00025528()
 */


undefined4 FUN_00025528(undefined4 param_1,uint3 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = (uint)param_2;
  FUN_0003271c();
  if (DAT_200079fc == 0) {
    iVar1 = FUN_00024cc8(1);
    if (iVar1 < 0) {
      return 0;
    }
    iVar1 = FUN_0007c9f2(DAT_20007a44,&stack0xffffffef);
    if (iVar1 == 0) {
      uVar3 = uVar3 & 0xfeffffff;
      FUN_0007c9fe(DAT_20007a44);
    }
    FUN_00024f40(0xff);
    iVar1 = FUN_00024cc8(0);
    if (iVar1 < 0) {
      return 0;
    }
    DAT_200079fc = 1;
  }
  cVar2 = DAT_20002385;
  if (DAT_20002385 == '\x01') {
    DAT_20002384 = DAT_20002385;
    cVar2 = '\0';
    DAT_20002388 = 0x9010000;
    DAT_2000238c = 0xa031e09;
    DAT_20002386 = 0;
    DAT_20002390 = &LAB_000500fe_2;
    DAT_20002394 = 0;
    DAT_2000239c = 0x200;
    DAT_200023ae = 0x101;
    DAT_200023b0 = 0xa0a;
    DAT_200023b4 = 0xf000000;
    DAT_20002398 = 0;
    DAT_2000239e = 0;
    DAT_200023a5 = 0;
    DAT_200023a7 = 0;
    DAT_200023a8 = 0;
    DAT_200023ac = 0;
    DAT_200023b8 = 0;
    DAT_200023ba = 0;
    DAT_20002380 = 1;
  }
  FUN_000254d8(&DAT_20007a2c,&DAT_20002380,cVar2,&DAT_20002380,param_1,uVar3);
  iVar1 = get_system_ready_state();
  if ((iVar1 != 0) || (iVar1 = get_work_mode(), 0x1d < *(byte *)(iVar1 + 0xfc0))) {
    FUN_0000fcf0(&DAT_20002380);
  }
  return 0;
}


