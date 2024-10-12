#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    switch(a) {
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jumat");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
        default:
            printf("Input tidak valid");
            break;
    }
}