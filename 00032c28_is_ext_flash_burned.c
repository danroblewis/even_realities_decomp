/*
 * Function: is_ext_flash_burned
 * Entry:    00032c28
 * Prototype: undefined is_ext_flash_burned()
 */


undefined4 is_ext_flash_burned(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): join in is_ext_flash_burned\n\n","is_ext_flash_burned",param_3,0,param_1);
    }
    else {
      handle_heartbeat();
    }
  }
  uVar3 = 0;
  iVar2 = 0;
LAB_00032c54:
  do {
    uStack_24 = CONCAT22(0xffff,(undefined2)uStack_24);
    switch(iVar2) {
    case 1:
      iVar1 = calc_flash_crc((int)&uStack_24 + 2,0x200000,0x10);
      if ((iVar1 != 0) || (iVar1 = calc_flash_crc((int)&uStack_24 + 2,0x3f8c98,0x10), iVar1 != 0))
      goto LAB_00032e38;
      if (uStack_24._2_2_ != -0x2547) {
        return 1;
      }
      if (2 < LOG_LEVEL) break;
      iVar2 = 2;
      goto LAB_00032caa;
    case 2:
      iVar1 = calc_flash_crc((int)&uStack_24 + 2,0x500000,0x10);
      if ((iVar1 != 0) || (iVar1 = calc_flash_crc((int)&uStack_24 + 2,0x515768,0x10), iVar1 != 0))
      goto LAB_00032e38;
      if (uStack_24._2_2_ != 0x1265) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        iVar2 = 3;
        goto LAB_00032caa;
      }
      break;
    case 3:
      iVar1 = calc_flash_crc((int)&uStack_24 + 2,0x520000,0x10);
      if ((iVar1 != 0) || (iVar1 = calc_flash_crc((int)&uStack_24 + 2,0x97c44f,0x10), iVar1 != 0))
      goto LAB_00032e38;
      if (uStack_24._2_2_ != -0x2547) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        iVar2 = 4;
        goto LAB_00032caa;
      }
      break;
    case 4:
      iVar1 = calc_flash_crc((int)&uStack_24 + 2,0xa20000,0x10);
      if ((iVar1 != 0) || (iVar1 = calc_flash_crc((int)&uStack_24 + 2,0xa2b77f,0x10), iVar1 != 0))
      goto LAB_00032e38;
      if (uStack_24._2_2_ != -0x2bee) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        iVar2 = 5;
        goto LAB_00032caa;
      }
      break;
    case 5:
      iVar1 = calc_flash_crc((int)&uStack_24 + 2,0xa40000,0x10);
      if ((iVar1 != 0) || (iVar1 = calc_flash_crc((int)&uStack_24 + 2,0xdbedcf,0x10), iVar1 != 0))
      goto LAB_00032e38;
      if (uStack_24._2_2_ != -0x2547) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        iVar2 = 6;
        goto LAB_00032caa;
      }
      break;
    case 6:
      iVar1 = calc_flash_crc((int)&uStack_24 + 2,0x180000,0x10);
      if ((iVar1 != 0) || (iVar1 = calc_flash_crc((int)&uStack_24 + 2,0x1af0d8,0x10), iVar1 != 0))
      goto LAB_00032e38;
      if (uStack_24._2_2_ != 0x2632) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        return 0;
      }
      break;
    default:
      iVar1 = calc_flash_crc((int)&uStack_24 + 2,0x140000,0x10);
      if ((iVar1 != 0) || (iVar1 = calc_flash_crc((int)&uStack_24 + 2,0x17fcf8,0x10), iVar1 != 0)) {
        iVar2 = 0;
        goto LAB_00032e38;
      }
      if (uStack_24._2_2_ != 0xd59) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        iVar2 = 1;
        goto LAB_00032caa;
      }
    }
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): read flash idx %d, calc crc is:0x%x\n","is_ext_flash_burned",iVar2,
                  uStack_24 >> 0x10);
    }
    else {
      handle_heartbeat("%s(): read flash idx %d, calc crc is:0x%x\n","is_ext_flash_burned",iVar2);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 7) {
      return 0;
    }
LAB_00032caa:
    uVar3 = 0;
  } while( true );
LAB_00032e38:
  if (uVar3 == 5) {
    return 2;
  }
  FUN_0007d14a(100);
  uVar3 = uVar3 + 1 & 0xff;
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): flash read fail, retry again, retry time %d\n","is_ext_flash_burned",uVar3)
      ;
    }
    else {
      handle_heartbeat();
    }
  }
  goto LAB_00032c54;
}


