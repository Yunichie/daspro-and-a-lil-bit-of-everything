#include <stdio.h>

typedef struct {
    char nama[100];
    unsigned long long nrp;
    char alamat[100];
    double nilai;
} Mhs;

void add_student(Mhs* daftar_mhs, Mhs* mhs) {
    // Pointer ke daftar_mhs[2] menggunakan pointer arithmetic.
    // Dalam bahasa C, sebuah pointer, jika ditambahkan dengan
    // sebuah bilangan (misal: x), C akan secara otomatis mengalikan
    // ukuran dari tipe data yang ditunjuk oleh pointer tersebut.
    // daftar_mhs + 2 == sizeof(Mhs) * 2
    // Misal, struct Mhs bernilai 216 (100 + 8 + 100 + 8)
    // Maka, indexing daftar_mhs akan terjadi seperti ini:
    // Misal daftar_mhs[0] berada di 0x1000, maka
    // daftar_mhs[0] == 0x1000
    // daftar_mhs[1] == 0x1000 + 216 (D8 dalam hexadecimal) == 0x10DB
    // daftar_mhs[2] == 0x1000 + 432 (1B0) == 0x11B0
    Mhs* target = daftar_mhs + 2;

    // Pointer ke data asli
    Mhs* source = mhs; // mhs

    // Fungsi ini bisa diimplementasikan (sejauh yang saya bisa pikirkan) dengan 2 cara:
    /*
     * daftar_mhs[2] = *mhs
     */
    // atau
    /*
     * strcpy(target->nama, mhs->nama);
     * target->nrp = mhs->nrp;
     * strcpy(target->alamat, mhs->alamat);
     * target->nilai = mhs->nilai;
     */

    // Di sini saya akan menggunakan implementasi ke 2.
    // Tetapi, untuk fungsi strcpy(), akan saya implementasikan
    // secara manual

    // strcpy(src, dest);
    // Copy nama menggunakan pointer arithmetic dan manual character copying
    // Cara kerja implementasi ini sama seperti definisi variabel `target` sebelumnya
    // Hanya saja, ada tambahan copy dari src ke dest
    char* namaTarget = target->nama;    // dest
    char* namaSource = source->nama;    // src
    while(*namaSource) {                // Loop jika karakter saat ini bukan '\0'
        *namaTarget = *namaSource;      // Copy dari src ke dest
        namaTarget++;                   // Increment ke posisi berikutnya == namaTarget + 1
        namaSource++;                   // Increment ke posisi berikutnya == namaSource + 1
    }
    // Tambahkan null terminator
    *namaTarget = '\0';

    // Copy nrp dengan mengakses member struct secara langsung
    // menggunakan pointer
    target->nrp = *(&(*(&(*(&(source->nrp)))))); // catatan untuk saya, kalau sisi kiri == sisi kanan
    // dereference alamat memori data asli == data asli

    // strcpy(src, dest);
    // Copy alamat menggunakan pointer arithmetic dan manual character copying
    // Cara kerja sama seperti sebelumnya
    char* alamatTarget = target->alamat;
    char* alamatSource = source->alamat;
    while(*alamatSource) {
        *alamatTarget = *alamatSource;
        alamatTarget++;
        alamatSource++;
    }
    // Tambahkan null terminator
    *alamatTarget = '\0';

    // Copy nilai dengan mengakses member struct secara langsung
    // menggunakan pointer
    *(&(*(&(*(&(target->nilai)))))) = source->nilai; // begitu juga yang ini
    // dereference alamat memori data asli == data asli
}

int main() {
    // Fixed-size array🙏
    Mhs daftar_mhs[3] = {
        {
            "Senjyougahara Hitagi", // Monogatari Series my beloved🗣️🗣️
            5053241001,
            "Tokyo",
            100
        },
        {
            "Kiss-Shot Acerola-Orion Heart-Under-Blade", // I love me my Mister Donut enjoyer
            5053241002, // tapi punya nrp
            "Tokyo",
            0 // ndak kuliah
        }
    };

    // sebelum add_student()
    printf("Before:\n");
    for (int i = 0; i < sizeof(daftar_mhs) / sizeof(daftar_mhs[0]); i++) {
        printf("Mahasiswa %d:\nNama: %s\nNRP: %llu\nAlamat: %s\nNilai: %lf\n\n", i+1, daftar_mhs[i].nama, daftar_mhs[i].nrp, daftar_mhs[i].alamat, daftar_mhs[i].nilai);
    }

    Mhs mhs3 = {
    "Araragi Koyomi",
        5053241003,
        "Saga",
        95
    };

    add_student(daftar_mhs, &mhs3);

    // sesudah add_student()
    printf("After:\n");
    for (int i = 0; i < sizeof(daftar_mhs) / sizeof(daftar_mhs[0]); i++) {
        printf("Mahasiswa %d:\nNama: %s\nNRP: %llu\nAlamat: %s\nNilai: %lf\n\n", i+1, daftar_mhs[i].nama, daftar_mhs[i].nrp, daftar_mhs[i].alamat, daftar_mhs[i].nilai);
    }
}