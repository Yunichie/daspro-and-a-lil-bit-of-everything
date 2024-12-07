#include <stdio.h>

unsigned long long faktorial(unsigned long long n);

int main() {
    int n;
    scanf("%ull", &n);
    printf("%llu\n", faktorial(n));
}

unsigned long long faktorial(unsigned long long n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}