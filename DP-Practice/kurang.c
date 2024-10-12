#include <stdio.h>

int main() {
    float a, k, u, r, f;
    float xbar;
    scanf("%f %f %f %f %f", &a, &k, &u, &r, &f);
    xbar = (a + k + u + r + f) / 5.0;

    if (a >= xbar && a >= 80) {
        printf("Ambatron Lulus!\n");
    }

    if (k >= xbar && k >= 80) {
        printf("Kumalala Lulus!\n");
    }

    if (u >= xbar && u >= 80) {
        printf("Ucok Lulus!\n");
    }

    if (r >= xbar && r >= 80) {
        printf("Rehan Lulus!\n");
    }

    if (f >= xbar && f >= 80) {
        printf("Farhan Lulus!\n");
    }
}