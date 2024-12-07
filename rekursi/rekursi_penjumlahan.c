#include <stdio.h>

int add_recursive(int a);

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", add_recursive(a));
}

int add_recursive(int a) {
    if (a == 0) {
        return 0;
    } else {
        return a + add_recursive(a - 1);
    }
}