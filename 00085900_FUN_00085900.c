/*
 * Function: FUN_00085900
 * Entry:    00085900
 * Prototype: undefined FUN_00085900()
 */


undefined4 * FUN_00085900(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)*param_1;
  do {
    if (param_1 == puVar2) {
      return (undefined4 *)0x0;
    }
    puVar3 = puVar2 + -0xd;
    if ((param_3 != -1) && (puVar2[-4] == param_3)) {
      return puVar3;
    }
    while (param_2 != 0) {
      while( true ) {
        iVar1 = compare_string_offsets(puVar3,param_2,0x20);
        if (iVar1 != 0) goto LAB_00085970;
        if ((param_4 != -1) && (puVar3[10] == param_4)) {
          return puVar3;
        }
        if (param_3 == -1) break;
        puVar2 = (undefined4 *)*puVar2;
        if (puVar2 == param_1) {
          return (undefined4 *)0x0;
        }
        puVar3 = puVar2 + -0xd;
        if (param_3 == puVar2[-4]) {
          return puVar3;
        }
      }
      if (puVar3[10] == -1) {
        return puVar3;
      }
      puVar2 = (undefined4 *)*puVar2;
      if (puVar2 == param_1) {
        return (undefined4 *)0x0;
      }
      puVar3 = puVar2 + -0xd;
    }
LAB_00085970:
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}


