/*
 * Function: FUN_00064b64
 * Entry:    00064b64
 * Prototype: undefined FUN_00064b64()
 */


int FUN_00064b64(undefined4 *******param_1,uint param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *******pppppppuVar4;
  undefined4 ******local_3c;
  uint local_38;
  uint local_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  fill_memory_buffer(&local_3c,0,0x1c);
  DAT_2000b314 = (undefined4 *******)0x0;
  DAT_2000b318 = 0;
  if (param_1 != (undefined4 *******)0x0) {
    if (param_2 != 0) {
      uStack_24 = SENSOR_CALLBACK_FUNCTION;
      uStack_28 = SENSOR_INIT_FUNCTION;
      uStack_2c = JSON_ALLOC_TPL;
      local_3c = param_1;
      local_38 = param_2;
      iVar1 = json_alloc();
      if (iVar1 != 0) {
        pppppppuVar4 = (undefined4 *******)local_3c;
        if ((undefined4 *******)local_3c != (undefined4 *******)0x0) {
          if (local_34 == 0) {
            if ((4 < local_38) &&
               (iVar2 = compare_string_offsets(local_3c,&DAT_000f6999,3), iVar2 == 0)) {
              local_34 = 3;
            }
            pppppppuVar4 = &local_3c;
          }
          else {
            pppppppuVar4 = (undefined4 *******)0x0;
          }
        }
        uVar3 = FUN_00084ed8(pppppppuVar4);
        iVar2 = parse_json_value(iVar1,uVar3);
        if ((iVar2 != 0) &&
           ((param_4 == 0 ||
            ((FUN_00084ed8(&local_3c), local_34 < local_38 &&
             (*(char *)((int)local_3c + local_34) == '\0')))))) {
          if (param_3 == (int *)0x0) {
            return iVar1;
          }
          *param_3 = (int)local_3c + local_34;
          return iVar1;
        }
        cleanup_json_node(iVar1);
      }
    }
    if (local_38 <= local_34) {
      if (local_38 == 0) {
        local_34 = 0;
      }
      else {
        local_34 = local_38 - 1;
      }
    }
    DAT_2000b314 = param_1;
    DAT_2000b318 = local_34;
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_1 + local_34;
    }
  }
  return 0;
}


