#include <stdio.h>

int main() {
    int size, expected_sum;
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &expected_sum);

    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size; j++) {
            if (arr[i] + arr[j] == expected_sum) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }
    printf("-1");
}