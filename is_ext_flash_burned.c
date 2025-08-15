/*
 * Function: is_ext_flash_burned
 * Entry:    00032c28
 * Prototype: undefined __stdcall is_ext_flash_burned(undefined4 work_mode_context, undefined4 retry_count, undefined4 debug_param)
 */


undefined4 is_ext_flash_burned(undefined4 work_mode_context,uint retry_count,undefined4 debug_param)

{
  int crc_result;
  int flash_section_index;
  uint retry_counter;
  undefined4 crc_buffer;
  
  crc_buffer = retry_count;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): join in is_ext_flash_burned\n\n","is_ext_flash_burned",debug_param,0,
                  work_mode_context);
    }
    else {
      handle_heartbeat();
    }
  }
  retry_counter = 0;
  flash_section_index = 0;
LAB_00032c54:
  do {
    crc_buffer = CONCAT22(0xffff,(undefined2)crc_buffer);
    switch(flash_section_index) {
    case 1:
      crc_result = calc_flash_crc((int)&crc_buffer + 2,0x200000,0x10);
      if ((crc_result != 0) ||
         (crc_result = calc_flash_crc((int)&crc_buffer + 2,0x3f8c98,0x10), crc_result != 0))
      goto LAB_00032e38;
      if (crc_buffer._2_2_ != -0x2547) {
        return 1;
      }
      if (2 < LOG_LEVEL) break;
      flash_section_index = 2;
      goto LAB_00032caa;
    case 2:
      crc_result = calc_flash_crc((int)&crc_buffer + 2,0x500000,0x10);
      if ((crc_result != 0) ||
         (crc_result = calc_flash_crc((int)&crc_buffer + 2,0x515768,0x10), crc_result != 0))
      goto LAB_00032e38;
      if (crc_buffer._2_2_ != 0x1265) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        flash_section_index = 3;
        goto LAB_00032caa;
      }
      break;
    case 3:
      crc_result = calc_flash_crc((int)&crc_buffer + 2,0x520000,0x10);
      if ((crc_result != 0) ||
         (crc_result = calc_flash_crc((int)&crc_buffer + 2,0x97c44f,0x10), crc_result != 0))
      goto LAB_00032e38;
      if (crc_buffer._2_2_ != -0x2547) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        flash_section_index = 4;
        goto LAB_00032caa;
      }
      break;
    case 4:
      crc_result = calc_flash_crc((int)&crc_buffer + 2,0xa20000,0x10);
      if ((crc_result != 0) ||
         (crc_result = calc_flash_crc((int)&crc_buffer + 2,0xa2b77f,0x10), crc_result != 0))
      goto LAB_00032e38;
      if (crc_buffer._2_2_ != -0x2bee) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        flash_section_index = 5;
        goto LAB_00032caa;
      }
      break;
    case 5:
      crc_result = calc_flash_crc((int)&crc_buffer + 2,0xa40000,0x10);
      if ((crc_result != 0) ||
         (crc_result = calc_flash_crc((int)&crc_buffer + 2,0xdbedcf,0x10), crc_result != 0))
      goto LAB_00032e38;
      if (crc_buffer._2_2_ != -0x2547) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        flash_section_index = 6;
        goto LAB_00032caa;
      }
      break;
    case 6:
      crc_result = calc_flash_crc((int)&crc_buffer + 2,0x180000,0x10);
      if ((crc_result != 0) ||
         (crc_result = calc_flash_crc((int)&crc_buffer + 2,0x1af0d8,0x10), crc_result != 0))
      goto LAB_00032e38;
      if (crc_buffer._2_2_ != 0x2632) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        return 0;
      }
      break;
    default:
      crc_result = calc_flash_crc((int)&crc_buffer + 2,0x140000,0x10);
      if ((crc_result != 0) ||
         (crc_result = calc_flash_crc((int)&crc_buffer + 2,0x17fcf8,0x10), crc_result != 0)) {
        flash_section_index = 0;
        goto LAB_00032e38;
      }
      if (crc_buffer._2_2_ != 0xd59) {
        return 1;
      }
      if (LOG_LEVEL < 3) {
        flash_section_index = 1;
        goto LAB_00032caa;
      }
    }
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): read flash idx %d, calc crc is:0x%x\n","is_ext_flash_burned",
                  flash_section_index,crc_buffer >> 0x10);
    }
    else {
      handle_heartbeat("%s(): read flash idx %d, calc crc is:0x%x\n","is_ext_flash_burned",
                       flash_section_index);
    }
    flash_section_index = flash_section_index + 1;
    if (flash_section_index == 7) {
      return 0;
    }
LAB_00032caa:
    retry_counter = 0;
  } while( true );
LAB_00032e38:
  if (retry_counter == 5) {
    return 2;
  }
  delay_ms(100);
  retry_counter = retry_counter + 1 & 0xff;
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): flash read fail, retry again, retry time %d\n","is_ext_flash_burned",
                  retry_counter);
    }
    else {
      handle_heartbeat();
    }
  }
  goto LAB_00032c54;
}


