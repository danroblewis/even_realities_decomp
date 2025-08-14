/*
 * Function: FUN_00062644
 * Entry:    00062644
 * Prototype: undefined FUN_00062644()
 */


int FUN_00062644(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  int *piVar7;
  undefined4 extraout_s1;
  undefined8 uVar8;
  ushort local_32 [3];
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  iVar1 = FUN_0008638c(*puVar5);
  if (iVar1 == 0) {
    iVar1 = -0x13;
  }
  else {
    iVar1 = FUN_00083dc8(*puVar5,5,10,*(char *)((int)puVar5 + 0x2e) + '\x01');
    if (iVar1 == 0) {
      cVar6 = '\x10';
      piVar7 = puVar5 + 5;
      do {
        piVar7 = piVar7 + 1;
        if (*piVar7 != 0x7fffffff) {
          uVar2 = FUN_0000d848((1.0 / ((float)(longlong)*piVar7 / 1e+06 + 273.15) - 0.0033540165) *
                               (float)*(ushort *)(puVar5 + 0xb));
          iVar4 = puVar5[10];
          uVar2 = FUN_00012c80(uVar2);
          uVar8 = FUN_0000d804(iVar4);
          FUN_0000d8f8((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar2,extraout_s1);
          iVar1 = FUN_0000dea8();
          uVar3 = (uint)(iVar1 << 10) / (uint)(iVar4 + iVar1);
          iVar1 = FUN_00083de6(*puVar5,3,cVar6,(uVar3 << 0x16) >> 0x18,uVar3 & 3);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        cVar6 = cVar6 + '\x02';
      } while (cVar6 != '\x18');
      iVar1 = FUN_00084774(&DAT_0008ba94,puVar5[1],puVar5[1],local_32);
      if (iVar1 != -0x16) {
        iVar1 = FUN_00083dc8(*puVar5,3,0xc,(undefined1)local_32[0]);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_00084774(&DAT_0008ba94,puVar5[2],puVar5[2],local_32);
        if (iVar1 != -0x16) {
          iVar1 = FUN_00083dc8(*puVar5,3,0xd,(undefined1)local_32[0]);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_00084602(&DAT_0008ba88,puVar5[3] + -2000,puVar5[3],local_32);
          if (iVar1 != -0x16) {
            iVar1 = FUN_00083de6(*puVar5,3,8,((uint)local_32[0] << 0x17) >> 0x18,local_32[0] & 1);
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar1 = FUN_00084602(&DAT_0008ba7c,puVar5[4] + -0xc9e,puVar5[4],local_32);
            if (iVar1 != -0x16) {
              iVar1 = FUN_00083de6(*puVar5,3,10,((uint)local_32[0] << 0x17) >> 0x18,local_32[0] & 1)
              ;
              if (iVar1 != 0) {
                return iVar1;
              }
              iVar1 = FUN_00084774(&DAT_0008ba64,puVar5[5],puVar5[5],local_32);
              if (iVar1 != -0x16) {
                iVar1 = FUN_00083dc8(*puVar5,2,2,(undefined1)local_32[0]);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_00083dc8(*puVar5,3,0xe,*(undefined1 *)((int)puVar5 + 0x2f));
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_00083dc8(*puVar5,3,0xf,*(undefined1 *)(puVar5 + 0xc));
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_00083dc8(*puVar5,5,0x24,1);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_00083dc8(*puVar5,5,0,1);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_00083dc8(*puVar5,5,1);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_00083dc8(*puVar5,5,0xc,1);
                if (iVar1 != 0) {
                  return iVar1;
                }
                if ((*(char *)((int)puVar5 + 0x32) != '\0') &&
                   (iVar1 = FUN_00083dc8(*puVar5,3,0x50,1), iVar1 != 0)) {
                  return iVar1;
                }
                if ((*(char *)((int)puVar5 + 0x33) != '\0') &&
                   (iVar1 = FUN_00083dc8(*puVar5,3,6,1), iVar1 != 0)) {
                  return iVar1;
                }
                if (*(char *)((int)puVar5 + 0x31) == '\0') {
                  return 0;
                }
                iVar1 = FUN_00083dc8(*puVar5,3,4,1);
                return iVar1;
              }
            }
          }
        }
      }
      iVar1 = -0x16;
    }
  }
  return iVar1;
}


