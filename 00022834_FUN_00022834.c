/*
 * Function: FUN_00022834
 * Entry:    00022834
 * Prototype: undefined FUN_00022834()
 */


int FUN_00022834(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *format_string;
  code *pcVar3;
  int iVar4;
  undefined4 local_1028;
  undefined1 auStack_1024 [4096];
  
  local_1028 = 0;
  iVar4 = 1;
  fill_memory_buffer(auStack_1024,0,0xffc);
  do {
    iVar1 = FUN_0008638c(&DAT_00087bf0);
    if (iVar1 == 0) {
      DEBUG_PRINT(" [%s] device not ready.\n","mx25r6435f@0");
      iVar1 = -1;
    }
    else {
      iVar1 = get_work_mode();
      pcVar3 = *(code **)(iVar1 + 0x1030);
      uVar2 = get_work_mode();
      iVar1 = (*pcVar3)(uVar2,param_1,&local_1028,0x1000);
      if (iVar1 == 0) {
        iVar1 = memcmp_byte_arrays(param_2,&local_1028,param_3);
        if (iVar1 == 0) {
          DEBUG_PRINT("write font data and read data is same, exit\n");
          return 0;
        }
        iVar1 = get_work_mode();
        pcVar3 = *(code **)(iVar1 + 0x1038);
        uVar2 = get_work_mode();
        iVar1 = (*pcVar3)(uVar2,param_1,0x1000);
        if (iVar1 == 0) {
          iVar1 = get_work_mode();
          pcVar3 = *(code **)(iVar1 + 0x1034);
          uVar2 = get_work_mode();
          iVar1 = (*pcVar3)(uVar2,param_1,param_2,param_3);
          if (iVar1 == 0) {
            iVar1 = get_work_mode();
            pcVar3 = *(code **)(iVar1 + 0x1030);
            uVar2 = get_work_mode();
            iVar1 = (*pcVar3)(uVar2,param_1,&local_1028,0x1000);
            if (iVar1 == 0) {
              iVar1 = memcmp_byte_arrays(param_2,&local_1028,param_3);
              if (iVar1 == 0) {
                return 0;
              }
              DEBUG_PRINT("flash verify font failed\n");
              iVar1 = 1;
              goto LAB_00022874;
            }
            format_string = "Flash read font failed! %d\n";
          }
          else {
            format_string = "Flash write font failed! %d\n";
          }
        }
        else {
          format_string = "Flash erase font failed! %d\n";
        }
        DEBUG_PRINT(format_string,iVar1);
      }
      else {
        DEBUG_PRINT("Flash read font failed! %d\n",iVar1);
      }
    }
LAB_00022874:
    iVar4 = iVar4 + 1;
    if (iVar4 == 0xb) {
      return iVar1;
    }
    get_schedule_timing(0xccd,0);
  } while( true );
}


