/*
 * Function: FUN_0004c4d0
 * Entry:    0004c4d0
 * Prototype: undefined FUN_0004c4d0()
 */


void FUN_0004c4d0(void)

{
  DataSynchronizationBarrier(0xf);
  do {
    WaitForEvent();
  } while( true );
}


