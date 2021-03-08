#include "draw.h"

void printBar(int lengthOfBar) {
    
    int i;

    printf("| ");
    for (i=0; i < lengthOfBar; i++) {
        printf("#");
    }
    printf("\n");
}

void printYAxis(int lengthOfAxis) {
    
    int i;

    printf("|_");
    for (i=0; i < lengthOfAxis; i++) {
        printf("_");
    }
    printf("\n");
}
