/*
 * Function: FUN_000644f8
 * Entry:    000644f8
 * Prototype: undefined FUN_000644f8()
 */


undefined4 FUN_000644f8(byte *param_1,int *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  undefined3 local_2c;
  undefined1 uStack_29;
  undefined4 uStack_28;
  
  iVar4 = 0x2222;
  _local_2c = CONCAT13((char)((uint)param_2 >> 0x18),0x2222);
  if (param_2 != (int *)0x0) {
    uStack_28 = param_3;
    if (param_1 == (byte *)0x0) {
      iVar4 = FUN_00084f58(param_2,3,0x2222,0,0);
      if (iVar4 != 0) {
        safe_string_copy_with_padding(iVar4,&local_2c,param_2[1] - param_2[2]);
        return 1;
      }
    }
    else {
      iVar7 = 0;
      pbVar6 = param_1;
LAB_00064522:
      while( true ) {
        pbVar3 = pbVar6 + 1;
        bVar5 = *pbVar6;
        if (bVar5 == 0) break;
        pbVar6 = pbVar3;
        if (0x22 < bVar5) goto LAB_000645a2;
        if (bVar5 < 8) {
LAB_000645ac:
          iVar7 = iVar7 + 5;
        }
        else {
          iVar4 = (0x4000037U >> (uint)(byte)(bVar5 - 8)) << 0x1f;
          if (iVar4 < 0) goto LAB_0006459c;
          if (bVar5 < 0x20) goto LAB_000645ac;
        }
      }
      pbVar6 = pbVar6 + (iVar7 - (int)param_1);
      puVar1 = (undefined1 *)FUN_00084f58(param_2,pbVar6 + 3,iVar4,0,param_1);
      if (puVar1 != (undefined1 *)0x0) {
        pbVar3 = puVar1 + 1;
        *puVar1 = 0x22;
        if (iVar7 == 0) {
          memcpy(pbVar3,param_1,pbVar6);
          puVar1[(int)(pbVar6 + 1)] = 0x22;
          puVar1[(int)(pbVar6 + 2)] = 0;
        }
        else {
          param_1 = param_1 + -1;
          while( true ) {
            param_1 = param_1 + 1;
            bVar5 = *param_1;
            if (bVar5 == 0) break;
            if (((bVar5 < 0x20) || (bVar5 == 0x22)) || (bVar5 == 0x5c)) {
              pbVar2 = pbVar3 + 1;
              *pbVar3 = 0x5c;
              bVar5 = *param_1;
              if (bVar5 < 0xe) {
                switch(bVar5) {
                case 8:
                  bVar5 = 0x62;
                  break;
                case 9:
                  bVar5 = 0x74;
                  break;
                case 10:
                  bVar5 = 0x6e;
                  break;
                default:
switchD_000645f8_caseD_b:
                  FUN_00077914(pbVar2,param_2[1] - ((int)pbVar2 - *param_2),"u%04x");
                  pbVar2 = pbVar3 + 5;
                  goto LAB_000645da;
                case 0xc:
                  bVar5 = 0x66;
                  break;
                case 0xd:
                  bVar5 = 0x72;
                }
              }
              else if ((bVar5 != 0x22) && (bVar5 != 0x5c)) goto switchD_000645f8_caseD_b;
              pbVar3[1] = bVar5;
            }
            else {
              *pbVar3 = bVar5;
              pbVar2 = pbVar3;
            }
LAB_000645da:
            pbVar3 = pbVar2 + 1;
          }
          puVar1[(int)(pbVar6 + 1)] = 0x22;
          puVar1[(int)(pbVar6 + 2)] = 0;
        }
        return 1;
      }
    }
  }
  return 0;
LAB_000645a2:
  if (bVar5 == 0x5c) {
LAB_0006459c:
    iVar7 = iVar7 + 1;
  }
  goto LAB_00064522;
}


