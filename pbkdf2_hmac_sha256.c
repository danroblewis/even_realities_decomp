/*
 * Function: pbkdf2_hmac_sha256
 * Entry:    00080530
 * Prototype: undefined __stdcall pbkdf2_hmac_sha256(undefined4 output, undefined4 password, undefined4 password_len, undefined4 salt, undefined4 salt_len)
 */


void pbkdf2_hmac_sha256(int output,int password,int password_len,int salt,int salt_len)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [3];
  undefined1 local_29;
  int iStack_28;
  
  iVar2 = output + 0xf0;
  _auStack_2c = CONCAT13(1,(uint3)password & 0xffff);
  iVar1 = output + 0x110;
  iStack_28 = password_len;
  hmac_sha256(output,iVar2,0x20,0,output);
  hmac_inner_hash(output);
  hmac_outer_hash(output,iVar1,0x20);
  hmac_outer_hash(output,auStack_2c + 2,1);
  if ((password != 0) && (password_len != 0)) {
    hmac_outer_hash(output,password,password_len);
  }
  if ((salt != 0) && (salt_len != 0)) {
    hmac_outer_hash(output,salt,salt_len);
  }
  hmac_finalize(iVar2,0x20,output);
  hmac_sha256(output,iVar2,0x20);
  hmac_inner_hash(output);
  hmac_outer_hash(output,iVar1,0x20);
  hmac_finalize(iVar1,0x20,output);
  if ((password != 0) && (password_len != 0)) {
    hmac_sha256(output,iVar2,0x20);
    hmac_inner_hash(output);
    hmac_outer_hash(output,iVar1,0x20);
    hmac_outer_hash(output,&local_29,1);
    hmac_outer_hash(output,password,password_len);
    if ((salt != 0) && (salt_len != 0)) {
      hmac_outer_hash(output,salt,salt_len);
    }
    hmac_finalize(iVar2,0x20,output);
    hmac_sha256(output,iVar2,0x20);
    hmac_inner_hash(output);
    hmac_outer_hash(output,iVar1,0x20);
    hmac_finalize(iVar1,0x20,output);
  }
  return;
}


