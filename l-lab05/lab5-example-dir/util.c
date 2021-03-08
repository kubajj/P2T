#include "util.h" 


int getMax_Int(int list[], int len) {
    
    int i,max;

    /* Possible bug, I'm assuming all values are +ve, could include
     * limits.h and use INT_MIN */
    max = 0;

    for (i=0; i<len; i++) {
        if (list[i] > max) {
            max = list[i];
        }
    }
    return max;
}

void generateRandData(int data[], int len) {
    
    int i;

    /*seed the random number generator from the current time*/
    srand(time(NULL));
    for (i=0; i<len; i++) {
        data[i] = rand() % 100;
    }
}

