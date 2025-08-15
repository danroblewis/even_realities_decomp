/*
 * Function: add_data_structure_to_linked_list
 * Entry:    00068170
 * Prototype: undefined __stdcall add_data_structure_to_linked_list(undefined4 data_structure)
 */


undefined4 add_data_structure_to_linked_list(undefined4 *data_structure)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (((data_structure == (undefined4 *)0x0) ||
      (pcVar3 = (char *)*data_structure, pcVar3 == (char *)0x0)) || (*pcVar3 == '\0')) {
    uVar5 = 0xffffffea;
  }
  else {
    iVar4 = search_data_structure_by_identifier(pcVar3,0);
    if (iVar4 == 0) {
      uVar5 = 0xffffffef;
    }
    else {
      data_structure[7] = data_structure + 7;
      data_structure[8] = data_structure + 7;
      puVar1 = DAT_2000b430;
      puVar2 = data_structure + 9;
      data_structure[10] = DAT_2000b430;
      DAT_2000b430 = puVar2;
      data_structure[9] = &DAT_2000b42c;
      *puVar1 = data_structure + 9;
      if ((6 < DAT_2000b424) && (LINKED_LIST_HEAD_POINTER != (code *)0x0)) {
        (*LINKED_LIST_HEAD_POINTER)(7,"registered %s bus\n",*data_structure);
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}


