#include <stdio.h>

int main() {
    int size, smallest;
    scanf("%d", &size);
    scanf("%d", &smallest);

    for (int i = 1; i < size; i++) {
        int current;
        scanf("%d", &current);
        if (current < smallest) {
            smallest = current;
        }
    }
    printf("%d\n", smallest);
}