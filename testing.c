#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int a[10];

    for(int i=0; i<10; i++) {
        a[i]=i+3;
    }

    printf("%d\n", *a[0]);


    return 0;
}