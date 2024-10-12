#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char str1[100] = "", str2[100];
    gets(str1);

    for (int i = 0; i < n; i++) {
        scanf("%s", str2);
        strcat(str1, str2);
    }

    printf("%s\n", str1);
}