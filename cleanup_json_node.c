/*
 * Function: cleanup_json_node
 * Entry:    00064b1c
 * Prototype: undefined __stdcall cleanup_json_node(undefined4 json_node)
 */


void cleanup_json_node(int *json_node)

{
  int iVar1;
  
  while (json_node != (int *)0x0) {
    iVar1 = *json_node;
    if ((-1 < json_node[3] << 0x17) &&
       (((json_node[2] == 0 || (cleanup_json_node(), -1 < json_node[3] << 0x17)) &&
        (json_node[4] != 0)))) {
      (*SENSOR_INIT_FUNCTION)();
    }
    if ((-1 < json_node[3] << 0x16) && (json_node[8] != 0)) {
      (*SENSOR_INIT_FUNCTION)();
    }
    (*SENSOR_INIT_FUNCTION)(json_node);
    json_node = (int *)iVar1;
  }
  return;
}


