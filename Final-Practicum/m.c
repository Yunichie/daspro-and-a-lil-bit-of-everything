#include <stdio.h>

int main() {
    int q, k, curr = -1, sapi[100000] = {0};
    scanf("%d %d", &q, &k);

    int sisa = q;
    while (sisa > 1) {
        int count = 0;

        while (count < k) {
            curr = (curr + 1) % q;
            if (sapi[curr] == 0) {
                count++;
            }
        }
        sapi[curr] = 1;
        sisa--;
    }

    int lastCow = 1;
    for (int i = 0; i < q; i++) {
        if (sapi[i] == 0) {
            lastCow = i + 1;
            break;
        }
    }
    printf("yapp, sapi ke %d sepertinya memang yang terbaik.\n", lastCow);
}