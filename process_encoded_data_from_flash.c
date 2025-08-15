/*
 * Function: process_encoded_data_from_flash
 * Entry:    000365ec
 * Prototype: undefined process_encoded_data_from_flash()
 */


/* WARNING: Type propagation algorithm not settling */

void process_encoded_data_from_flash(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 local_54;
  undefined4 local_50 [2];
  undefined1 auStack_48 [6];
  short local_42;
  
  puVar1 = (undefined4 *)malloc_maybe(0x50);
  if (puVar1 == (undefined4 *)0x0) {
    DEBUG_PRINT("[%s-%d]malloc error \n","get_demo_image_source_from_flash",0x54);
    return;
  }
  fill_memory_buffer(puVar1,0,0x50);
  iVar2 = get_work_mode();
  pcVar11 = *(code **)(iVar2 + 0x1030);
  uVar3 = get_work_mode();
  iVar2 = (*pcVar11)(uVar3,0x1c0000,puVar1,0x50);
  if (iVar2 == 0) {
    local_60 = *puVar1;
    uStack_5c = puVar1[1];
    uStack_58 = puVar1[2];
    local_54 = (undefined2)puVar1[3];
    iVar2 = compare_string_offsets(&local_60,&DAT_000a8da5,2);
    if (iVar2 == 0) {
      puVar8 = (undefined4 *)((int)puVar1 + 0xe);
      puVar12 = local_50;
      do {
        uVar3 = *puVar8;
        uVar7 = puVar8[1];
        puVar8 = puVar8 + 2;
        *puVar12 = uVar3;
        puVar12[1] = uVar7;
        puVar12 = puVar12 + 2;
      } while (puVar8 != (undefined4 *)((int)puVar1 + 0x36));
      iVar2 = dereference_pointer((int)&uStack_58 + 2);
      iVar4 = dereference_pointer(local_50 + 1);
      iVar5 = dereference_pointer(auStack_48);
      if (local_42 == 1) {
        iVar9 = iVar4 + 7;
        BMP_PIXEL_COUNTER = 0;
        if (iVar9 < 0) {
          iVar9 = iVar4 + 0xe;
        }
        BMP_ROW_COUNTER = 0;
        iVar10 = iVar4 + 0x1f;
        if (iVar10 < 0) {
          iVar10 = iVar4 + 0x3e;
        }
        iVar13 = iVar2 + 0x1c0000 + (iVar5 + -1) * (iVar10 >> 5) * 4;
        for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
          BMP_PIXEL_COUNTER = 0;
          fill_memory_buffer(puVar1,0,0x50);
          iVar6 = get_work_mode();
          pcVar11 = *(code **)(iVar6 + 0x1030);
          uVar3 = get_work_mode();
          iVar6 = (*pcVar11)(uVar3,iVar13,puVar1,iVar9 >> 3);
          if (iVar6 != 0) {
            uVar3 = 0x7e;
            goto LAB_00036630;
          }
          for (iVar6 = 0; iVar6 < iVar9 >> 3; iVar6 = iVar6 + 1) {
            encode_data_to_byte_pattern(~*(byte *)((int)puVar1 + iVar6),iVar4);
          }
          if (BMP_PROCESSED_DATA != 0) {
            BMP_ROW_COUNTER = 0;
            iVar6 = get_work_mode();
            memcpy(*(undefined4 *)(iVar6 + iVar2 * 4 + 0xb90),BMP_PROCESSED_DATA,0x140);
          }
          iVar13 = iVar13 + (iVar10 >> 5) * -4;
        }
      }
      else {
        printf_format_string_with_buffer("Unsupported bit depth - %d\r\n");
      }
    }
    else {
      DEBUG_PRINT("File is not BMP format \n");
    }
  }
  else {
    uVar3 = 0x5a;
LAB_00036630:
    DEBUG_PRINT("[%s-%d] read pic from flash failed !\n","get_demo_image_source_from_flash",uVar3);
  }
  call_data_verification_handler(puVar1);
  return;
}


