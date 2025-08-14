/*
 * Function: FUN_00083ede
 * Entry:    00083ede
 * Prototype: undefined FUN_00083ede()
 */


undefined4 FUN_00083ede(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint local_2c [2];
  
  puVar6 = param_1 + param_2;
  do {
    if (puVar6 == param_1) {
      return 0;
    }
    uVar2 = *param_1;
    uVar4 = uVar2 & 0x7f;
    uVar5 = (uVar2 << 0x13) >> 0x1c;
    if (uVar4 == 0x7f) {
      uVar4 = 0xffffffff;
    }
    local_2c[0] = uVar4;
    switch(uVar2 >> 0x10) {
    case 0:
      *(uint *)(param_3 + 0x50c) = uVar4;
      goto LAB_00083f46;
    case 1:
      *(uint *)(param_3 + 0x514) = uVar4;
      goto LAB_00083f54;
    case 2:
      *(uint *)(param_3 + 0x508) = uVar4;
      goto LAB_00083f46;
    case 3:
      *(uint *)(param_3 + 0x510) = uVar4;
      goto LAB_00083f54;
    default:
      return 0xffffff7a;
    case 0xb:
      *(uint *)(param_3 + 0x508) = uVar4;
      goto LAB_00083f6e;
    case 0xc:
      *(uint *)(param_3 + 0x50c) = uVar4;
LAB_00083f6e:
      if (uVar5 != 0) goto LAB_00083f54;
      if (uVar4 != 0xffffffff) {
        uVar5 = 6;
        uVar7 = 0;
        uVar2 = 0;
        goto LAB_00083ff4;
      }
      goto LAB_00083f4a;
    case 0x14:
      *(uint *)(param_3 + 0x540) = uVar4;
      if (uVar4 != 0xffffffff) goto LAB_00083f8e;
      goto LAB_00083f4a;
    case 0x15:
      *(uint *)(param_3 + 0x544) = uVar4;
LAB_00083f54:
      if (uVar4 != 0xffffffff) {
        uVar7 = 0;
        uVar2 = uVar7;
        goto LAB_00083ff4;
      }
      goto LAB_00083f4a;
    case 0x16:
      *(uint *)(param_3 + 0x560) = uVar4;
      goto LAB_00083fb0;
    case 0x17:
      *(uint *)(param_3 + 0x564) = uVar4;
      goto LAB_00083fb0;
    case 0x18:
      *(uint *)(param_3 + 0x568) = uVar4;
      goto LAB_00083fb0;
    case 0x19:
      *(uint *)(param_3 + 0x56c) = uVar4;
LAB_00083fb0:
      if (uVar4 != 0xffffffff) {
        if ((int)(*param_1 << 0x11) < 0) {
LAB_00083fc0:
          iVar1 = FUN_00061f64(local_2c);
          *(int *)(iVar1 + 8) = 1 << (local_2c[0] & 0xff);
        }
        else {
LAB_00083f8e:
          iVar1 = FUN_00061f64(local_2c);
          *(int *)(iVar1 + 0xc) = 1 << (local_2c[0] & 0xff);
        }
        uVar7 = 1;
        uVar2 = uVar7;
        goto LAB_00083ff4;
      }
      goto LAB_00083f4a;
    case 0x1d:
      *(uint *)(param_3 + 0x524) = uVar4;
      break;
    case 0x1e:
      *(uint *)(param_3 + 0x528) = uVar4;
LAB_00083f46:
      if (uVar4 != 0xffffffff) goto LAB_00083fc0;
      goto LAB_00083f4a;
    case 0x1f:
      *(uint *)(param_3 + 0x530) = uVar4;
      break;
    case 0x20:
      *(uint *)(param_3 + 0x534) = uVar4;
      break;
    case 0x21:
      *(uint *)(param_3 + 0x538) = uVar4;
      break;
    case 0x22:
      *(uint *)(param_3 + 0x53c) = uVar4;
    }
    if (uVar4 != 0xffffffff) {
      uVar7 = 0;
      uVar2 = 1;
LAB_00083ff4:
      uVar3 = *param_1;
      if ((uVar3 & 0x2000) != 0) {
        uVar2 = 1;
        uVar7 = 0;
      }
      local_2c[0] = uVar4;
      iVar1 = FUN_00061f64(local_2c);
      iVar1 = iVar1 + local_2c[0] * 4;
      *(uint *)(iVar1 + 0x200) =
           uVar5 << 8 | ((uVar3 << 0x17) >> 0x1e) << 2 | uVar7 |
           *(uint *)(iVar1 + 0x200) & 0xfffcf0f0 | uVar2 << 1;
    }
LAB_00083f4a:
    param_1 = param_1 + 1;
  } while( true );
}


