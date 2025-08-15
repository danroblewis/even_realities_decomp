/*
 * Function: copy_navigation_map_data_with_pattern_filling
 * Entry:    0007da70
 * Prototype: int copy_navigation_map_data_with_pattern_filling(byte * source_data, uint max_size, int dest_buffer, undefined4 fill_param)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int process_length_prefixed_data(byte *source_data, uint max_size, int
   dest_buffer, undefined4 fill_param) */

int copy_navigation_map_data_with_pattern_filling
              (byte *source_data,uint max_size,int dest_buffer,undefined4 fill_param)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
  pbVar2 = source_data;
  while( true ) {
    if (max_size <= (uint)((int)pbVar2 - (int)source_data)) break;
    bVar1 = *pbVar2;
    fill_memory_buffer(dest_buffer + iVar3,pbVar2[1],(uint)bVar1,(int)pbVar2 - (int)source_data,
                       fill_param);
    iVar3 = iVar3 + (uint)bVar1;
    pbVar2 = pbVar2 + 2;
  }
  return iVar3;
}


