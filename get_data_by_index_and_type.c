/*
 * Function: get_data_by_index_and_type
 * Entry:    000456fc
 * Prototype: undefined get_data_by_index_and_type()
 */


char * get_data_by_index_and_type(undefined4 param_1,uint param_2)

{
  undefined **ppuVar1;
  
  if (param_2 < 0x42) {
    switch(param_1) {
    case 1:
      ppuVar1 = (undefined **)&DAT_0008aa10;
      break;
    default:
      ppuVar1 = &PTR_s_English_0008ab18;
      break;
    case 3:
      ppuVar1 = (undefined **)&DAT_0008a4e8;
      break;
    case 4:
      ppuVar1 = (undefined **)&DAT_0008a3e0;
      break;
    case 5:
      ppuVar1 = (undefined **)&DAT_0008a6f8;
      break;
    case 6:
      ppuVar1 = &PTR_s_Deutsch_0008a908;
      break;
    case 7:
      ppuVar1 = (undefined **)&DAT_0008a800;
      break;
    case 0xe:
      ppuVar1 = (undefined **)&DAT_0008a5f0;
    }
    return ppuVar1[param_2];
  }
  return "ERR_STRING";
}


