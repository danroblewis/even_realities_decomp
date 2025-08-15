/*
 * Function: process_command_table
 * Entry:    00080872
 * Prototype: undefined __stdcall process_command_table(undefined4 command_data, undefined4 command_table, undefined4 table_size, undefined4 processed_count)
 */


undefined4
process_command_table
          (undefined4 command_data,undefined4 *command_table,int table_size,int *processed_count)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_30;
  int iStack_2c;
  
  iVar2 = parse_ble_uart_packet_with_buffer_expansion();
  if (iVar2 != 0) {
    *processed_count = 0;
    puVar5 = command_table;
LAB_000808a2:
    do {
      iVar3 = parse_ble_uart_packet_and_advance_buffer(command_data,&local_30);
      iVar2 = iStack_2c;
      uVar1 = local_30;
      if (iVar3 == 0) break;
      for (iVar3 = 0; table_size != iVar3; iVar3 = iVar3 + 1) {
        if (command_table + table_size * 5 <= puVar5) {
          puVar5 = command_table;
        }
        if ((iVar2 == puVar5[1]) && (iVar4 = memcmp_byte_arrays(uVar1,*puVar5), iVar4 == 0)) {
          if (*(char *)(puVar5 + 4) != '\0') {
            return 0xffffff90;
          }
          iVar2 = (*(code *)puVar5[2])(command_data,puVar5[3]);
          if (iVar2 == 0) {
            return 0xffffffdd;
          }
          *(undefined1 *)(puVar5 + 4) = 1;
          puVar5 = puVar5 + 5;
          *processed_count = *processed_count + 1;
          goto LAB_000808a2;
        }
        puVar5 = puVar5 + 5;
      }
      iVar2 = parse_ble_uart_complex_packet_with_recursion(command_data,0);
    } while (iVar2 != 0);
    iVar2 = manage_complex_data_structure_with_state(command_data);
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0xffffffb3;
}


