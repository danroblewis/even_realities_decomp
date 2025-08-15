/*
 * Function: load_bmp_image_from_flash
 * Entry:    00036820
 * Prototype: undefined __stdcall load_bmp_image_from_flash(undefined4 bitmap_index)
 */


/* WARNING: Type propagation algorithm not settling */

void load_bmp_image_from_flash(uint bitmap_index)

{
  undefined4 *memory_buffer;
  int work_mode_ptr;
  undefined4 flash_read_result;
  int image_data_offset;
  int image_data_size;
  undefined4 temp_data;
  int extraout_r2;
  undefined4 *bmp_data_ptr;
  int row_offset;
  int col_offset;
  int pixel_count;
  int bit_depth;
  code *flash_read_func;
  undefined4 *temp_buffer;
  undefined8 image_dimensions;
  undefined4 bmp_header;
  undefined4 bmp_info;
  undefined4 bmp_colors;
  undefined2 bmp_planes;
  undefined4 color_table [2];
  undefined1 bit_depth_info [6];
  short bit_depth_flag;
  
  memory_buffer = (undefined4 *)malloc_maybe(0x50);
  if (memory_buffer == (undefined4 *)0x0) {
    DEBUG_PRINT("[%s-%d]malloc error \n","get_demo_image_source",0xd3);
    return;
  }
  fill_memory_buffer(memory_buffer,0,0x50);
  if (4 < bitmap_index) {
    DEBUG_PRINT("error imgIdx is %d,reset as zero !\n",bitmap_index);
    bitmap_index = 0;
  }
  work_mode_ptr = get_work_mode();
  flash_read_func = *(code **)(work_mode_ptr + 0x1030);
  flash_read_result = get_work_mode();
  pixel_count = bitmap_index * 0x3ebe + 0x180000;
  work_mode_ptr = (*flash_read_func)(flash_read_result,pixel_count,memory_buffer,0x50);
  if (work_mode_ptr == 0) {
    bmp_header = *memory_buffer;
    bmp_info = memory_buffer[1];
    bmp_colors = memory_buffer[2];
    bmp_planes = (undefined2)memory_buffer[3];
    work_mode_ptr = compare_string_offsets(&bmp_header,&DAT_000a8da5,2);
    if (work_mode_ptr == 0) {
      bmp_data_ptr = (undefined4 *)((int)memory_buffer + 0xe);
      temp_buffer = color_table;
      do {
        flash_read_result = *bmp_data_ptr;
        temp_data = bmp_data_ptr[1];
        bmp_data_ptr = bmp_data_ptr + 2;
        *temp_buffer = flash_read_result;
        temp_buffer[1] = temp_data;
        temp_buffer = temp_buffer + 2;
      } while (bmp_data_ptr != (undefined4 *)((int)memory_buffer + 0x36));
      image_dimensions = dereference_pointer((int)&bmp_colors + 2);
      work_mode_ptr =
           dereference_pointer(color_table + 1,(int)((ulonglong)image_dimensions >> 0x20),
                               (int)image_dimensions);
      image_data_offset = dereference_pointer(bit_depth_info);
      if (bit_depth_flag == 1) {
        row_offset = work_mode_ptr + 7;
        BMP_PIXEL_COUNTER = 0;
        if (row_offset < 0) {
          row_offset = work_mode_ptr + 0xe;
        }
        BMP_ROW_COUNTER = 0;
        col_offset = work_mode_ptr + 0x1f;
        if (col_offset < 0) {
          col_offset = work_mode_ptr + 0x3e;
        }
        bit_depth = pixel_count + extraout_r2 + (image_data_offset + -1) * (col_offset >> 5) * 4;
        for (pixel_count = 0; pixel_count < image_data_offset; pixel_count = pixel_count + 1) {
          BMP_PIXEL_COUNTER = 0;
          fill_memory_buffer(memory_buffer,0,0x50);
          image_data_size = get_work_mode();
          flash_read_func = *(code **)(image_data_size + 0x1030);
          flash_read_result = get_work_mode();
          image_data_size =
               (*flash_read_func)(flash_read_result,bit_depth,memory_buffer,row_offset >> 3);
          if (image_data_size != 0) {
            flash_read_result = 0x103;
            goto LAB_0003687c;
          }
          for (image_data_size = 0; image_data_size < row_offset >> 3;
              image_data_size = image_data_size + 1) {
            convert_2bit_to_4bit_pixels
                      (~*(byte *)((int)memory_buffer + image_data_size),work_mode_ptr);
          }
          if (BMP_PROCESSED_DATA != 0) {
            BMP_ROW_COUNTER = 0;
            image_data_size = get_work_mode();
            memcpy(*(undefined4 *)(image_data_size + pixel_count * 4 + 0xb90),BMP_PROCESSED_DATA,
                   0x140);
          }
          bit_depth = bit_depth + (col_offset >> 5) * -4;
        }
      }
      else {
        printf_format_string_with_buffer_integration("Unsupported bit depth - %d\r\n");
      }
    }
    else {
      DEBUG_PRINT("File is not BMP format \n");
    }
  }
  else {
    flash_read_result = 0xdf;
LAB_0003687c:
    DEBUG_PRINT("[%s-%d] read pic from flash failed !\n","get_demo_image_source",flash_read_result);
  }
  call_data_verification_handler_with_memory_cleanup(memory_buffer);
  return;
}


