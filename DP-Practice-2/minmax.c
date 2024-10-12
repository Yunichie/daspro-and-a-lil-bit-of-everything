#include <stdio.h>
#include <limits.h>

int main() {
    int n, num;
    int min = INT_MAX;
    int max = INT_MIN;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num < min) {
            min = num;
        }

        if (num > max) {
            max = num;
        }
    }
    printf("%d %d\n", min, max);

    return 0;
}