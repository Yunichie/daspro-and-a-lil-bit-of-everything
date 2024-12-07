#include <stdio.h>

typedef union {
    int rank;
    int power_lvl;
} Hero;

int main() {
    Hero allmight = {
    1 // hanya bisa menyimpan 1 variabel karena hanya me-reserve 1 slot memori
    };

    printf("rank: %d powerlvl: %d\n", allmight.rank, allmight.power_lvl);
}