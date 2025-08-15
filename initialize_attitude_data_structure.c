/*
 * Function: initialize_attitude_data_structure
 * Entry:    000265b8
 * Prototype: void initialize_attitude_data_structure(undefined4 * attitude_data)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void initialize_attitude_data_structure(undefined4 *attitude_data) */

void initialize_attitude_data_structure(undefined4 *attitude_data)

{
  *attitude_data = 0x3dcccccd;
  attitude_data[1] = 0x40800000;
  attitude_data[2] = 0;
  attitude_data[4] = 0;
  attitude_data[5] = 0;
  attitude_data[6] = 0;
  attitude_data[7] = 0;
  attitude_data[8] = 0;
  attitude_data[9] = 0;
  attitude_data[3] = 0x3f800000;
  attitude_data[0xe] = 0;
  attitude_data[0xf] = 0;
  *(undefined1 *)(attitude_data + 10) = 0;
  return;
}


