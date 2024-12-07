#include <stdio.h>
#include <string.h>

int main() {
    int n, counter = 1;
    scanf("%d",&n);
    int spiral[n][n];

    int top = 0, bottom = n - 1, left = 0, right = n - 1, i = 0, j = 0;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            spiral[top][i] = counter++;
        }
        //printf("\n");
        top++;

        for (int i = top; i <= bottom; ++i) {
            spiral[i][right] = counter++;
        }
        //printf("\n");
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                spiral[bottom][i] = counter++;
            }
            //printf("\n");
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                spiral[i][left] = counter++;
            }
            //printf("\n");
            left++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t",spiral[i][j]);
        }
        printf("\n");
    }
}
