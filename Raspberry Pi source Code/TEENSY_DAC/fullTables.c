
// Single period sine wave tables.
// Amplitudes are 0-255 with 128 as zero crossing.

#ifdef Table256                        // 256 samples per period.
#define MAX_BITMASK 0xff                   // # of bits in table index
#define NUM_FUNCTS 2
const unsigned char functions[NUM_FUNCTS][MAX_BITMASK+1] = { 
  // Sine wave
  {
   128, 131, 134, 137, 140, 143, 146, 149, 152, 155, 158, 162, 165, 167, 170, 173,
   176, 179, 182, 185, 188, 190, 193, 196, 198, 201, 203, 206, 208, 211, 213, 215,
   218, 220, 222, 224, 226, 228, 230, 232, 234, 235, 237, 238, 240, 241, 243, 244,
   245, 246, 248, 249, 250, 250, 251, 252, 253, 253, 254, 254, 254, 255, 255, 255,
   255, 255, 255, 255, 254, 254, 254, 253, 253, 252, 251, 250, 250, 249, 248, 246,
   245, 244, 243, 241, 240, 238, 237, 235, 234, 232, 230, 228, 226, 224, 222, 220,
   218, 215, 213, 211, 208, 206, 203, 201, 198, 196, 193, 190, 188, 185, 182, 179,
   176, 173, 170, 167, 165, 162, 158, 155, 152, 149, 146, 143, 140, 137, 134, 131,
   127, 124, 121, 118, 115, 112, 109, 106, 103, 100, 97, 93, 90, 88, 85, 82,
   79, 76, 73, 70, 67, 65, 62, 59, 57, 54, 52, 49, 47, 44, 42, 40,
   37, 35, 33, 31, 29, 27, 25, 23, 21, 20, 18, 17, 15, 14, 12, 11,
   10, 9, 7, 6, 5, 5, 4, 3, 2, 2, 1, 1, 1, 0, 0, 0,
   0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 4, 5, 5, 6, 7, 9,
   10, 11, 12, 14, 15, 17, 18, 20, 21, 23, 25, 27, 29, 31, 33, 35,
   37, 40, 42, 44, 47, 49, 52, 54, 57, 59, 62, 65, 67, 70, 73, 76,
   79, 82, 85, 88, 90, 93, 97, 100, 103, 106, 109, 112, 115, 118, 121, 124
 }, 
 //Pulse
 {
  255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
}};
#endif

#ifdef Table128                        // 128 samples per period
#define bitMask 0x7f                   // # of bits in table index
const unsigned char sineTable[128]  = {
  128, 134, 140, 147, 153, 159, 165, 171, 177, 182, 188, 193, 199, 204, 209, 213,
  218, 222, 226, 230, 234, 237, 240, 243, 245, 248, 250, 251, 253, 254, 254, 255,
  255, 255, 254, 254, 253, 251, 250, 248, 245, 243, 240, 237, 234, 230, 226, 222,
  218, 213, 209, 204, 199, 193, 188, 182, 177, 171, 165, 159, 153, 147, 140, 134,
  127, 122, 116, 109, 103, 97, 91, 85, 79, 74, 68, 63, 57, 52, 47, 43,
  38, 34, 30, 26, 22, 19, 16, 13, 11, 8, 6, 5, 3, 2, 2, 1,
  1, 1, 2, 2, 3, 5, 6, 8, 11, 13, 16, 19, 22, 26, 30, 34,
  38, 43, 47, 52, 57, 63, 68, 74, 79, 85, 91, 97, 103, 109, 116, 122
};
#endif

#ifdef Table64                         // 64 samples per period
#define bitMask 0x3f                   // # of bits in table index
const unsigned char sineTable[64]  = {
  128, 140, 153, 165, 177, 188, 199, 209, 218, 226, 234, 240, 245, 250, 253, 254,
  255, 254, 253, 250, 245, 240, 234, 226, 218, 209, 199, 188, 177, 165, 153, 140,
  127, 116, 103, 91, 79, 68, 57, 47, 38, 30, 22, 16, 11, 6, 3, 2,
  1, 2, 3, 6, 11, 16, 22, 30, 38, 47, 57, 68, 79, 91, 103, 116
};
#endif

#ifdef Table32                         // 32 samples per period
#define bitMask 0x1f                   // # of bits in table index 
const unsigned char sineTable[32]  = {
  128, 153, 177, 199, 218, 234, 245, 253,
  255, 253, 245, 234, 218, 199, 177, 153,
  127, 103, 79, 57, 38, 22, 11, 3,
  1, 3, 11, 22, 38, 57, 79, 103
};
#endif

#ifdef Table16                         // 16 samples per period
#define bitMask 0x0f                   // # of bits in table index
const unsigned char sineTable[16]  = {
  128, 177, 218, 245, 255, 245, 218, 177,
  127, 79, 38, 11, 1, 11, 38, 79
};
#endif

