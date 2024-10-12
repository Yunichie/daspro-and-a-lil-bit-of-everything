#include <stdio.h>

int main() {
    int nilai, usia;
    scanf("%d %d", &nilai, &usia);

    if (nilai >= 85) {
        printf(usia < 20 ? "Diterima dengan beasiswa\n" : "Diterima\n");
    } else if (nilai >= 60 && nilai <= 84) {
        printf(usia < 20 ? "Diterima\n" : "Dipertimbangkan\n");
    } else if (nilai < 60) {
        printf("Ditolak");
    }
}