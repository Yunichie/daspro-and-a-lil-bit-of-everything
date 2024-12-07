#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    long long sum = 0;
    long long seen = 0;

    // Calculate cycle length using GCD
    long long a = n, b = k;
    while (b) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    long long gcd = a;

    // Number of unique values is n/gcd
    long long cycle = n/gcd;

    // Calculate sum of first cycle numbers
    for (long long i = 0; i < cycle; i++) {
        long long place = 1 + i * k;
        sum += place % n;
    }

    printf("%lld\n", sum);
    return 0;
}