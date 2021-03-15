#include "printpgm.h"

// The following function creates a pgm text version of a grayscale from a given array
void pgmToFileText(int h, int w, unsigned char array[h][w]) {
  // Initiliase file pointer
  FILE * fp = fopen("image_txt.pgm", "w");
  
  // Print first line
  fprintf(fp, "P2 %d %d %d\n", w, h, 255);
  
  // Declare iterators
  int i;
  int j;

  // Loop through rows
  for (i=0; i < h; i++) {
    // Loop through columns
    for (j=0; j < w; j++) {
      // h makes the value smaller, it tells printf that the value is smaller than the type specified
      // u is unsigned int, hu is short and hhu is unsigned char
      // Print the current element
      fprintf(fp, "%hhu ", array[i][j]);
    }

    // End row
    fputs("", fp);
  }
  
  // Try to close the file
  fclose(fp);

  // Make sure pointer is set to NULL
  fp = NULL;
}

// The following function creates a pgm binary version of a grayscale from a given array
void pgmToFileBin(int h, int w, unsigned char array[h][w]) {
  // Initiliase file pointer
  FILE * fp = fopen("image_bin.pgm", "wb");

  // Print first line
  fprintf(fp, "P5 %d %d %d\n", w, h, 255);
  
  // Write h number of records of size w
  if (fwrite(array, sizeof(unsigned char)*w, h, fp) != h) {
    // Something went wrong as not everything was written to the file
   
    // Try to close it
    fclose(fp);

    // Inform user about failure
    puts("Couldn't write the array to the file.");

    // Exit with failure
    exit(42);
  }

  // Try to close file
  fclose(fp);

  // Make sure pointer is set to NULL
  fp = NULL;
}


