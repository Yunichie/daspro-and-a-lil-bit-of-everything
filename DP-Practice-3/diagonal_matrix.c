#include <stdio.h>

int main() {
    int size, first_diag = 0, second_diag = 0;
    scanf("%d", &size);
    int matrix[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                first_diag += matrix[i][j];
            }
            if (i + j == size - 1) {
                second_diag += matrix[i][j];
            }
        }
    }
    printf("%d %d", first_diag, second_diag);
}