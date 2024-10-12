#include <stdio.h>

int main() {
    int size, k, freq = 0;
    scanf("%d %d", &size, &k);
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == k) {
            freq++;
        }
    }
    printf("%d", freq);
}