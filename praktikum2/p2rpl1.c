#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    if (size == 0) {
        printf("-1");
        return 0;
    }

    int arr[size], freq[11] = {0};

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++; // increment freq untuk arr[i]
    }

    int maxFreq = 0;
    int mayoritas = -1;

    for (int i = 1; i <= 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i]; // jika freq[i] lebih besar daripada freq terbesar, maka ganti value maxFreq menjadi frekuensi freq[i]
            mayoritas = i;
        }
    }

    int sama = 0;
    for (int i = 1; i <= 10; i++) {
        if (freq[i] == maxFreq) {
            sama++;
        }
    }

    if (sama > 1) {
        printf("-1");
    } else {
        printf("%d\n%d", mayoritas, size - maxFreq);
    }

    return 0;
}