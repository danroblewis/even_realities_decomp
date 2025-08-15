/*
 * Function: display_thread_handler
 * Entry:    00049090
 * Prototype: undefined display_thread_handler()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void display_thread_handler(int param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  byte local_40 [2];
  short local_3e;
  undefined4 local_3c;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): display thread startup... \n","display_thread_handler");
    }
    else {
      handle_heartbeat();
    }
  }
  fill_memory_buffer(local_40,0,0x18);
  iVar8 = param_1 + 0xd4;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): display thread handler start up...\n","display_thread_handler");
    }
    else {
      handle_heartbeat();
    }
  }
  initialize_graphics_engine(&DAT_20004ce0,&LAB_0007d86c_1,0);
  set_work_mode_parameter(param_1 + 0xb90);
  _DAT_2001d447 = 0;
  do {
    while ((*(char *)(param_1 + 1) == '\x01' || (*(char *)(param_1 + 1) == '\b'))) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): display runtime mode = DFU_ID\n","display_thread_handler");
        }
        else {
          handle_heartbeat();
        }
      }
      calculate_ble_schedule_timing(0x28000,0);
    }
    fill_memory_buffer(local_40,0,0x18);
    bVar2 = false;
    lVar1 = (longlong)(int)(DAT_20002544 & ~((int)DAT_20002544 >> 0x1f)) * 0x8000 + 999;
    uVar9 = handle_unsigned_division((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
    iVar4 = manage_ble_connection_state_comprehensive
                      (&DAT_200038c4,local_40,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    uVar3 = local_3c;
    if (iVar4 == 0) {
      bVar2 = true;
    }
    else if ((iVar4 == -0x23) || (iVar4 == -0xb)) {
      bVar2 = false;
    }
    if (DAT_2001d447 == '\x01') {
      if (!bVar2) {
        if (*(char *)(param_1 + 0xd5) != '\0') {
          uVar7 = 0;
          uVar6 = *(undefined1 *)(param_1 + 0xd5);
          goto LAB_000492ee;
        }
        if (*(char *)(param_1 + 0xd5) != '\0') goto switchD_00049404_caseD_6;
        if (3 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): no one call display_close function, UI don\'t draw anything ,screen id = %d\n"
                        ,"display_thread_handler",(uint)*(byte *)(param_1 + 0xd5));
          }
          else {
            handle_heartbeat();
          }
        }
        if (LOG_LEVEL < 1) goto LAB_000495ba;
        pcVar5 = 
        "%s(): When the UI exit command is not received in IDLE state, the UI exit is performed by itself\n"
        ;
LAB_000495a8:
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(pcVar5,"display_thread_handler");
        }
        else {
          handle_heartbeat();
        }
        goto LAB_000495ba;
      }
      if (local_40[0] == 2) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): upgrade sync content area...\n","display_thread_handler");
          }
          else {
            handle_heartbeat();
          }
        }
        if (local_3e == 0) {
          if (3 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): received command without screen ID\n","display_thread_handler");
            }
            else {
              handle_heartbeat();
            }
          }
          uVar7 = 1;
          uVar6 = *(undefined1 *)(param_1 + 0xd5);
          goto LAB_000492ee;
        }
        if (local_3e == 2) {
          if ((local_3c & 0xff) == 1) {
            if (3 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): USE screen ID %d\n","display_thread_handler",local_3c >> 8 & 0xff
                           );
              }
              else {
                handle_heartbeat();
              }
            }
            uVar7 = 1;
LAB_000492e8:
            uVar6 = local_3c._1_1_;
            goto LAB_000492ee;
          }
          if (0 < LOG_LEVEL) {
            pcVar5 = "%s(): screen ID message parampter error!\n";
LAB_00049270:
            if (IS_DEBUG == 0) {
              DEBUG_PRINT(pcVar5,"display_thread_handler");
            }
            else {
              handle_heartbeat();
            }
          }
        }
      }
      else {
        switch(local_40[0]) {
        case 3:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): display thread switch display close ...\n","display_thread_handler"
                         );
            }
            else {
              handle_heartbeat();
            }
          }
          _DAT_2001d447 = CONCAT11(DAT_2001d448,2);
          if (local_3e == 0) {
            if (3 < LOG_LEVEL) {
              pcVar5 = "%s(): received command without screen ID\n";
LAB_0004943a:
              if (IS_DEBUG == 0) {
                DEBUG_PRINT(pcVar5,"display_thread_handler");
              }
              else {
                handle_heartbeat();
              }
            }
LAB_00049442:
            uVar6 = *(undefined1 *)(param_1 + 0xd5);
LAB_0004947e:
            display_reflash_handler(param_1,uVar6,iVar8,2);
          }
          else if (local_3e == 2) {
            if ((local_3c & 0xff) != 1) {
              if (0 < LOG_LEVEL) {
                pcVar5 = "%s(): screen ID message parampter error!\n";
                goto LAB_0004943a;
              }
              goto LAB_00049442;
            }
            if (3 < LOG_LEVEL) {
              if (IS_DEBUG == 0) {
                DEBUG_PRINT("%s(): USE screen ID %d\n","display_thread_handler",local_3c >> 8 & 0xff
                           );
              }
              else {
                handle_heartbeat();
              }
            }
            uVar6 = local_3c._1_1_;
            goto LAB_0004947e;
          }
          setup_font_rendering_system();
          goto LAB_00049488;
        case 4:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): display thread delay %dms close ...\n","display_thread_handler",
                          local_3c);
            }
            else {
              handle_heartbeat();
            }
          }
          setDelayExitValue(uVar3);
          uVar7 = 3;
          uVar6 = *(undefined1 *)(param_1 + 0xd5);
          break;
        case 5:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): KEY EVENT INJECT,REFLASH SCREEN\n","display_thread_handler");
            }
            else {
              handle_heartbeat();
            }
          }
          uVar7 = 4;
          uVar6 = *(undefined1 *)(param_1 + 0xd5);
          break;
        case 6:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): master send exit command ,UI framewrok handler it...\n",
                          "display_thread_handler");
            }
            else {
              handle_heartbeat();
            }
          }
          uVar7 = 5;
          uVar6 = *(undefined1 *)(param_1 + 0xd5);
          break;
        case 7:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): master send low power waring command ,UI framewrok handler it...\n"
                          ,"display_thread_handler");
            }
            else {
              handle_heartbeat();
            }
          }
          uVar7 = 6;
          uVar6 = *(undefined1 *)(param_1 + 0xd5);
          break;
        case 8:
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): master send low power resume command ,UI framewrok handler it...\n"
                          ,"display_thread_handler");
            }
            else {
              handle_heartbeat();
            }
          }
          uVar7 = 7;
          uVar6 = *(undefined1 *)(param_1 + 0xd5);
          break;
        default:
          goto switchD_00049404_caseD_6;
        }
LAB_000492ee:
        display_reflash_handler(param_1,uVar6,iVar8,uVar7);
      }
    }
    else {
      if (DAT_2001d447 == '\x02') {
LAB_00049488:
        if (2 < LOG_LEVEL) {
          pcVar5 = "%s(): display thread switch display close ,release resouce...\n";
          goto LAB_000495a8;
        }
      }
      else {
        if (DAT_2001d447 == '\0') {
          if (bVar2) {
            if (local_40[0] == 2) {
              if ((*(char *)(param_1 + 0xd5) == '\x10') &&
                 (iVar4 = get_work_mode(), **(byte **)(iVar4 + 0x100c) < 0xc)) {
                initialize_jbd_display_system_with_memory_and_commands(0);
              }
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): init LCD data...\n","display_thread_handler");
                }
                else {
                  handle_heartbeat();
                }
              }
              if (local_3e == 0) {
                if (3 < LOG_LEVEL) {
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT("%s(): ----received command without screen ID\n",
                                "display_thread_handler");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
                uVar6 = *(undefined1 *)(param_1 + 0xd5);
                DAT_2001d448 = *(undefined1 *)(param_1 + 0xd5);
LAB_00049204:
                display_reflash_handler(param_1,uVar6,iVar8,1);
                _DAT_2001d447 = CONCAT11(DAT_2001d448,1);
              }
              else if (local_3e == 2) {
                if ((local_3c & 0xff) == 1) {
                  if (3 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): ---USE screen ID %d\n","display_thread_handler",
                                  local_3c >> 8 & 0xff);
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  DAT_2001d448 = local_3c._1_1_;
                  uVar6 = local_3c._1_1_;
                  goto LAB_00049204;
                }
                if (0 < LOG_LEVEL) {
                  pcVar5 = "%s(): ---screen ID message parampter error!\n";
                  goto LAB_00049270;
                }
              }
            }
            else if (local_40[0] == 3) {
              if (2 < LOG_LEVEL) {
                if (IS_DEBUG == 0) {
                  DEBUG_PRINT("%s(): exit .display thread switch display close ...\n",
                              "display_thread_handler");
                }
                else {
                  handle_heartbeat();
                }
              }
              _DAT_2001d447 = 0;
              if (local_3e == 0) {
                if (3 < LOG_LEVEL) {
                  pcVar5 = "%s(): exit .received command without screen ID\n";
LAB_000492ac:
                  if (IS_DEBUG == 0) {
                    DEBUG_PRINT(pcVar5,"display_thread_handler");
                  }
                  else {
                    handle_heartbeat();
                  }
                }
              }
              else {
                if (local_3e != 2) goto switchD_00049404_caseD_6;
                if ((local_3c & 0xff) == 1) {
                  if (3 < LOG_LEVEL) {
                    if (IS_DEBUG == 0) {
                      DEBUG_PRINT("%s(): exit.USE screen ID %d\n","display_thread_handler",
                                  local_3c >> 8 & 0xff);
                    }
                    else {
                      handle_heartbeat();
                    }
                  }
                  uVar7 = 2;
                  goto LAB_000492e8;
                }
                if (0 < LOG_LEVEL) {
                  pcVar5 = "%s(): exit .screen ID message parampter error!\n";
                  goto LAB_000492ac;
                }
              }
              uVar7 = 2;
              uVar6 = *(undefined1 *)(param_1 + 0xd5);
              goto LAB_000492ee;
            }
          }
          goto switchD_00049404_caseD_6;
        }
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): unknow display thread state\n","display_thread_handler");
          }
          else {
            handle_heartbeat();
          }
        }
        display_reflash_handler(param_1,*(undefined1 *)(param_1 + 0xd5),iVar8,2);
      }
LAB_000495ba:
      initialize_jbd_display_system_with_memory_and_commands(0);
      setup_font_rendering_system();
      _DAT_2001d447 = 0;
    }
switchD_00049404_caseD_6:
    call_function_conditionally_with_flag();
  } while( true );
}


