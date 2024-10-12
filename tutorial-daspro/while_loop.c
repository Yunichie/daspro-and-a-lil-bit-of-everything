#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    while (a >= 0) {
        a -= 3;
        printf("%d ", a);
    }
    printf("\n");
}