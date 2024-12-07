#include <stdio.h>

int g(int x);
int f(int x);
int bigF(int x, int n);

int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%d", bigF(x, n));
}

int g(int x) {
    if (x % 2 == 0) return x + 2;
    return x - 2;
}

int f(int x) {
    if (x % 2 == 0) return x / 2;
    return 2 * x;
}

int bigF(int x, int n) {
    if (n == 1) return f(x);
    if (n % 2 != 0) return f(x + bigF(x, n-1));
    return g(x + bigF(x, n-1));
}