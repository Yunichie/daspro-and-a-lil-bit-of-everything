#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            str[i + 1] -= 32;
        }
    }

    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32;
    }

    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("%s\n", str);
}