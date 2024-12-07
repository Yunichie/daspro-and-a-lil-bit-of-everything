#include <stdio.h>

long long k(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    return 3*k(n-1);
}

int main() {
    long long n;
    scanf("%d", &n);
    printf("%lld", k(n));
}
