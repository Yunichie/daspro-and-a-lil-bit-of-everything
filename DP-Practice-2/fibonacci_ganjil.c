#include <stdio.h>

int main() {
    int N, counter = 0, first = 1, second = 1, next;
    scanf("%d", &N);

    while (counter < N) {
        printf("%d", first);
        counter++;

        if (counter < N) {
            printf(" ");
        }

        next = first + second;
        first = second;
        second = next;

        if (first % 2 == 0) {
            next = first + second;
            first = second;
            second = next;
        }
    }
    return 0;
}