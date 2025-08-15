/*
 * Function: process_data_with_operation_mode_and_validation
 * Entry:    0007d0e8
 * Prototype: undefined process_data_with_operation_mode_and_validation()
 */


/* WARNING: Removing unreachable block (ram,0x000258f8) */
/* WARNING: Removing unreachable block (ram,0x00025916) */
/* WARNING: Removing unreachable block (ram,0x0002592c) */
/* WARNING: Removing unreachable block (ram,0x0002590a) */

undefined4
process_data_with_operation_mode_and_validation
          (int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  
  if ((((param_2 == 0) || (param_3 == (undefined4 *)0x0)) || (param_4 == (uint *)0x0)) ||
     (param_1 == 2)) {
    uVar2 = 0xffffffff;
  }
  else {
    if (param_1 == 0) {
      if (((param_2 == 0) || (param_3 == (undefined4 *)0x0)) || (param_4 == (uint *)0x0)) {
        uVar2 = 0xffffffff;
      }
      else {
        iVar8 = send_control_message_with_retry_and_mutex(param_2,0x2006,&stack0xffffffeb,1);
        if (iVar8 == 0) {
          uVar2 = 0xfffffffd;
        }
        else {
          DEBUG_PRINT("eeprom_st25dv_read ST25DV_REG_MB_CTRL_DYN is failed\n");
          uVar2 = 0xfffffffe;
        }
      }
      return uVar2;
    }
    if (param_1 == 1) {
      if (((param_2 == 0) || (param_3 == (undefined4 *)0x0)) || (param_4 == (uint *)0x0)) {
        uVar2 = 0xffffffff;
      }
      else {
        if (DAT_2001a128 != 0) {
          uVar6 = 0;
          do {
            if (((((&DAT_2001a129)[uVar6] == 'Z') && ((&DAT_2001a12a)[uVar6] == -0x5b)) &&
                ((&DAT_2001a12b)[uVar6] == '\x7f')) &&
               (uVar4 = (uint)(byte)(&DAT_2001a12c)[uVar6], (int)(uVar4 + 4) < (int)(0x100 - uVar6))
               ) {
              cVar3 = '\0';
              iVar8 = 0;
              pcVar1 = &DAT_2001a129 + uVar6;
              do {
                iVar8 = iVar8 + 1;
                cVar3 = cVar3 + *pcVar1;
                pcVar1 = pcVar1 + 1;
              } while (iVar8 <= (int)(uVar4 + 3));
              if ((&DAT_2001a12d)[uVar4 + uVar6] == cVar3) {
                pbVar7 = (byte *)*param_3;
                memcpy(pbVar7,&DAT_2001a12d + uVar6,uVar4);
                *param_4 = uVar4;
                DEBUG_PRINT("use read_serial_data:");
                pbVar5 = pbVar7 + uVar4;
                for (; pbVar5 != pbVar7; pbVar7 = pbVar7 + 1) {
                  DEBUG_PRINT("%02x ",(uint)*pbVar7);
                }
                DEBUG_PRINT(&DAT_000f5400);
                if ((int)uVar6 <= (int)(0x100 - (uint)DAT_2001a128)) {
                  DAT_2001a128 = 0;
                  return 0;
                }
LAB_000335f6:
                DAT_2001a128 = 0;
                DEBUG_PRINT("Err:serial recv data does not meet the protocol\n");
                return 0xfffffffd;
              }
            }
            uVar6 = uVar6 + 1 & 0xffff;
            if ((int)(0x100 - (uint)DAT_2001a128) < (int)uVar6) goto LAB_000335f6;
          } while( true );
        }
        uVar2 = 0xfffffffe;
      }
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


