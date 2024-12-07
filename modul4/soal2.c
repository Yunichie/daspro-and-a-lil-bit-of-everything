#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[100];
    int mtk;
    int ipa;
    int ind;
    int ing;
} Nilai;

int main() {
    int jml, cari;
    scanf("%d", &jml);
    Nilai siswa[jml]; // -> {nama, nilai, ...}

    for (int i = 0; i < jml; i++) {
        scanf("%s", siswa[i].nama);
        scanf("%d", &siswa[i].mtk);
        scanf("%d", &siswa[i].ipa);
        scanf("%d", &siswa[i].ind);
        scanf("%d", &siswa[i].ing);
    }

    scanf("%d", &cari);
    char nama_cari[100];

    for (int i = 0; i < cari; i++) {
        scanf("%s", nama_cari);
        int found = 0;

        for (int j = 0; j < jml; j++) {
            if (strcmp(siswa[j].nama, nama_cari) == 0) {
                printf("\nNilai %s\n", siswa[j].nama);
                printf("Matematika : %d\n", siswa[j].mtk);
                printf("IPA : %d\n", siswa[j].ipa);
                printf("Bahasa Indonesia : %d\n", siswa[j].ind);
                printf("Bahasa Inggris : %d\n", siswa[j].ing);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Nilai %s tidak ditemukan\n", nama_cari);
        }
    }
}