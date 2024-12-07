#include <stdio.h>

unsigned long long recursive_greatest_common_divisor(unsigned long long a, unsigned long long b) {
    if (b == 0) return 0;
    else if (a % b == 0) return b;
    else return recursive_greatest_common_divisor(b, a % b);
}

int main() {
    unsigned long long a,b;
    scanf("%llu %llu",&a,&b);
    printf("%llu",recursive_greatest_common_divisor(a,b));
}