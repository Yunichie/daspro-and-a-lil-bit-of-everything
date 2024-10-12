#include <stdio.h>

int main() {
    int size, biggest;
    scanf("%d", &size);
    scanf("%d", &biggest);

    for (int i = 1; i < size; i++) {
        int current;
        scanf("%d", &current);
        if (current > biggest) {
            biggest = current;
        }
    }
    printf("%d\n", biggest); 
}