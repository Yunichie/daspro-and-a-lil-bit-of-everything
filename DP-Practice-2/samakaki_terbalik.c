#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int spasi = n - i;
        int hashtag = 2 * i - 1;

        for (int j = 0; j < spasi; j++) {
            printf(" ");
        }
        for (int k = 1; k <= hashtag; k++) {
            printf("#");
        }
        printf("\n");
    }
}