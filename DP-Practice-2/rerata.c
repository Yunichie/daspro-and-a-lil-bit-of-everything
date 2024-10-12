#include <stdio.h>

int main() {
    int jumlah_siswa, nilai_siswa, batas_rerata, a = 0, counter = 0;
    scanf("%d %d %d", &jumlah_siswa, &nilai_siswa, &batas_rerata);

    for (int i = 0; i < jumlah_siswa; i++) {
        int x = 0;
        for (int j = 0; j < nilai_siswa; j++) {
            scanf("%d", &x);
            a += x;
        }
        if ((float)(a / nilai_siswa) > batas_rerata) {
            counter++;
        }
        a = 0;
    }
    printf("%d", counter);
}