#include <stdio.h>

struct Purchase {
    int qty;
    int price;
};

int main() {
    int n, usage;
    scanf("%d %d", &n, &usage);

    struct Purchase p[100];
    long long initial = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &p[i].qty, &p[i].price);
        initial += (long long)p[i].qty * p[i].price;
    }

    long long final = initial;
    int remaining = usage;
    int i = 0;

    while(remaining > 0 && i < n) {
        if(p[i].qty >= remaining) {
            final -= (long long)remaining * p[i].price;
            remaining = 0;
        } else {
            final -= (long long)p[i].qty * p[i].price;
            remaining -= p[i].qty;
        }
        i++;
    }

    printf("Persediaan Awal : %lld\n", initial);
    printf("Persediaan Akhir : %lld\n", final);

    return 0;
}