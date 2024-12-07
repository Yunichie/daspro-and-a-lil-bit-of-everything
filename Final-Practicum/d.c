#include <stdio.h>
#include <string.h>

void sum_genap(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) sum += i;
    }
    printf("%d", sum);
}

void sum_ganjil(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) sum += i;
    }
    printf("%d", sum);
}

int main() {
    char nama[1000];
    int n;
    scanf("%s %d", nama, &n);

    if (strcmp(nama, "Ellie") == 0) sum_genap(n);
    else if (strcmp(nama, "Oddie") == 0) sum_ganjil(n);
    else printf("Who is that?");
}