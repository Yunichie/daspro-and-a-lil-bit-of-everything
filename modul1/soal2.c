#include <stdio.h>

int main() {
    float num;
    scanf("%f",&num);
    int save_num = num;
    float checker = num / 100.00;
    int digits = 1;

    if (checker <= 9.99 && checker >= 1.00) {
        digits = 3;
    } else if (checker <= 0.99000001 && checker >= 0.1) {
        digits = 2;
    }

    switch(digits) {
        case 1:
            printf("one\n");

            switch (save_num) {
                case 1:
                    printf("satu");
                    break;
                case 2:
                    printf("dua ");
                    break;
                case 3:
                    printf("tiga ");
                    break;
                case 4:
                    printf("empat ");
                    break;
                case 5:
                    printf("lima ");
                    break;
                case 6:
                    printf("enam ");
                    break;
                case 7:
                    printf("tujuh ");
                    break;
                case 8:
                    printf("delapan ");
                    break;
                case 9:
                    printf("sembilan ");
                    break;
                default:
                    printf("nol");
            }
            break;
        case 2:
            printf("two");
            int first_num = save_num / 10;
            int second_num = save_num % 10;

            switch (first_num) {
                case 1:
                    switch (second_num) {
                        case 1:
                            printf("sebelas");
                            break;
                        case 2:
                            printf("dua belas");
                            break;
                        case 3:
                            printf("tiga belas");
                            break;
                        case 4:
                            printf("empat belas");
                            break;
                        case 5:
                            printf("lima belas");
                            break;
                        case 6:
                            printf("enam belas");
                            break;
                        case 7:
                            printf("tujuh belas");
                            break;
                        case 8:
                            printf("delapan belas");
                            break;
                        case 9:
                            printf("sembilan belas");
                            break;
                        default:
                            printf("sepuluh");
                    }
                    break;
                case 2:
                    printf("dua ");
                    printf("puluh ");
                    break;
                case 3:
                    printf("tiga ");
                    printf("puluh ");
                    break;
                case 4:
                    printf("empat ");
                    printf("puluh ");
                    break;
                case 5:
                    printf("lima ");
                    printf("puluh ");
                    break;
                case 6:
                    printf("enam ");
                    printf("puluh ");
                    break;
                case 7:
                    printf("tujuh ");
                    printf("puluh ");
                    break;
                case 8:
                    printf("delapan ");
                    printf("puluh ");
                    break;
                case 9:
                    printf("sembilan ");
                    printf("puluh ");
                    break;
                default:
                    printf("nol");
            }
            switch (second_num) {
                case 1:
                    printf("");
                    break;
                case 2:
                    printf("dua");
                    break;
                case 3:
                    printf("tiga");
                    break;
                case 4:
                    printf("empat");
                    break;
                case 5:
                    printf("lima");
                    break;
                case 6:
                    printf("enam");
                    break;
                case 7:
                    printf("tujuh");
                    break;
                case 8:
                    printf("delapan");
                    break;
                case 9:
                    printf("sembilan");
                    break;
                default:
                    printf("");
            }
            break;
        case 3:
            printf("three");
            break;
        default:
            printf("error");
    }
}