#include <stdio.h>
#include <stdlib.h>
#include "Utilities.h"


void memcpy(void* dst, const void* src, const size_t num) {
    //typecast src and dst to char:
    char* cSrc = (char*) src;
    char* cDst = (char*) dst;

    //copy contents of src[] to dst[]
    for(int i =0; i<num; i++) 
        cDst[i] = cSrc[i];
}
int lenght(const void* element) {
    char* tElement = (char*) element;
    int i = 0;
    while (tElement != '\0') {
        i++;
    }
    return i;
}