#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    gets(str);
    int len = strlen(str);
    printf("%d\n", len);
}