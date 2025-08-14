/*
 * Function: app_codec_lc3_test
 * Entry:    0002ed68
 * Prototype: undefined app_codec_lc3_test()
 */


void app_codec_lc3_test(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *format_string;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar1 = FUN_00068ecc(10000,16000);
  uVar2 = FUN_00068e40(10000,16000);
  iVar3 = malloc_maybe(uVar1);
  iVar9 = (uVar2 & 0x7fff) * 2;
  iVar4 = malloc_maybe(iVar9);
  iVar8 = (param_2 / iVar9 & 0xffffU) * 0x14;
  iVar5 = malloc_maybe(iVar8);
  if (iVar3 == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): malloc error\r\n\n","app_codec_lc3_test");
      }
      else {
        handle_heartbeat();
      }
    }
LAB_0002edf8:
    iVar3 = iVar4;
    if (iVar4 != 0) goto LAB_0002ede2;
  }
  else {
    if (iVar4 != 0) {
      if (iVar5 != 0) {
        iVar6 = get_system_ready_state();
        if ((iVar6 == 1) && (iVar6 = FUN_0008638c(&DAT_00087bf0), iVar6 == 0)) {
          if (0 < LOG_LEVEL) {
            pcVar7 = "mx25r6435f@0";
            format_string = "%s():  [%s] device not ready.\n\n";
LAB_0002ee5a:
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(format_string,"app_codec_lc3_test",pcVar7);
            }
            else {
              handle_heartbeat();
            }
          }
        }
        else {
          uVar1 = FUN_00068f94(10000,16000,0,iVar3);
          iVar6 = iVar5;
          do {
            if (iVar6 == iVar8 + iVar5) {
              iVar9 = get_system_ready_state();
              if (iVar9 != 1) {
                if (DAT_20007b78 == 0) {
                  enqueue_dmic(iVar5);
                }
                else {
                  local_30 = 0;
                  uStack_2c = 0;
                  calculate_elapsed_time(&local_30);
                  if (2 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): send audio stream data to storage thread,timestemp = %lld\n"
                                  ,"app_codec_lc3_test",local_30,uStack_2c);
                    }
                    else {
                      handle_heartbeat("%s(): send audio stream data to storage thread,timestemp = %lld\n"
                                       ,"app_codec_lc3_test");
                    }
                  }
                  sendAudioStram2Cache(iVar5);
                }
                goto LAB_0002eeb6;
              }
              if (0x40ffff < DAT_20002404) goto LAB_0002eeb6;
              pcVar7 = (char *)FUN_00060f20(&DAT_00087bf0,DAT_20002404,iVar5,iVar8);
              if (pcVar7 != (char *)0x0) {
                if (LOG_LEVEL < 1) goto LAB_0002eeb6;
                format_string = "%s(): Flash write failed! %d\n\n";
                goto LAB_0002ee5a;
              }
              if (0 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): Flash write to addr 0x%x\n\n","app_codec_lc3_test",DAT_20002404
                             );
                }
                else {
                  handle_heartbeat();
                }
              }
              DAT_20002404 = DAT_20002404 + iVar8;
              goto LAB_0002eeb6;
            }
            pcVar7 = (char *)FUN_00069238(uVar1,0,param_1,1,0x14,iVar6,uVar1,param_1);
            iVar6 = iVar6 + 0x14;
            param_1 = param_1 + iVar9;
          } while (pcVar7 == (char *)0x0);
          if (0 < LOG_LEVEL) {
            format_string = "%s(): lc3_encode did not return zero %d\n";
            goto LAB_0002ee5a;
          }
        }
LAB_0002eeb6:
        FUN_00076d7c(iVar3);
        FUN_00076d7c(iVar4);
        goto LAB_0002edce;
      }
      if (LOG_LEVEL < 1) {
        FUN_00076d7c(iVar3);
        iVar5 = iVar4;
        goto LAB_0002edce;
      }
LAB_0002ee16:
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): malloc error\r\n\n","app_codec_lc3_test");
      }
      else {
        handle_heartbeat();
      }
      FUN_00076d7c(iVar3);
      goto LAB_0002edf8;
    }
    if (0 < LOG_LEVEL) goto LAB_0002ee16;
LAB_0002ede2:
    FUN_00076d7c(iVar3);
  }
  if (iVar5 == 0) {
    return;
  }
LAB_0002edce:
  FUN_00076d7c(iVar5);
  return;
}


