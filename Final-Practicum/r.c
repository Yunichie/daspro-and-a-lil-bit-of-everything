#include <stdio.h>

int main() {
    long long x, y, a, b, n, MOD = 1000000007;;
    scanf("%lld %lld %lld %lld %lld", &x, &y, &a, &b, &n);
    x %= MOD;
    y %= MOD;
    a %= MOD;
    b %= MOD;
    
    if (n == 0) {
        printf("%lld", x);
        return 0;
    }
    if (n == 1) {
        printf("%lld", y);
        return 0;
    }
    long long matrix[2][2] = {{a, b}, {1, 0}}, res[2][2] = {{1, 0}, {0, 1}}, temp[2][2];
    n -= 1;
    
    while (n > 0) {
        if (n % 2 != 0) {
            temp[0][0] = (res[0][0] * matrix[0][0] + res[0][1] * matrix[1][0]) % MOD;
            temp[0][1] = (res[0][0] * matrix[0][1] + res[0][1] * matrix[1][1]) % MOD;
            temp[1][0] = (res[1][0] * matrix[0][0] + res[1][1] * matrix[1][0]) % MOD;
            temp[1][1] = (res[1][0] * matrix[0][1] + res[1][1] * matrix[1][1]) % MOD;
            
            res[0][0] = temp[0][0];
            res[0][1] = temp[0][1];
            res[1][0] = temp[1][0];
            res[1][1] = temp[1][1];
        }
        temp[0][0] = (matrix[0][0] * matrix[0][0] + matrix[0][1] * matrix[1][0]) % MOD;
        temp[0][1] = (matrix[0][0] * matrix[0][1] + matrix[0][1] * matrix[1][1]) % MOD;
        temp[1][0] = (matrix[1][0] * matrix[0][0] + matrix[1][1] * matrix[1][0]) % MOD;
        temp[1][1] = (matrix[1][0] * matrix[0][1] + matrix[1][1] * matrix[1][1]) % MOD;
        
        matrix[0][0] = temp[0][0];
        matrix[0][1] = temp[0][1];
        matrix[1][0] = temp[1][0];
        matrix[1][1] = temp[1][1];
        
        n /= 2;
    }
    long long result = (res[0][0] * y + res[0][1] * x) % MOD;
    printf("%lld", result);
}