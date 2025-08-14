/*
 * Function: utf8_to_unicode
 * Entry:    000477a0
 * Prototype: undefined utf8_to_unicode()
 */


uint utf8_to_unicode(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if ((uVar2 & 0xf0) == 0xe0) {
    if (2 < param_2) {
      uVar1 = param_1[2] & 0x30 | (param_1[1] & 3) << 6 | param_1[2] & 0xf;
      uVar2 = ((uint)param_1[1] << 0x1a) >> 0x1c | (uVar2 & 0xf) << 4;
LAB_000477f4:
      return uVar1 | uVar2 << 8;
    }
    if (3 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): length error!\n\n","utf8_to_unicode");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else if ((uVar2 & 0xe0) == 0xc0) {
    if (1 < param_2) {
      uVar1 = param_1[1] & 0x3f | (uVar2 & 3) << 6;
      uVar2 = (uVar2 << 0x1b) >> 0x1d;
      goto LAB_000477f4;
    }
    FUN_000778d4("length error!");
  }
  else {
    FUN_000777f0("maybe [%x] not unicode ?\n");
  }
  return 0;
}


