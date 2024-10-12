#include <stdio.h>

int main() {
    int z, e;
    char g;
    scanf("%d %d %c", &z, &e, &g);

    if (z >= e && g == 'N') {
        printf("Strategi A");
    } else if (z < e && g == 'N') {
        printf("Strategi B");
    } else if (z >= e && g == 'Y') {
        printf("Strategi daspro-and-a-lil-bit-of-everything");
    } else if (z < e && g =='Y') {
        printf("Strategi D");
    } else {
        printf("MUNDURRR!!!");
    }
}