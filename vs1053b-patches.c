/* VS1053b vorbis patch */

#if 0
void LoadUserCode(void) {
  int i;
  for (i=0;i<CODE_SIZE;i++) {
    WriteVS10xxRegister(atab[i], dtab[i]);
  }
}
#endif

#define CODE_SIZE 2015
const unsigned char atab[2015] = { /* Register addresses */
    0x7, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x7,
    0x6, 0x6, 0x7, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x7,
    0x6, 0x6, 0x7, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x7, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x7, 0x6, 0x6, 0x7, 0x6, 0x6, 0x7, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x7, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0xA
};
const unsigned short dtab[2015] = { /* Data to write */
    0x8300, 0xb080, 0x1402, 0x0fdf, 0xffc1, 0x0007, 0x9257, 0xb212,
    0x3c00, 0x3d00, 0x4024, 0x0030, 0x0297, 0x3f00, 0x0024, 0x0000,
    0x0401, 0x000a, 0x1055, 0x0006, 0x0017, 0x3f10, 0x3401, 0x000a,
    0x2795, 0x3f00, 0x3401, 0x0001, 0x4c97, 0xf400, 0x55c0, 0x0000,
    0x0817, 0xf400, 0x57c0, 0xc090, 0x0024, 0x0006, 0x0297, 0x3f00,
    0x0024, 0x0000, 0x0000, 0x0007, 0x81d7, 0x3f10, 0x0024, 0x3f10,
    0x0024, 0x0006, 0x01d7, 0x3f00, 0x0024, 0x0000, 0x190d, 0x000f,
    0xf94f, 0x0000, 0xca0e, 0x280f, 0xe100, 0x0006, 0x2016, 0x0000,
    0x0080, 0x0005, 0x4f92, 0x3009, 0x2800, 0x2909, 0xf840, 0x3613,
    0x0024, 0x0006, 0x0197, 0x0006, 0xa115, 0xb080, 0x0024, 0x3f00,
    0x3400, 0x0007, 0x8a57, 0x3700, 0x0024, 0x4080, 0x0024, 0x0000,
    0x0040, 0x2800, 0xcbd5, 0x0006, 0xa2d7, 0x3009, 0x3c00, 0x0006,
    0xa157, 0x3009, 0x1c00, 0x0006, 0x01d7, 0x0000, 0x190d, 0x000a,
    0x708f, 0x0000, 0xd4ce, 0x290b, 0x1a80, 0x3f00, 0x184c, 0x0030,
    0x0017, 0x4080, 0x1c01, 0x0000, 0x0200, 0x2800, 0xc7d5, 0xb102,
    0x0024, 0x0000, 0xca08, 0x2800, 0xc7d5, 0x0000, 0xd0ce, 0x0011,
    0x210f, 0x0000, 0x190d, 0x280f, 0xcb00, 0x3613, 0x0024, 0x0006,
    0xa115, 0x0006, 0x01d7, 0x37f0, 0x1401, 0x6100, 0x1c01, 0x4012,
    0x0024, 0x0000, 0x8000, 0x6010, 0x0024, 0x34f3, 0x0400, 0x2800,
    0xd398, 0x0000, 0x0024, 0x0000, 0x8001, 0x6010, 0x3c01, 0x0000,
    0x000d, 0x2811, 0x8259, 0x0000, 0x0024, 0x2a11, 0x2100, 0x0030,
    0x0257, 0x3700, 0x0024, 0x4080, 0x0024, 0x0000, 0x0024, 0x2800,
    0xd6d5, 0x0006, 0x0197, 0x0006, 0xa115, 0x3f00, 0x3400, 0x4d86,
    0x0024, 0x0000, 0x190d, 0x2800, 0xdb15, 0x0014, 0x1b01, 0x0020,
    0x480f, 0x0000, 0xd9ce, 0x2920, 0x41c0, 0x0000, 0x190d, 0x000a,
    0x708f, 0x0000, 0xd4ce, 0x280a, 0xcac0, 0x0000, 0x190d, 0x0039,
    0x324f, 0x0001, 0x1c4e, 0x2820, 0x4a18, 0xb882, 0x0024, 0x2a20,
    0x48c0, 0x003f, 0xfd00, 0xb700, 0x0024, 0x003f, 0xf901, 0x6010,
    0x0024, 0x0014, 0x1b01, 0x280a, 0xc505, 0x0000, 0x190d, 0x0015,
    0x59c0, 0x6fc2, 0x0024, 0x0000, 0x0024, 0x2800, 0xe595, 0x0000,
    0x0024, 0x290c, 0x4840, 0x3613, 0x0024, 0x290c, 0x4840, 0x4086,
    0x184c, 0x0000, 0x18c2, 0x6234, 0x0024, 0x0000, 0x1d02, 0x2800,
    0xe115, 0x6234, 0x0024, 0x0030, 0x0317, 0x2800, 0xe580, 0x3f00,
    0x0024, 0x0000, 0x1d82, 0x2800, 0xe3d5, 0x6234, 0x0024, 0x2912,
    0x0d00, 0x4084, 0x184c, 0xf200, 0x0024, 0x6200, 0x0024, 0x0006,
    0x0017, 0xb080, 0x3c40, 0x2800, 0xe580, 0x3f00, 0x0024, 0x0000,
    0x0202, 0x2800, 0xe595, 0xa024, 0x0024, 0xc020, 0x0024, 0x0030,
    0x02d7, 0x2800, 0xe580, 0x3f00, 0x0024, 0x000a, 0x8c8f, 0x0000,
    0xe6ce, 0x000c, 0x0981, 0x280a, 0x71c0, 0x002c, 0x9d40, 0x000a,
    0x708f, 0x0000, 0xd4ce, 0x280a, 0xc0d5, 0x0012, 0x5182, 0x6fd6,
    0x0024, 0x003f, 0xfd81, 0x280a, 0x8e45, 0xb710, 0x0024, 0xb710,
    0x0024, 0x003f, 0xfc01, 0x6012, 0x0024, 0x0000, 0x0101, 0x2800,
    0xed95, 0xffd2, 0x0024, 0x48b2, 0x0024, 0x4190, 0x0024, 0x0000,
    0x190d, 0x2800, 0xed95, 0x0000, 0x0024, 0x3613, 0x0024, 0x000a,
    0xa40f, 0x290a, 0x6040, 0x0001, 0x120e, 0x0000, 0x190d, 0x000a,
    0x708f, 0x280a, 0xc0c0, 0x0000, 0xd4ce, 0x2920, 0x0100, 0x0000,
    0x0401, 0x0000, 0x0180, 0x2920, 0x0200, 0x3613, 0x0024, 0x2920,
    0x0280, 0x3613, 0x0024, 0x0000, 0x0401, 0x2920, 0x0280, 0x4084,
    0x984c, 0x0019, 0x9d01, 0x6212, 0x0024, 0x001e, 0x5c01, 0x2800,
    0xf215, 0x6012, 0x0024, 0x0000, 0x0024, 0x2800, 0xf405, 0x0000,
    0x0024, 0x001b, 0x5bc1, 0x6212, 0x0024, 0x001b, 0xdd81, 0x2800,
    0xf7d5, 0x6012, 0x0024, 0x0000, 0x0024, 0x2800, 0xf7d5, 0x0000,
    0x0024, 0x0000, 0x004d, 0x000a, 0xbf4f, 0x280a, 0xb880, 0x0000,
    0xf50e, 0x0020, 0xfb4f, 0x0000, 0x190d, 0x0000, 0xfcce, 0x2920,
    0x0480, 0x3009, 0x2bc1, 0x291a, 0x8a40, 0x36e3, 0x0024, 0x0000,
    0x190d, 0x000a, 0x708f, 0x280a, 0xcac0, 0x0000, 0xd4ce, 0x0030,
    0x0017, 0x3700, 0x4024, 0x0000, 0x0200, 0xb102, 0x0024, 0x0000,
    0x0024, 0x2800, 0xfbc5, 0x0000, 0x0024, 0x0000, 0x00c0, 0x0005,
    0x4f92, 0x3009, 0x2800, 0x2909, 0xf840, 0x3613, 0x0024, 0x0006,
    0x0197, 0x0006, 0xa115, 0xb080, 0x0024, 0x3f00, 0x3400, 0x0000,
    0x190d, 0x000a, 0x708f, 0x280a, 0xc0c0, 0x0000, 0xd4ce, 0x0000,
    0x004d, 0x0020, 0xfe0f, 0x2820, 0xfb40, 0x0000, 0xfdce, 0x2800,
    0xffd5, 0x0000, 0x0024, 0x3009, 0x13c0, 0x6012, 0x0024, 0x0000,
    0x0024, 0x2801, 0x1105, 0x0000, 0x0024, 0x3413, 0x0024, 0x34b0,
    0x0024, 0x4080, 0x0024, 0x0000, 0x0200, 0x2801, 0x02d5, 0xb882,
    0x0024, 0x3453, 0x0024, 0x3009, 0x13c0, 0x4080, 0x0024, 0x0000,
    0x0200, 0x2801, 0x1105, 0x0000, 0x0024, 0xb882, 0x130c, 0x0000,
    0x004d, 0x0021, 0x058f, 0x2821, 0x0340, 0x0001, 0x03ce, 0x2801,
    0x0a55, 0x6012, 0x0024, 0x0000, 0x0024, 0x2801, 0x0a55, 0x0000,
    0x0024, 0x34c3, 0x184c, 0x3e13, 0xb80f, 0xf400, 0x4500, 0x0026,
    0xa8cf, 0x0001, 0x07ce, 0x0000, 0xfa0d, 0x2926, 0x8e80, 0x3e10,
    0x110c, 0x36f3, 0x0024, 0x2801, 0x0a40, 0x36f3, 0x980f, 0x0000,
    0xfa0d, 0x0000, 0x4000, 0x0000, 0x0021, 0x6d06, 0x0024, 0x3110,
    0x8024, 0x31f0, 0xc024, 0x2826, 0xa904, 0x4d86, 0x0024, 0x2826,
    0xad00, 0x0000, 0x0024, 0x34c3, 0x184c, 0x3410, 0x8024, 0x34f0,
    0xc024, 0x0000, 0x4000, 0x0000, 0x0021, 0x6d06, 0x0024, 0x3410,
    0x8024, 0x2801, 0x1114, 0x3430, 0xc024, 0x4d86, 0x0024, 0x0000,
    0x0200, 0x2922, 0x1885, 0x0001, 0x0f88, 0x0000, 0x0200, 0x3e10,
    0x8024, 0x2921, 0xca80, 0x3e00, 0xc024, 0x291a, 0x8a40, 0x0000,
    0x0024, 0x2922, 0x1880, 0x36f3, 0x0024, 0x0000, 0x004d, 0x0021,
    0x0ecf, 0x2821, 0x0bc0, 0x0001, 0x108e, 0x2800, 0xfcc0, 0x3c30,
    0x4024, 0x0000, 0x190d, 0x0000, 0x330e, 0x2821, 0x0f80, 0x0027,
    0x9e0f, 0x2901, 0x1380, 0x3e01, 0xc024, 0x0001, 0x120e, 0x000a,
    0xa40f, 0x280a, 0xa4c0, 0x0000, 0x190d, 0x0020, 0xcd4f, 0x2820,
    0xc780, 0x0001, 0x144e, 0xb070, 0x0024, 0x0000, 0x330e, 0x0027,
    0x9e0f, 0x2820, 0xcd80, 0x0000, 0x190d, 0x3613, 0x0024, 0x3e10,
    0xb803, 0x3e14, 0x3811, 0x3e11, 0x3805, 0x3e00, 0x3801, 0x0007,
    0xc390, 0x0006, 0xa011, 0x3010, 0x0444, 0x3050, 0x4405, 0x6458,
    0x0302, 0xff94, 0x4081, 0x0003, 0xffc5, 0x48b6, 0x0024, 0xff82,
    0x0024, 0x42b2, 0x0042, 0xb458, 0x0003, 0x4cd6, 0x9801, 0xf248,
    0x1bc0, 0xb58a, 0x0024, 0x6de6, 0x1804, 0x0006, 0x0010, 0x3810,
    0x9bc5, 0x3800, 0xc024, 0x36f4, 0x1811, 0x36f0, 0x9803, 0x283e,
    0x2d80, 0x0fff, 0xffc3, 0x2801, 0x2e40, 0x0000, 0x0024, 0x3413,
    0x0024, 0x2801, 0x1e05, 0xf400, 0x4510, 0x2801, 0x2280, 0x6894,
    0x13cc, 0x3000, 0x184c, 0x6090, 0x93cc, 0x38b0, 0x3812, 0x3004,
    0x4024, 0x0000, 0x0910, 0x3183, 0x0024, 0x3100, 0x4024, 0x6016,
    0x0024, 0x000c, 0x8012, 0x2801, 0x2111, 0xb884, 0x104c, 0x6894,
    0x3002, 0x0000, 0x028d, 0x003a, 0x5e0f, 0x0001, 0x364e, 0x2939,
    0xb0c0, 0x3e10, 0x93cc, 0x4084, 0x9bd2, 0x4282, 0x0024, 0x0000,
    0x0041, 0x2801, 0x2485, 0x6212, 0x0024, 0x0000, 0x0040, 0x2801,
    0x2985, 0x000c, 0x8390, 0x2a01, 0x2d00, 0x34c3, 0x0024, 0x3444,
    0x0024, 0x3073, 0x0024, 0x3053, 0x0024, 0x3000, 0x0024, 0x6092,
    0x098c, 0x0000, 0x0241, 0x2801, 0x2d05, 0x32a0, 0x0024, 0x6012,
    0x0024, 0x0000, 0x0024, 0x2801, 0x2d15, 0x0000, 0x0024, 0x3613,
    0x0024, 0x3001, 0x3844, 0x2920, 0x0580, 0x3009, 0x3852, 0xc090,
    0x9bd2, 0x2801, 0x2d00, 0x3800, 0x1bc4, 0x000c, 0x4113, 0xb880,
    0x2380, 0x3304, 0x4024, 0x3800, 0x05cc, 0xcc92, 0x05cc, 0x3910,
    0x0024, 0x3910, 0x4024, 0x000c, 0x8110, 0x3910, 0x0024, 0x39f0,
    0x4024, 0x3810, 0x0024, 0x38d0, 0x4024, 0x3810, 0x0024, 0x38f0,
    0x4024, 0x34c3, 0x0024, 0x3444, 0x0024, 0x3073, 0x0024, 0x3063,
    0x0024, 0x3000, 0x0024, 0x4080, 0x0024, 0x0000, 0x0024, 0x2839,
    0x53d5, 0x4284, 0x0024, 0x3613, 0x0024, 0x2801, 0x3045, 0x6898,
    0xb804, 0x0000, 0x0084, 0x293b, 0x1cc0, 0x3613, 0x0024, 0x000c,
    0x8117, 0x3711, 0x0024, 0x37d1, 0x4024, 0x4e8a, 0x0024, 0x0000,
    0x0015, 0x2801, 0x3305, 0xce9a, 0x0024, 0x3f11, 0x0024, 0x3f01,
    0x4024, 0x000c, 0x8197, 0x408a, 0x9bc4, 0x3f15, 0x4024, 0x2801,
    0x3545, 0x4284, 0x3c15, 0x6590, 0x0024, 0x0000, 0x0024, 0x2839,
    0x53d5, 0x4284, 0x0024, 0x0000, 0x0024, 0x2801, 0x1cd8, 0x458a,
    0x0024, 0x2a39, 0x53c0, 0x003e, 0x2d4f, 0x283a, 0x5ed5, 0x0001,
    0x158e, 0x000c, 0x4653, 0x0000, 0x0246, 0xffac, 0x0c01, 0x48be,
    0x0024, 0x4162, 0x4546, 0x6642, 0x4055, 0x3501, 0x8024, 0x0000,
    0x0087, 0x667c, 0x4057, 0x000c, 0x41d5, 0x283a, 0x62d5, 0x3501,
    0x8024, 0x667c, 0x1c47, 0x3701, 0x8024, 0x283a, 0x62d5, 0xc67c,
    0x0024, 0x0000, 0x0024, 0x283a, 0x62c5, 0x0000, 0x0024, 0x2a3a,
    0x5ec0, 0x3009, 0x3851, 0x3e14, 0xf812, 0x3e12, 0xb817, 0x3e11,
    0x8024, 0x0006, 0x0293, 0x3301, 0x8024, 0x468c, 0x3804, 0x0006,
    0xa057, 0x2801, 0x4244, 0x0006, 0x0011, 0x469c, 0x0024, 0x3be1,
    0x8024, 0x2801, 0x4255, 0x0006, 0xc392, 0x3311, 0x0024, 0x33f1,
    0x2844, 0x3009, 0x2bc4, 0x0030, 0x04d2, 0x3311, 0x0024, 0x3a11,
    0x0024, 0x3201, 0x8024, 0x003f, 0xfc04, 0xb64c, 0x0fc4, 0xc648,
    0x0024, 0x3a01, 0x0024, 0x3111, 0x1fd3, 0x6498, 0x07c6, 0x868c,
    0x2444, 0x0023, 0xffd2, 0x3901, 0x8e06, 0x0030, 0x0551, 0x3911,
    0x8e06, 0x3961, 0x9c44, 0xf400, 0x44c6, 0xd46c, 0x1bc4, 0x36f1,
    0xbc13, 0x2801, 0x4bd5, 0x36f2, 0x9817, 0x002b, 0xffd2, 0x3383,
    0x188c, 0x3e01, 0x8c06, 0x0006, 0xa097, 0x3009, 0x1c12, 0x3213,
    0x0024, 0x468c, 0xbc12, 0x002b, 0xffd2, 0xf400, 0x4197, 0x2801,
    0x48c4, 0x3713, 0x0024, 0x2801, 0x4905, 0x37e3, 0x0024, 0x3009,
    0x2c17, 0x3383, 0x0024, 0x3009, 0x0c06, 0x468c, 0x4197, 0x0006,
    0xa052, 0x2801, 0x4b04, 0x3713, 0x2813, 0x2801, 0x4b45, 0x37e3,
    0x0024, 0x3009, 0x2c17, 0x36f1, 0x8024, 0x36f2, 0x9817, 0x36f4,
    0xd812, 0x2100, 0x0000, 0x3904, 0x5bd1, 0x2a01, 0x3c0e, 0x3e11,
    0x7804, 0x0030, 0x0257, 0x3701, 0x0024, 0x0013, 0x4d05, 0xd45b,
    0xe0e1, 0x0007, 0xc795, 0x2801, 0x5355, 0x0fff, 0xff45, 0x3511,
    0x184c, 0x4488, 0xb808, 0x0006, 0x8a97, 0x2801, 0x5305, 0x3009,
    0x1c40, 0x3511, 0x1fc1, 0x0000, 0x0020, 0xac52, 0x1405, 0x6ce2,
    0x0024, 0x0000, 0x0024, 0x2801, 0x5301, 0x68c2, 0x0024, 0x291a,
    0x8a40, 0x3e10, 0x0024, 0x2921, 0xca80, 0x3e00, 0x4024, 0x36f3,
    0x0024, 0x3009, 0x1bc8, 0x36f0, 0x1801, 0x3601, 0x5804, 0x3e13,
    0x780f, 0x3e13, 0xb808, 0x0008, 0x9b0f, 0x0001, 0x560e, 0x2908,
    0x9300, 0x0000, 0x004d, 0x36f3, 0x9808, 0x2000, 0x0000, 0x36f3,
    0x580f, 0x0006, 0xc610, 0x0007, 0x81d7, 0x3710, 0x0024, 0x3700,
    0x4024, 0x0034, 0x0002, 0x0000, 0x01c3, 0x6dc6, 0x8001, 0xff32,
    0x4043, 0x48b2, 0x0024, 0xffa6, 0x0024, 0x40b2, 0x0024, 0xb386,
    0x4142, 0x0000, 0x0106, 0x2914, 0xaa80, 0xad66, 0x0024, 0x6c96,
    0x0024, 0x0000, 0x0201, 0xf1d6, 0x0024, 0x61de, 0x0024, 0x0006,
    0xc612, 0x2801, 0x5bc1, 0x0006, 0xc713, 0x4c86, 0x0024, 0x2912,
    0x1180, 0x0006, 0xc351, 0x0006, 0x0210, 0x2912, 0x0d00, 0x3810,
    0x984c, 0xf200, 0x2043, 0x2808, 0xa000, 0x3800, 0x0024, 0x802e,
    0x2801, 0x4cc0, 0x8050, 0x3e12, 0x3800, 0x3e00, 0xb804, 0x0030,
    0x0015, 0x0008, 0x0002, 0x3511, 0x184c, 0xb428, 0x1402, 0x0000,
    0x8004, 0x2910, 0x0195, 0x0000, 0x1488, 0xb428, 0x0024, 0x0006,
    0x0095, 0x2800, 0x1f45, 0x3e13, 0x780e, 0x3e11, 0x7803, 0x3e13,
    0xf806, 0x3e01, 0xf801, 0x3510, 0x8024, 0x3510, 0xc024, 0x0000,
    0x0021, 0xf2d6, 0x1444, 0x4090, 0x1745, 0x0000, 0x0022, 0xf2ea,
    0x4497, 0x2400, 0x1b00, 0x6090, 0x1c46, 0xfe6c, 0x0024, 0xcdb6,
    0x1c46, 0xfe6c, 0x0024, 0xceba, 0x1c46, 0x4d86, 0x3442, 0x0000,
    0x09c7, 0x2800, 0x1c85, 0xf5d4, 0x3443, 0x6724, 0x0024, 0x4e8a,
    0x3444, 0x0000, 0x0206, 0x2800, 0x1dc5, 0xf5e8, 0x3705, 0x6748,
    0x0024, 0xa264, 0x9801, 0xc248, 0x1bc7, 0x0030, 0x03d5, 0x3d01,
    0x0024, 0x36f3, 0xd806, 0x3601, 0x5803, 0x36f3, 0x0024, 0x36f3,
    0x580e, 0x0007, 0x8257, 0x3700, 0x8024, 0xf224, 0x0024, 0x0000,
    0x0024, 0x2800, 0x21d1, 0x3600, 0x9844, 0x2900, 0x2780, 0x0000,
    0x2248, 0x2911, 0xf140, 0x0000, 0x0024, 0x0030, 0x0057, 0x3700,
    0x0024, 0xf200, 0x4595, 0x0fff, 0xfe02, 0xa024, 0x164c, 0x8000,
    0x17cc, 0x3f00, 0x0024, 0x3500, 0x0024, 0x0021, 0x6d82, 0xd024,
    0x44c0, 0x0006, 0xa402, 0x2800, 0x2695, 0xd024, 0x0024, 0x0000,
    0x0000, 0x2800, 0x2695, 0x000b, 0x6d57, 0x3009, 0x3c00, 0x36f0,
    0x8024, 0x36f2, 0x1800, 0x2000, 0x0000, 0x0000, 0x0024, 0x8030,
    0x2800, 0x1400, 0x809e, 0x3e14, 0x7810, 0x3e13, 0xb80d, 0x3e13,
    0xf80a, 0x3e10, 0xb803, 0x3e11, 0x3805, 0x3e11, 0xb807, 0x3e14,
    0xf801, 0x0001, 0x000a, 0x0006, 0xc4d5, 0xbf8e, 0x9442, 0x3e01,
    0x9403, 0x0006, 0xa017, 0x0023, 0xffd1, 0x0000, 0x0053, 0x3281,
    0xf806, 0x4091, 0x2d64, 0x2400, 0x2d00, 0x4efa, 0x9c10, 0xf1eb,
    0x6061, 0xfe55, 0x2f66, 0x5653, 0x2d64, 0x48b2, 0xa201, 0x4efa,
    0xa201, 0x36f3, 0x3c10, 0x36f4, 0xd801, 0x36f1, 0x9807, 0x36f1,
    0x1805, 0x36f0, 0x9803, 0x36f3, 0xd80a, 0x36f3, 0x980d, 0x2000,
    0x0000, 0x36f4, 0x5810, 0x80be, 0x3e12, 0xb817, 0x3e14, 0xf812,
    0x3e01, 0xb811, 0x0007, 0x9717, 0x0020, 0xffd2, 0x0030, 0x11d1,
    0x3111, 0x8024, 0x3704, 0xc024, 0x3b81, 0x8024, 0x3101, 0x8024,
    0x3b81, 0x8024, 0x3f04, 0xc024, 0x2808, 0x4800, 0x36f1, 0x9811,
    0x8028, 0x2a00, 0x2f8e, 0x8032, 0x2800, 0x38c0, 0x80cc, 0x36f3,
    0x0024, 0x3009, 0x3848, 0x3e14, 0x3811, 0x3e00, 0x0024, 0x0000,
    0x4000, 0x0001, 0x0010, 0x2915, 0x94c0, 0x0001, 0xcc11, 0x36f0,
    0x0024, 0x2927, 0x9e40, 0x3604, 0x1811, 0x3613, 0x0024, 0x3e14,
    0x3811, 0x3e00, 0x0024, 0x0000, 0x4000, 0x0001, 0x0010, 0x2915,
    0x94c0, 0x0001, 0xcc11, 0x36f0, 0x0024, 0x36f4, 0x1811, 0x3009,
    0x1808, 0x2000, 0x0000, 0x0000, 0x190d, 0x80e3, 0x3e12, 0xb817,
    0x3e12, 0x3815, 0x3e05, 0xb814, 0x3625, 0x0024, 0x0000, 0x800a,
    0x3e10, 0x3801, 0x3e10, 0xb803, 0x3e11, 0x3805, 0x3e11, 0xb807,
    0x3e14, 0x3811, 0x0006, 0xa090, 0x2912, 0x0d00, 0x3e14, 0xc024,
    0x4088, 0x8000, 0x4080, 0x0024, 0x0007, 0x90d1, 0x2800, 0x3e85,
    0x0000, 0x0024, 0x0007, 0x9051, 0x3100, 0x4024, 0x4100, 0x0024,
    0x3900, 0x0024, 0x0007, 0x90d1, 0x0004, 0x0000, 0x31f0, 0x4024,
    0x6014, 0x0400, 0x0000, 0x0024, 0x2800, 0x42d1, 0x4080, 0x0024,
    0x0000, 0x0000, 0x2800, 0x4245, 0x0000, 0x0024, 0x0007, 0x9053,
    0x3300, 0x0024, 0x4080, 0x0024, 0x0000, 0x0000, 0x2800, 0x42d8,
    0x0000, 0x0024, 0x0007, 0x9051, 0x3900, 0x0024, 0x3200, 0x504c,
    0x6410, 0x0024, 0x3cf0, 0x0000, 0x4080, 0x0024, 0x0006, 0xc691,
    0x2800, 0x5b85, 0x3009, 0x0400, 0x0000, 0x1001, 0x0007, 0x9051,
    0x3100, 0x0024, 0x6012, 0x0024, 0x0006, 0xc6d0, 0x2800, 0x4fc9,
    0x003f, 0xe000, 0x0006, 0xc693, 0x3900, 0x0c00, 0x3009, 0x0001,
    0x6014, 0x0024, 0x0007, 0x1ad0, 0x2800, 0x4fd5, 0x3009, 0x0000,
    0x4080, 0x0024, 0x0000, 0x0301, 0x2800, 0x49c5, 0x4090, 0x0024,
    0x0000, 0x0024, 0x2800, 0x4ad5, 0x0000, 0x0024, 0x3009, 0x0000,
    0xc012, 0x0024, 0x2800, 0x4fc0, 0x3009, 0x2001, 0x3009, 0x0000,
    0x6012, 0x0024, 0x0000, 0x0341, 0x2800, 0x4cd5, 0x0000, 0x0024,
    0x6190, 0x0024, 0x2800, 0x4fc0, 0x3009, 0x2000, 0x6012, 0x0024,
    0x0000, 0x0381, 0x2800, 0x4e95, 0x0000, 0x0024, 0x6190, 0x0024,
    0x2800, 0x4fc0, 0x3009, 0x2000, 0x6012, 0x0024, 0x0000, 0x00c0,
    0x2800, 0x4fd5, 0x0000, 0x0024, 0x3009, 0x2000, 0x0006, 0xa090,
    0x3009, 0x0000, 0x4080, 0x0024, 0x0000, 0x0081, 0x2800, 0x5495,
    0x0007, 0x8c13, 0x3300, 0x104c, 0xb010, 0x0024, 0x0002, 0x8001,
    0x2800, 0x5705, 0x34f0, 0x0024, 0x2800, 0x5480, 0x0000, 0x0024,
    0x0006, 0xc351, 0x3009, 0x0000, 0x6090, 0x0024, 0x3009, 0x2000,
    0x2900, 0x0b80, 0x3009, 0x0405, 0x0006, 0xc6d1, 0x0006, 0xc690,
    0x3009, 0x0000, 0x3009, 0x0401, 0x6014, 0x0024, 0x0006, 0xa093,
    0x2800, 0x5311, 0xb880, 0x0024, 0x2800, 0x6440, 0x3009, 0x2c00,
    0x4040, 0x0024, 0x6012, 0x0024, 0x0006, 0xc6d0, 0x2800, 0x6458,
    0x0000, 0x0024, 0x0006, 0xc693, 0x3009, 0x0c00, 0x3009, 0x0001,
    0x6014, 0x0024, 0x0006, 0xc350, 0x2800, 0x6441, 0x0000, 0x0024,
    0x6090, 0x0024, 0x3009, 0x2c00, 0x3009, 0x0005, 0x2900, 0x0b80,
    0x0000, 0x6448, 0x3009, 0x0400, 0x4080, 0x0024, 0x0003, 0x8000,
    0x2800, 0x6445, 0x0000, 0x0024, 0x6400, 0x0024, 0x0000, 0x0081,
    0x2800, 0x6449, 0x0000, 0x0024, 0x0007, 0x8c13, 0x3300, 0x0024,
    0xb010, 0x0024, 0x0006, 0xc650, 0x2800, 0x6455, 0x0000, 0x0024,
    0x0001, 0x0002, 0x3413, 0x0000, 0x3009, 0x0401, 0x4010, 0x8406,
    0x0000, 0x0281, 0xa010, 0x13c1, 0x4122, 0x0024, 0x0000, 0x03c2,
    0x6122, 0x8002, 0x462c, 0x0024, 0x469c, 0x0024, 0xfee2, 0x0024,
    0x48be, 0x0024, 0x6066, 0x8400, 0x0006, 0xc350, 0x2800, 0x6441,
    0x0000, 0x0024, 0x4090, 0x0024, 0x3009, 0x2400, 0x2900, 0x0b80,
    0x3009, 0x0005, 0x0007, 0x1b50, 0x2912, 0x0d00, 0x3613, 0x0024,
    0x3a00, 0x0380, 0x4080, 0x0024, 0x0000, 0x00c1, 0x2800, 0x6d05,
    0x3009, 0x0000, 0xb010, 0x008c, 0x4192, 0x0024, 0x6012, 0x0024,
    0x0006, 0xf051, 0x2800, 0x6b18, 0x3009, 0x0400, 0x0007, 0x1fd1,
    0x30e3, 0x0400, 0x4080, 0x0024, 0x0000, 0x0301, 0x2800, 0x6d05,
    0x3009, 0x0000, 0xb010, 0x0024, 0x0000, 0x0101, 0x6012, 0x0024,
    0x0006, 0xf051, 0x2800, 0x6d15, 0x0000, 0x0024, 0x3023, 0x0400,
    0xf200, 0x184c, 0xb880, 0xa400, 0x3009, 0x2000, 0x3009, 0x0441,
    0x3e10, 0x4402, 0x2909, 0xa9c0, 0x3e10, 0x8024, 0x36e3, 0x0024,
    0x36f4, 0xc024, 0x36f4, 0x1811, 0x36f1, 0x9807, 0x36f1, 0x1805,
    0x36f0, 0x9803, 0x36f0, 0x1801, 0x3405, 0x9014, 0x36f3, 0x0024,
    0x36f2, 0x1815, 0x2000, 0x0000, 0x36f2, 0x9817, 0x0300
};
