/*
 * Function: FUN_000476b4
 * Entry:    000476b4
 * Prototype: undefined FUN_000476b4()
 */


void FUN_000476b4(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_1c;
  
  local_1c = param_4 & 0xffffff00;
  uVar4 = param_2;
  iVar1 = jbd_get_manager();
  iVar3 = *(int *)(iVar1 + 0x344);
  iVar2 = (param_2 & 0x1ff) << 10;
  *(undefined1 *)(iVar3 + -5) = 2;
  *(byte *)(iVar3 + -3) = (byte)((uint)(param_1 << 0x16) >> 0x1e) | (byte)((uint)iVar2 >> 8);
  *(char *)(iVar3 + -4) = (char)((uint)iVar2 >> 0x10);
  *(char *)(iVar3 + -2) = (char)param_1;
  *(undefined1 *)(iVar3 + -1) = 0xff;
  jbd_spi_command(0xffffffff,0xffffffff);
  (**(code **)(*(int *)(iVar1 + 0x374) + 8))
            (*(int *)(iVar1 + 0x374),iVar3 + -5,param_4 + 6,&local_1c,1,uVar4,param_3);
  mutex_unlock_jbd_display();
  return;
}


