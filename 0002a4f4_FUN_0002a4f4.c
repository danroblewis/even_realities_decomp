/*
 * Function: FUN_0002a4f4
 * Entry:    0002a4f4
 * Prototype: undefined FUN_0002a4f4()
 */


void FUN_0002a4f4(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_r1;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_2c = param_2;
  uStack_28 = param_3;
  iVar3 = FUN_00086534(&DAT_20007b00,0,10,param_4,param_1);
  if (iVar3 == 0) {
    DAT_20018d88 = 1;
  }
  DEBUG_PRINT("[csh_debug_nfc] g_nfcMsgSemInitOk is %d \n",(uint)DAT_20018d88);
  iVar3 = 0;
LAB_0002a516:
  do {
    iVar4 = get_work_mode();
    if (*(char *)(iVar4 + 1) == '\b') {
      FUN_0002a4d8(10000);
      FUN_00032c0c();
      uVar5 = 0x667;
    }
    else {
      iVar4 = get_work_mode();
      if (*(char *)(iVar4 + 1) == '\x01') {
        uVar5 = 0x28000;
      }
      else {
        uVar10 = get_system_ready_state();
        uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if ((int)uVar10 != 1) {
          do {
            iVar4 = thunk_FUN_00072908(&DAT_20007b00,uVar5,0x18000,0);
            cVar2 = DAT_20018d94;
            if (iVar4 != 0) {
              DAT_20018d94 = cVar2;
              if ((DAT_20018d94 == '\0') && (iVar4 = get_work_mode(), *(char *)(iVar4 + 1) != '\b'))
              {
                uVar10 = FUN_0007cb2c();
                uVar7 = DAT_200040cc;
                uVar1 = DAT_200040c8;
                uVar11 = FUN_0007cb2c();
                uVar8 = (uint)((ulonglong)uVar11 >> 0x20);
                if ((DAT_200040cc <= uVar8 &&
                     (uint)((uint)uVar11 <= DAT_200040c8) <= DAT_200040cc - uVar8) &&
                   (uVar7 = (int)((ulonglong)uVar10 >> 0x20) - uVar7,
                   uVar8 = (uint)((uint)uVar10 < uVar1),
                   uVar7 != uVar8 || uVar7 - uVar8 < (uint)(3000 < (uint)uVar10 - uVar1))) {
                  FUN_0002eb28(0,0);
                  FUN_0002eb28(1,0);
                  DAT_20018d94 = cVar2;
                }
              }
              goto LAB_0002a516;
            }
            uStack_2c = uStack_2c & 0xffffff;
            uVar10 = FUN_0007cb2c();
            uVar7 = (uint)((ulonglong)uVar10 >> 0x20);
            bVar9 = (uint)uVar10 <= DAT_200040c8;
            if (DAT_200040cc <= uVar7 && (uint)bVar9 <= DAT_200040cc - uVar7) {
              FUN_0002a4d8(0,uVar7,DAT_200040c8,(DAT_200040cc - uVar7) - (uint)!bVar9);
            }
            FUN_0002563c((int)&uStack_2c + 3);
            if ((int)((uStack_2c >> 0x18) << 0x1a) < 0) {
              FUN_0002560c();
              break;
            }
            iVar3 = iVar3 + 1;
            uVar5 = extraout_r1;
          } while (iVar3 < 10);
          FUN_0002eb28(0,1);
          iVar3 = 0;
          goto LAB_0002a516;
        }
        iVar4 = FUN_0002560c();
        iVar6 = get_work_mode();
        if (*(char *)(iVar6 + 0x1088) == '\x01') {
          iVar4 = FUN_00033340();
        }
        get_schedule_timing(0x1334,0);
        if (iVar4 == 0) {
          FUN_0003271c();
        }
        uVar5 = 0x1334;
      }
    }
    get_schedule_timing(uVar5,0);
  } while( true );
}


