/*
 * Function: validate_sha256_state_with_mode
 * Entry:    0007bc24
 * Prototype: int validate_sha256_state_with_mode(int state_index, int validation_mode)
 */


/* WARNING: Removing unreachable block (ram,0x0007bd8a) */
/* WARNING: Removing unreachable block (ram,0x0007bd8c) */
/* WARNING: Removing unreachable block (ram,0x0007bd8e) */
/* WARNING: Removing unreachable block (ram,0x0007bdb8) */
/* WARNING: Removing unreachable block (ram,0x0007bdc0) */
/* WARNING: Removing unreachable block (ram,0x0007bdbe) */
/* WARNING: Removing unreachable block (ram,0x0007bdd0) */
/* WARNING: Removing unreachable block (ram,0x0007bcda) */
/* WARNING: Removing unreachable block (ram,0x0007bce0) */
/* WARNING: Removing unreachable block (ram,0x0007bce4) */
/* WARNING: Removing unreachable block (ram,0x0007bdf8) */
/* WARNING: Removing unreachable block (ram,0x0007bc86) */
/* WARNING: Removing unreachable block (ram,0x0007bc8c) */
/* WARNING: Removing unreachable block (ram,0x0007bc92) */
/* WARNING: Removing unreachable block (ram,0x0007bcbe) */
/* WARNING: Removing unreachable block (ram,0x0007bcca) */
/* WARNING: Removing unreachable block (ram,0x0007bcc4) */
/* WARNING: Removing unreachable block (ram,0x0007bde0) */
/* WARNING: Removing unreachable block (ram,0x0007bd30) */
/* WARNING: Removing unreachable block (ram,0x0007bd34) */
/* WARNING: Removing unreachable block (ram,0x0007bd38) */
/* WARNING: Removing unreachable block (ram,0x0007bdee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int validate_sha256_state_and_initialize(int state_index, int validation_mode)
    */

int validate_sha256_state_with_mode(int state_index,int validation_mode)

{
  if (validation_mode == 1) {
    if (*(undefined1 **)(state_index * 8 + 0xff8400) == &DAT_50845400) {
      do {
      } while( true );
    }
  }
  else if (validation_mode == 2) {
    if (*(undefined1 **)(state_index * 8 + 0xff8400) == &DAT_50845400) {
      do {
      } while( true );
    }
  }
  else {
    if (validation_mode != 0) {
      return 0xf1000c;
    }
    if (*(undefined1 **)(state_index * 8 + 0xff8400) == &DAT_50845400) {
      do {
      } while( true );
    }
  }
  _DAT_50844500 = 1;
  _DAT_50039500 = 0;
  _DAT_50039108 = 0;
  _DAT_50039104 = 0;
  _DAT_50039100 = 0;
  return 0xf70006;
}


