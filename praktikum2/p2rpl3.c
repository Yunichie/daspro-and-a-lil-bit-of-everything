#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int arr[t];
    int modus;

    for (int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }

    // modeV: simpan modus saat ini
    // maxCount: simpan frekuensi tertinggi
    // findMax: boolean untuk memutuskan mana angka terbesar ketika terdapat 2 modus
    int modeV = -1, maxCount = 0, findMax = 1;

    for (int i = 0; i < t; i++) {
        int idx = 0;
        for (int j = 0; j < t; j++) {
            if (arr[i] == arr[j]) {
                idx++;
            }
        }

        // Update mode if either:
        // 1. Menemukan frekuensi yang lebih tinggi, atau
        // 2. Menemukan frekuensi yang sama DAN:
        //    - findMax true dan angka baru lebih besar
        //    - findMax false dan angka baru lebih kecil
        if (idx > maxCount || (idx == maxCount &&
            ((findMax && arr[i] > modeV) || (!findMax)))) {
            maxCount = idx;
            modeV = arr[i];
        }
    }
    modus = modeV;

    printf("Modus: %d\n", modus);

    int isPrime = 1;
    for (int i = 2; i <= modus/2; i++) {
        // Prima hanya bisa dibagi oleh 1 dan bilangan itu sendiri
        // maka, jika modus % i == 0 (modus bisa dibagi angka selain 1 dan angka itu sendiri)
        // maka isPrime = 0 (false)
        if (modus % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (modus == 1) {
        printf("Yah, modusnya gak prima.\n");
    }
    else if (isPrime) {
        printf("Wah, modusnya prima nihh.\n");
    }
    else {
        printf("Yah, modusnya gak prima.\n");
    }
}