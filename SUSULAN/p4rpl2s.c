#include <stdio.h>
#include <string.h>

typedef struct {
    char nrp[11];
    char nama[21];
    char hobi[21];
    char nrpdekat[11];
} Mhs;

void linear_search2(Mhs* mhs, int len, char target[11]) {
    int isfound = 0;
    for (int i = 0; i < len; i++) {
        if (strcmp(mhs[i].nrp, target) == 0) {
            printf("Profil Teman Dekat Mahasiswa:\nNRP: %s\nNama: %s\nHobi: %s\n", mhs[i].nrp, mhs[i].nama, mhs[i].hobi);
            isfound = 1;
        }
    }
    if (isfound == 0) printf("Mahasiswa ini tidak mempunyai teman dekat\n");
}

void linear_search(Mhs* mhs, int len, char target[11]) {
    int isfound = 0;
    for (int i = 0; i < len; i++) {
        if (strcmp(mhs[i].nrp, target) == 0) {
            printf("Profil Mahasiswa:\nNRP: %s\nNama: %s\nHobi: %s\n", mhs[i].nrp, mhs[i].nama, mhs[i].hobi);
            isfound = 1;
            linear_search2(mhs, len, mhs[i].nrpdekat);
        }
    }
    if (isfound == 0) printf("Mahasiswa tidak ditemukan\n");
}

int main() {
    int q;
    scanf("%d", &q);

    Mhs mhs[q];
    for (int i = 0; i < q; i++) {
        scanf("%s %s %s %s", mhs[i].nrp, mhs[i].nama, mhs[i].hobi, mhs[i].nrpdekat);
    }
    int n;
    scanf("%d", &n);

    char cari[11];
    for (int i = 0; i < n; i++) {
        scanf("%s", cari);
        linear_search(mhs, q, cari);
    }
}