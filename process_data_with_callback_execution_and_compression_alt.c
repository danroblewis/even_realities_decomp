/*
 * Function: process_data_with_callback_execution_and_compression_alt
 * Entry:    000531e4
 * Prototype: undefined process_data_with_callback_execution_and_compression_alt()
 */


void process_data_with_callback_execution_and_compression_alt(char *param_1,char *param_2)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar8;
  undefined4 *puVar7;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    pcVar3 = param_2;
    puVar6 = &DAT_000f2cc8;
    do {
      puVar7 = puVar6 + 1;
      pcVar5 = pcVar3 + 4;
      *(undefined4 *)pcVar3 = *puVar6;
      pcVar3 = pcVar5;
      puVar6 = puVar7;
    } while (puVar7 != (undefined4 *)&UNK_000f2cd8);
    *pcVar5 = '\0';
    uVar8 = *(undefined4 *)(param_1 + 4);
    param_2[0xd] = (char)uVar8;
    param_2[0xf] = (char)((uint)uVar8 >> 0x10);
    param_2[0xe] = (char)((uint)uVar8 >> 8);
    param_2[0x10] = (char)((uint)uVar8 >> 0x18);
  }
  else if (cVar1 == '\x02') {
    pcVar3 = param_1;
    do {
      pcVar5 = pcVar3 + 4;
      pcVar4 = param_2 + 4;
      *(undefined4 *)param_2 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar5;
      param_2 = pcVar4;
    } while (pcVar5 != param_1 + 0x10);
    *pcVar4 = *pcVar5;
  }
  else if (cVar1 == '\0') {
    pcVar3 = param_2;
    puVar6 = &DAT_000f2cc8;
    do {
      puVar7 = puVar6 + 1;
      pcVar5 = pcVar3 + 4;
      *(undefined4 *)pcVar3 = *puVar6;
      pcVar3 = pcVar5;
      puVar6 = puVar7;
    } while (puVar7 != (undefined4 *)&UNK_000f2cd8);
    *pcVar5 = '\0';
    uVar2 = *(undefined2 *)(param_1 + 2);
    param_2[0xd] = (char)uVar2;
    param_2[0xe] = (char)((ushort)uVar2 >> 8);
  }
  return;
}


