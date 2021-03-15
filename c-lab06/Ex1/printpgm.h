#include <stdio.h>
#include <stdlib.h>

// The following function creates a pgm text version of a grayscale from a given array
// and stores it in image_txt.pgm
void pgmToFileText(int h, int w, unsigned char array[h][w]);

// The following function creates a pgm binary version of a grayscale from a given array
// and stores it in image_bin.pgm
void pgmToFileBin(int h, int w, unsigned char array[h][w]);

