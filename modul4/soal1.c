#include <stdio.h>

void add(int a, int b, int *res) {
    *res = a + b;
}

int main() {
    int a, b, res;
    scanf("%d %d", &a, &b);
    add(a, b, &res);
    printf("%d", res);
}