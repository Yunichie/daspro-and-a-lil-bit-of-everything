#include <stdio.h>

unsigned long long loop_sum(unsigned long long n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
unsigned long long sum_pattern(unsigned long long n) {
    if (n == 0) return 0;
    return sum_pattern(n-1)*2 + loop_sum(n);
}

int main() {
    unsigned long long n;
    scanf("%llu", &n);
    printf("%llu", sum_pattern(n));
}