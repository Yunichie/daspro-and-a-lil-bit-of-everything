#include <stdio.h>

int main() {
    int x, y;
    char o;
    float res;
    scanf("%d %c %d", &x, &o, &y);

    if (x == y) {
        x = 0;
    }

    if (x % y == 0 || y % x == 0) {
        if (x < y) {
            x = x * (-1);
        } else {
            y = y * (-1);
        }
    }

    switch (o) {
        case '+':
            printf("%.2f\n", (float)x + y);
        break;
        case '-':
            printf("%.2f\n", (float)x - y);
        break;
        case '*':
            printf("%.2f\n", (float)x * y);
        break;
        case '/':
            printf("%.2f\n", (float)(x) / y);
        break;
    }
}