/*
 * Function: reverse_byte_order
 * Entry:    00083592
 * Prototype: undefined reverse_byte_order()
 */


void reverse_byte_order(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)(param_1 + -1);
  puVar2 = (undefined1 *)(param_1 + 0x10);
  do {
    puVar3 = puVar3 + 1;
    uVar1 = *puVar3;
    puVar2 = puVar2 + -1;
    *puVar3 = *puVar2;
    *puVar2 = uVar1;
  } while (puVar3 != (undefined1 *)(param_1 + 7));
  return;
}


