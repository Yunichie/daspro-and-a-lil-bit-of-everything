#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n, k, count = 0, i = 0;;
    scanf("%lld %lld", &n, &k);

    int* arr = calloc(n, sizeof(int));
    while (1) {
        long long no_tempat = 1 + i * k, harga = no_tempat % n;
        if (arr[harga]) break;
        arr[harga] = 1;
        count += harga;
        i++;
    }
    printf("%lld\n", count);
    free(arr);
    return 0;
}
