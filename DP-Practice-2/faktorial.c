#include <stdio.h>

int main() {
    int n, faktorial = 1;
    scanf("%d", &n);

    for (int i = n; i > 1; i--) {
        faktorial *= i;
    }
    printf("%d", faktorial);
}