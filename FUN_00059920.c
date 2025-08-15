/*
 * Function: FUN_00059920
 * Entry:    00059920
 * Prototype: undefined FUN_00059920()
 */


void FUN_00059920(int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  uint local_58;
  char *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [32];
  
  puVar1 = (undefined1 *)FUN_00081526(**(undefined4 **)(param_1 + -0x160));
  switch(*puVar1) {
  case 0:
    pcVar2 = "public";
    break;
  case 1:
    pcVar2 = "random";
    break;
  case 2:
    pcVar2 = "public-id";
    break;
  case 3:
    pcVar2 = "random-id";
    break;
  default:
    FUN_0007ddbe(auStack_44,10,"0x%02x");
    goto LAB_00059950;
  }
  strcpy_safe(auStack_44,pcVar2);
LAB_00059950:
  local_50 = (undefined1 *)(uint)(byte)puVar1[1];
  local_54 = (char *)(uint)(byte)puVar1[2];
  local_58 = (uint)(byte)puVar1[3];
  local_4c = auStack_44;
  FUN_0007ddbe(auStack_38,0x1e,"%02X:%02X:%02X:%02X:%02X:%02X (%s)",puVar1[6],puVar1[5],puVar1[4]);
  local_54 = "ATT Timeout for device %s";
  local_4c = (undefined1 *)CONCAT22(local_4c._2_2_,0x200);
  local_58 = 0x1000003;
  local_50 = auStack_38;
  FUN_00081ddc(&DAT_00088100,0x1c40,&local_58);
  FUN_00059834(param_1 + -0x158);
  return;
}


