#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);

        for (int j = 0; j < b; j++) {
            printf("%d", a);
        }
        printf("\n");
    }
}