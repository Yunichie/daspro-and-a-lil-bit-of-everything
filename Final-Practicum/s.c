#include <stdio.h>

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    long long diskon;
    switch(n) {
        case 1:
            diskon = 35;
            break;
        case 2:
            diskon = 45;
            break;
        case 3:
            diskon = 50;
            break;
        case 4:
            diskon = 55;
            break;
        case 5:
            diskon = 40;
            break;
        default:
            diskon = 0;
            break;
    }
    long long harga = k - ((k * diskon) / 100), ongkir_persen = 0;
    if (harga >= 250000) ongkir_persen = 100;
    else if (harga >= 150000) ongkir_persen = 50;
    else if (harga >= 50000) ongkir_persen = 25;

    long long diskon_ongkir = 50000 * ongkir_persen / 100, total_ongkir = 50000 - diskon_ongkir, harga_total = harga + total_ongkir, sisa_uang = 300000 - harga_total;
    if (sisa_uang > 0) {
        printf("WOHHHH uangku sisa %lld\n", sisa_uang);
        printf("Mamaa Surip bisa kasi THR ke adek adek, tadi totalnya %lld\n", harga_total);
    } else if (sisa_uang < 0) {
        printf("Mamaa minta uang, uangku kurang %lld :((\n", -sisa_uang);
        printf("Totalnya tadi %lld\n", harga_total);
    } else {
        printf("Yeyyy totalnya pas 300000\n");
        printf("Mamaa, Surip udah gede ga jadi minta uang :)\n");
    }
}