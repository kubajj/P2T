#include <stdio.h>
#include "draw.h"
#include "util.h"

int main() {
    
    int i,j,maxVal;
    int testdata[HIST_MAX_SIZE];
    
    /* TODO: Add ability to specify on the command line number of samples to generate */

    generateRandData(testdata,25);

    maxVal = getMax_Int(testdata,25);

    for (i=0; i < 25; i++) {
        printBar(testdata[i]);
    }

    printYAxis(maxVal);
    printf("\nMaximum Value in Histogram is: %d\nIsn't that neat?\n", maxVal);

    return 0;
}
