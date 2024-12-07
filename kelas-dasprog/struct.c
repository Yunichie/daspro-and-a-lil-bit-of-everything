#include <stdio.h>
#include <string.h>

// struct
typedef struct { // typedef is for alias
    char kel[50];
    char kec[50];
    char kot[50];
} Alamat;

typedef struct {
    char nama[100];
    int nrp;
    Alamat alamat; // instead of `struct Alamat alamat`
    float nilai_dasprog;
} dataMahasiswa;

int main() {
    Alamat alamat = {
        "Sukolilo",
        "Keputih",
        "Surabaya"
    };
    dataMahasiswa mhs1 = {
    "Gojo",
        12345,
        alamat,
        100
    };
    dataMahasiswa mhs2 = {
        "Yuta",
        123456,
        alamat,
        100
    };

    printf("Nama mhs1: %s Nilai: %f\n", mhs1.nama, mhs1.nilai_dasprog);

    //mhs1.nama = "Sukuna";
    strcpy(mhs1.nama, "Sukuna");
    printf("Nama mhs1: %s\n", mhs1.nama);

    printf("Nama mhs1: %s Alamat: %s, %s, %s\n", mhs1.nama, mhs1.alamat.kec, mhs1.alamat.kel, mhs1.alamat.kot);

    dataMahasiswa* ptr_to_mhs1 = &mhs1;
    printf("Nama: %s\n", (*ptr_to_mhs1).nama);
    printf("Nama: %s\n", ptr_to_mhs1->nama);

    mhs2 = mhs1;
    mhs2.nilai_dasprog = 20;
    printf("Nama mhs2: %s\n", mhs2.nama);
}