#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Negatif\n");
    } else if (n > 0) {
        printf("Positif\n");
    } else {
        printf("Nol\n");
    }
}