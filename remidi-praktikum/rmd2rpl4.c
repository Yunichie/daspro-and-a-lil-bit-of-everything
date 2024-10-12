#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int spiral[n][n];

    int counter = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            spiral[i][j] = counter++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t",spiral[i][j]);
        }
        printf("\n");
    }
}