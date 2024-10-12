#include <stdio.h>

int main() {
    unsigned long long n, m, f;
    scanf("%llu %llu %llu", &n, &m, &f);

    unsigned long long k = 0; // bahan bakar yang kita gunakan
    unsigned long long current = n; // track value n xor k

    for(int bit = 63; bit >= 0; bit--) {
        // Pada dasarnya, variabel mask adalah K
        unsigned long long mask = 1ull << bit; // angka dengan 64 bit dan hanya memiliki satu angka 1, dimulai dari angka 1 di posisi paling depan
        // Iterasi pertama: 10000000000000000000....0000
        // Iterasi kedua: 01000000000000000000....0000, dan seterusnya

        // cek apakah:
        // 1. current xor k lebih besar dari current saat ini, DAN
        // 2. k <= f
        if((current ^ mask) > current && k + mask <= f) {
            k += mask; // Tambah penggunaan bahan bakar
            current ^= mask; // N xor K
        }

        // Jika kondisi di atas salah, cek lagi
        // apakah (n xor k) - 1 >= m (sesuai syarat soal)
        if(current - 1 >= m) {
            printf("HAHAHA, I CAN SAVE THE WORLD\n");
            return 0;
        }
    }

    // Jika sampai di loop ke-0 dan masih tidak berhasil
    // maka, gagal
    printf("OH NOOO, I FAILED\n");
    return 0;
}