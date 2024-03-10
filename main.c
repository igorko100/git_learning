#include <stdio.h>

void main () {
    unsigned int c=1;
    for (int i=0; i<32; i++) {
        printf("%x\n", c<<i);
    }	
}

