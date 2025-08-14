/*
 * Function: FUN_00080970
 * Entry:    00080970
 * Prototype: undefined FUN_00080970()
 */


uint FUN_00080970(byte *param_1,byte *param_2)

{
  if (*param_2 <= *param_1) {
    if (*param_2 < *param_1) {
      return 1;
    }
    if (param_2[1] <= param_1[1]) {
      if (param_2[1] < param_1[1]) {
        return 1;
      }
      if (*(ushort *)(param_2 + 2) <= *(ushort *)(param_1 + 2)) {
        return (uint)(*(ushort *)(param_2 + 2) < *(ushort *)(param_1 + 2));
      }
    }
  }
  return 0xffffffff;
}


