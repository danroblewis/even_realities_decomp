/*
 * Function: handle_comprehensive_device_configuration
 * Entry:    000622a0
 * Prototype: undefined handle_comprehensive_device_configuration()
 */


undefined4 handle_comprehensive_device_configuration(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  bool bVar11;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  piVar6 = *(int **)(param_1 + 0x10);
  *piVar6 = param_1;
  iVar7 = *(int *)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 0x10);
  uStack_24 = param_2;
  uStack_20 = param_3;
  iVar2 = call_function_pointer_with_bit_manipulation(iVar7,0,param_3,piVar6,param_1);
  if (iVar2 < 0) {
    pcVar3 = "Failed to set user bank\r\n";
  }
  else {
    iVar2 = execute_callback_with_parameter_0xf(iVar7,(int)&uStack_24 + 2);
    if (iVar2 < 0) {
      pcVar3 = "Failed reading chip id\r\n";
    }
    else {
      DEBUG_PRINT("lsm6dso_init_chip chip id 0x%x\r\n",uStack_24 >> 0x10 & 0xff);
      uVar5 = uStack_24 >> 0x10 & 0xff;
      if (uVar5 != 0x6c) {
        pcVar3 = "Invalid chip id 0x%x\r\n";
LAB_000622e8:
        DEBUG_PRINT(pcVar3,uVar5);
        goto LAB_000622ec;
      }
      iVar2 = execute_multiple_callbacks_with_parameter_manipulation_and_result_accumulation
                        (iVar7,0x80);
      if (iVar2 < 0) {
        pcVar3 = "Failed to disable I3C\r\n";
      }
      else {
        iVar2 = process_callback_results_and_bit_manipulation(iVar7,(int)&uStack_24 + 3);
        if (-1 < iVar2) {
          if (uStack_24._3_1_ != '\0') {
            DEBUG_PRINT("Disable shub before reset\r\n");
            execute_multiple_operations_and_accumulate_results(iVar7,0);
            handle_ble_uart_packet_processing_completion(300);
          }
          iVar2 = execute_callback_with_parameter_processing_and_bit_0_manipulation(iVar7,1);
          if (iVar2 < 0) goto LAB_000622ec;
          handle_ble_uart_packet_processing_completion(100);
          DEBUG_PRINT("accel pm is %d\r\n",(uint)*(byte *)(iVar7 + 0x18));
          cVar4 = *(char *)(iVar7 + 0x18);
          if ((cVar4 != '\x01') && (cVar4 != '\x02')) {
            cVar4 = '\0';
          }
          process_device_config_data_with_bit_manipulation(iVar7,cVar4);
          uVar5 = *(byte *)(iVar7 + 0x1a) & 0x3f;
          DEBUG_PRINT("accel range is %d\r\n",uVar5);
          iVar10 = *(int *)(param_1 + 0x10);
          iVar2 = execute_callbacks_with_parameter_manipulation(*(undefined4 *)(param_1 + 4),uVar5);
          if (iVar2 < 0) {
            pcVar3 = "failed to set accelerometer range %d\r\n";
          }
          else {
            *(char *)(iVar10 + 0x1e) = (char)uVar5;
            bVar11 = -1 < *(char *)(iVar7 + 0x1a);
            lVar1 = CONCAT44(0x3d,(uint)*(ushort *)(&DAT_0009905e + uVar5 * 2));
            if (bVar11) {
              lVar1 = (ulonglong)(uint)*(ushort *)(&DAT_0009905e + uVar5 * 2) * 0x3d;
            }
            if (bVar11) {
              uVar5 = (uint)lVar1 >> 1;
            }
            else {
              uVar5 = (int)((ulonglong)lVar1 >> 0x20) * (uint)lVar1;
            }
            *(uint *)(iVar8 + 0xc) = uVar5;
            uVar5 = (uint)*(byte *)(iVar7 + 0x19);
            DEBUG_PRINT("accel odr is %d\r\n",uVar5);
            if (10 < uVar5) {
              iVar10 = 0x1a04;
            }
            uVar9 = (undefined2)iVar10;
            if (uVar5 < 0xb) {
              uVar9 = *(undefined2 *)(&DAT_00099066 + uVar5 * 2);
            }
            *(undefined2 *)(iVar8 + 0x1c) = uVar9;
            iVar10 = *(int *)(param_1 + 0x10);
            iVar2 = process_data_with_complex_bit_manipulation_and_callback_execution
                              (*(undefined4 *)(param_1 + 4),uVar5);
            if (iVar2 < 0) {
              pcVar3 = "failed to set accelerometer odr %d\r\n";
            }
            else {
              *(undefined2 *)(iVar10 + 0x1c) = uVar9;
              DEBUG_PRINT("gyro pm is %d\r\n",(uint)*(byte *)(iVar7 + 0x1b));
              cVar4 = *(char *)(iVar7 + 0x1b);
              if (cVar4 != '\x01') {
                cVar4 = '\0';
              }
              execute_callbacks_with_parameter_manipulation_callback_0x16(iVar7,cVar4);
              uVar5 = (uint)*(byte *)(iVar7 + 0x1d);
              DEBUG_PRINT("gyro range is %d\r\n",uVar5);
              iVar2 = execute_callbacks_with_parameter_manipulation_alt
                                (*(undefined4 *)(param_1 + 4),uVar5);
              if (iVar2 < 0) {
                pcVar3 = "failed to set gyroscope range %d\r\n";
              }
              else {
                *(uint *)(iVar8 + 0x18) = (uint)*(ushort *)(&DAT_00099042 + uVar5 * 2) * 0x1117;
                uVar5 = (uint)*(byte *)(iVar7 + 0x1c);
                DEBUG_PRINT("gyro odr is %d\r\n",uVar5);
                if (uVar5 < 0xb) {
                  uVar9 = *(undefined2 *)(&DAT_00099066 + uVar5 * 2);
                }
                else {
                  uVar9 = 0x1a04;
                }
                *(undefined2 *)(iVar8 + 0x20) = uVar9;
                iVar2 = process_complex_data_with_multiple_operations_alt
                                  (*(undefined4 *)(param_1 + 4),uVar5);
                if (-1 < iVar2) {
                  iVar2 = process_data_with_callback_execution_and_bit_manipulation_for_id_0xa
                                    (iVar7,0);
                  if (iVar2 < 0) {
                    pcVar3 = "failed to set FIFO mode\r\n";
                  }
                  else {
                    iVar2 = execute_callback_with_parameter_processing_and_bit_6_manipulation
                                      (iVar7,1);
                    if (-1 < iVar2) {
                      return 0;
                    }
                    pcVar3 = "failed to set BDU mode\r\n";
                  }
                  goto LAB_000622bc;
                }
                pcVar3 = "failed to set gyroscope odr %d\r\n";
              }
            }
          }
          goto LAB_000622e8;
        }
        pcVar3 = "Failed to get I2C_MASTER status\r\n";
      }
    }
  }
LAB_000622bc:
  DEBUG_PRINT(pcVar3);
LAB_000622ec:
  DEBUG_PRINT("failed to initialize chip\r\n");
  return 0;
}


