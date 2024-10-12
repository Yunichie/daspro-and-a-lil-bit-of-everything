#include <stdio.h>

int main() {
    int a;
    char genap[] = "Genap", ganjil[] = "Ganjil";
    scanf("%d",&a);

    if (a % 2 == 0) {
        printf("%s", genap);
    } else {
        printf("%s", ganjil);
    }
}