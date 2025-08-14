/*
 * Function: FUN_000591a0
 * Entry:    000591a0
 * Prototype: undefined FUN_000591a0()
 */


undefined4 FUN_000591a0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 local_44 [2];
  undefined2 local_42;
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  undefined1 *puStack_28;
  int local_24;
  char *local_20;
  undefined4 local_1c;
  
  uVar6 = *(short *)(param_2 + 0x10) - 4U & 0xff;
  if ((uVar6 != 2) && (uVar6 != 0x10)) {
    return 4;
  }
  puVar2 = (ushort *)FUN_0005f594(param_2 + 0xc,4);
  uVar5 = *puVar2;
  uVar1 = puVar2[1];
  iVar3 = FUN_00080d9a(auStack_40,puVar2 + 2,uVar6);
  if (iVar3 == 0) {
    return 0xe;
  }
  if (uVar5 != 0) {
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else if (uVar5 <= uVar1) {
      local_44[0] = 0;
      local_42 = 0x2800;
      iVar3 = FUN_00080d3e(auStack_40,local_44);
      if (iVar3 != 0) {
        uVar6 = (ushort)local_2c;
        local_2c = CONCAT22(0x2801,uVar6 & 0xff00);
        iVar3 = FUN_00080d3e(auStack_40,&local_2c);
        if (iVar3 != 0) {
          uVar4 = 0x10;
          goto LAB_00059274;
        }
      }
      fill_memory_buffer(&local_2c,0,0x14);
      local_24 = FUN_00058f34(param_1,0x11,1);
      if (local_24 == 0) {
        return 0x11;
      }
      local_2c = param_1;
      puStack_28 = auStack_40;
      local_20 = (char *)FUN_0005f5d0(local_24 + 0xc,1);
      *local_20 = '\0';
      local_1c = 0;
      FUN_00081cee(uVar5,uVar1,0x58751,&local_2c);
      if (*local_20 != '\0') {
        FUN_000821a4(param_1,local_24);
        return 0;
      }
      FUN_0005833c(*(undefined4 *)(local_24 + 0x18));
      FUN_0005f24c(local_24);
      uVar4 = 10;
      goto LAB_00059274;
    }
  }
  uVar4 = 1;
LAB_00059274:
  FUN_000821f4(param_1,0x10,uVar5,uVar4);
  return 0;
}


