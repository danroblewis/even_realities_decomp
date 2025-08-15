/*
 * Function: compare_versions
 * Entry:    00080970
 * Prototype: undefined __stdcall compare_versions(undefined4 version1, undefined4 version2)
 */


uint compare_versions(byte *version1,byte *version2)

{
  if (*version2 <= *version1) {
    if (*version2 < *version1) {
      return 1;
    }
    if (version2[1] <= version1[1]) {
      if (version2[1] < version1[1]) {
        return 1;
      }
      if (*(ushort *)(version2 + 2) <= *(ushort *)(version1 + 2)) {
        return (uint)(*(ushort *)(version2 + 2) < *(ushort *)(version1 + 2));
      }
    }
  }
  return 0xffffffff;
}


