/*
 * Function: FUN_00030754
 * Entry:    00030754
 * Prototype: undefined FUN_00030754()
 */


undefined4 FUN_00030754(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  
  iVar1 = FUN_000302cc();
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  if (param_1 == 0) {
    local_38 = param_1;
    iVar1 = FUN_000302f8(0x1ba8,&local_38);
    if (iVar1 < 0) {
      return 0;
    }
    if (local_38 == 0x6000007) {
      return 0;
    }
  }
  local_4c = 0;
  local_44 = 0;
  local_38 = 0;
  iVar1 = FUN_00030178(0x4408,0x14);
  if (iVar1 == 0) {
    FUN_0003016c(1);
    iVar1 = 200;
    while (uVar2 = FUN_000302f8(0x4410,&local_38), uVar2 == 0) {
      if ((int)(local_38 << 2) < 0) {
        local_40 = uVar2;
        local_3c = uVar2;
        local_38 = uVar2;
        iVar1 = FUN_000302f8(0x1c30,&local_40);
        if ((((iVar1 == 0) && (iVar1 = FUN_000302f8(0x1c34,&local_3c), iVar1 == 0)) &&
            (iVar1 = FUN_00030178(0xff20,0x3c00f091), iVar1 == 0)) &&
           ((iVar1 = FUN_00030178(0x4820,4), iVar1 == 0 &&
            (iVar1 = FUN_0007d05e(&local_38,0x7fc), iVar1 == 0)))) {
          uVar2 = FUN_0007cf34(&DAT_000a49ed,0x1b9c,0x37f8);
          local_48 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
          DAT_20019dad = 1;
          iVar1 = FUN_00030340(1,1,0,0);
          if (iVar1 == 0) {
            local_38 = 0x803f0010;
            DAT_20019dad = 2;
            uVar3 = FUN_00030340(2,2,&local_38,4);
            uVar2 = local_48;
            if (uVar3 == 0) {
              DAT_20019dad = 4;
              local_30 = 0x22202220;
              local_34 = 0xf83f0010;
              local_2c = local_48;
              local_40 = uVar3;
              local_3c = uVar3;
              local_38 = uVar3;
              iVar1 = FUN_00030340(1,2,&local_38,0x10);
              if (((iVar1 == 0) && (iVar1 = FUN_0007d05e(&local_40,0x3ff8), iVar1 == 0)) &&
                 ((iVar1 = FUN_0007d05e(&local_3c,0x3ffc), iVar1 == 0 &&
                  ((local_40 == 0x20222022 &&
                   (local_3c ==
                    (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                    uVar2 >> 0x18))))))) {
                uVar2 = 0x10002000;
                goto LAB_0003095a;
              }
            }
          }
        }
        break;
      }
      FUN_0003016c(1);
      bVar7 = iVar1 == 0;
      iVar1 = iVar1 + -1;
      if (bVar7) break;
    }
  }
  goto LAB_000307b6;
  while (uVar2 = uVar2 + 0x80, uVar2 != 0x10003f80) {
LAB_0003095a:
    local_38 = CONCAT22((ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff,0x10);
    DAT_20019dad = 2;
    iVar1 = FUN_00030340(2,2,&local_38,4);
    if (iVar1 != 0) goto LAB_000307b6;
  }
  cVar6 = '\x01';
  iVar1 = 0x10002000;
  DAT_20019dad = 3;
  do {
    puVar4 = (undefined2 *)malloc_maybe(0x108);
    if (puVar4 == (undefined2 *)0x0) goto LAB_000307b6;
    fill_memory_buffer(puVar4,1,0x108);
    puVar4[2] = 0x10;
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 1) = 0;
    *(char *)(puVar4 + 3) = (char)((uint)iVar1 >> 8);
    *(undefined1 *)((int)puVar4 + 7) = 0;
    *(char *)((int)puVar4 + 3) = cVar6;
    memcpy(puVar4 + 4,iVar1 + -0xff5d613,0x100);
    iVar5 = FUN_00030340(1,2,puVar4,0x108);
    if (iVar5 != 0) goto LAB_000307c8;
    FUN_00076d7c(puVar4);
    iVar1 = iVar1 + 0x100;
    cVar6 = cVar6 + '\x01';
  } while (iVar1 != 0x10003b00);
  puVar4 = (undefined2 *)malloc_maybe(0xa4);
  if (puVar4 != (undefined2 *)0x0) {
    fill_memory_buffer((int)puVar4 + 1,1,0xa3);
    *(undefined4 *)(puVar4 + 2) = 0x3b0010;
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 1) = 0;
    *(char *)((int)puVar4 + 3) = cVar6;
    memcpy(puVar4 + 4,&LAB_000a64ec_1,0x9c);
    iVar1 = FUN_00030340(1,2,puVar4,0xa4);
    if (iVar1 == 0) {
      FUN_00076d7c(puVar4);
      DAT_20019dad = 6;
      iVar1 = 10;
      FUN_00030178(0x4444,0x10000);
      FUN_00030178(0xff20,0x3c00ffff);
      FUN_000302f8(0x4744,&local_38);
      FUN_00030178(0x4744,local_38 & 0xffffff);
      FUN_00030178(0xff20,0x3c00f011);
      FUN_00030178(0x4444,0);
      FUN_0003016c(0x19);
      local_38 = 0;
      do {
        iVar5 = FUN_000302f8(0x4410,&local_38);
        if (iVar5 != 0) break;
        if ((int)(local_38 << 0x1f) < 0) {
          return 0;
        }
        FUN_0003016c(1);
        bVar7 = iVar1 != 0;
        iVar1 = iVar1 + -1;
      } while (bVar7);
    }
    else {
LAB_000307c8:
      FUN_00076d7c(puVar4);
    }
  }
LAB_000307b6:
  iVar1 = FUN_00030178(0xff20,0x3c00f091);
  if ((((iVar1 == 0) && (iVar1 = FUN_000302f8(0x4748,&local_44), iVar1 == 0)) &&
      ((local_44 == 0 || (iVar1 = FUN_00030178(0x4748,0), iVar1 == 0)))) &&
     (((iVar1 = FUN_000302f8(0x4744,&local_4c), iVar1 == 0 &&
       (((local_4c >> 0x18 == 0 || (iVar1 = FUN_00030178(0x4744,local_4c & 0xffffff), iVar1 == 0))
        && (iVar1 = FUN_00030178(0xff20,0x3c00f011), iVar1 == 0)))) && (param_1 != 1)))) {
    return 0xfffffffd;
  }
  return 0xffffffff;
}


