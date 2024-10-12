#include <stdio.h>

int main() {
    int size, freq = 0, mayoritas = -1;
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        int counter = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                counter++;
            }
        }
        if (counter > freq) {
            freq = counter;
            mayoritas = arr[i];
        }
    }

    if (freq > size / 2) {
        printf("%d", mayoritas);
    } else {
        printf("Tidak ada mayoritas");
    }
}