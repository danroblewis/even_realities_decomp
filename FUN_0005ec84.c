/*
 * Function: FUN_0005ec84
 * Entry:    0005ec84
 * Prototype: undefined FUN_0005ec84()
 */


void FUN_0005ec84(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  
  if (param_2 < param_1) {
    bVar4 = param_2 + param_3 <= param_1;
  }
  else {
    if (param_1 == param_2) goto LAB_0005ec94;
    bVar4 = param_1 + param_3 <= param_2;
  }
  if (bVar4) {
    puVar1 = param_1;
    puVar3 = param_2 + param_3 + -1;
    do {
      puVar2 = puVar1 + 1;
      *puVar1 = *puVar3;
      puVar1 = puVar2;
      puVar3 = puVar3 + -1;
    } while (param_1 + param_3 != puVar2);
    return;
  }
LAB_0005ec94:
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
               "((psrc < pdst && (psrc + length) <= pdst) || (psrc > pdst && (pdst + length) <= psrc))"
               ,"WEST_TOPDIR/zephyr/include/zephyr/sys/byteorder.h",0x215);
  DEBUG_PRINT2("\tSource and destination buffers must not overlap\n");
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/sys/byteorder.h",0x215);
}


