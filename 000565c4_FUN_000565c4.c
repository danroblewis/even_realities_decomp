/*
 * Function: FUN_000565c4
 * Entry:    000565c4
 * Prototype: undefined FUN_000565c4()
 */


undefined4 FUN_000565c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_000868aa(&DAT_20002990);
  FUN_00075574(param_1,1,0,&DAT_20002990);
  if (DAT_20006208 != 0) {
    if ((DAT_20006145 == '\0') &&
       (iVar1 = FUN_000813b4(&DAT_2000613c,0xffffffbf), iVar1 << 0x19 < 0)) {
      FUN_00056300(&DAT_20006138);
    }
    else if ((DAT_20006145 == '\a') && (DAT_20002104 != 0)) {
      if ((DAT_20006170 == 0) || (DAT_20002110 != 0)) {
        uVar2 = 4;
        puVar3 = &DAT_20006170;
      }
      else {
        uVar2 = 2;
        puVar3 = (undefined4 *)&DAT_20002108;
      }
      FUN_00075574(param_1 + 0x14,uVar2,0,puVar3);
      *(undefined1 *)(param_1 + 0x20) = 1;
      return 2;
    }
  }
  return 1;
}


