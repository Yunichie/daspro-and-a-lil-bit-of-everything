#include <stdio.h>

const unsigned long long MOD = 1000000007;

unsigned long long gak_faham_lagi(unsigned long long a, unsigned long long b, unsigned long long n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    if (n == 2) return a+b;
    if (n == 3) return 5;

    // tuloooooong
    unsigned long long arr[5] = {1, 2, (a + b) % MOD, 5, 0};

    for (unsigned long long i = 4; i <= n; i++) {
        if (i % 2 == 0) {
            arr[4] = (a * arr[3] % MOD + b) % MOD;
        } else {
            arr[4] = (4 * arr[3] % MOD + MOD - 4 * arr[1] % MOD) % MOD;
            arr[4] = (arr[4] + (i - 1) * (i - 1) / 4) % MOD;
        }
        arr[1] = arr[2];
        arr[2] = arr[3];
        arr[3] = arr[4];
    }
    return arr[4];
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        unsigned long long a, b, n;
        scanf("%llu %llu %llu", &a, &b, &n);
        printf("%llu\n", gak_faham_lagi(a, b, n));
    }
}