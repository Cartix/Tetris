
#include "peg.hpp"
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

ROMDATA UCHAR uc101Bitmap[8] = {
0xff,0xff,0xff,0xe7,0xe7,0xff,0xff,0xff,};
PegBitmap gb101Bitmap = { 0x00, 1, 8, 8, 0x000000ff, (UCHAR *) uc101Bitmap};

