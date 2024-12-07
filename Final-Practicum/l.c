#include <math.h>
#include <stdio.h>

int main() {
    long double v, pi = 3.14159265358979323846;
    scanf("%Lf", &v);
    long double r = cbrtl(v/(2 * pi));
    printf("Luas permukaan: %.2Lf", 2 * pi * r * r + 2 * pi * r * (2 * r));
}