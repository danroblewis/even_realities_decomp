/*
 * Function: FUN_0005a5bc
 * Entry:    0005a5bc
 * Prototype: undefined FUN_0005a5bc(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5)
 */


int FUN_0005a5bc(int param_1,undefined4 param_2,byte *param_3,int param_4,ushort param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 local_20;
  char *local_1c;
  
  if (param_5 < 2) {
    if ((int)((uint)param_5 + param_4) < 2) {
      puVar1 = (undefined1 *)FUN_00059c04();
      if ((puVar1 == (undefined1 *)0x0) &&
         (puVar1 = (undefined1 *)FUN_00059c04(), puVar1 == (undefined1 *)0x0)) {
        param_4 = -0x11;
        local_1c = "No space to store Client Supported Features";
        local_20 = 2;
        FUN_00082a42(&DAT_00088128,0x1080,&local_20);
      }
      else {
        if (param_4 != 0) {
          uVar2 = 0;
          do {
            if (((int)((uint)((byte)puVar1[8] >> (uVar2 & 0xff)) << 0x1f) < 0) &&
               (-1 < (int)((uint)(*param_3 >> (uVar2 & 0xff)) << 0x1f))) {
              return -0x13;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 != 3);
          puVar1[8] = puVar1[8] | *param_3 & 7;
        }
        FUN_000828da(puVar1 + 1,param_1 + 0x90);
        *puVar1 = *(undefined1 *)(param_1 + 8);
        FUN_00082bb8(puVar1,1);
      }
    }
    else {
      param_4 = -0xd;
    }
  }
  else {
    param_4 = -7;
  }
  return param_4;
}


