#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    gets(str);
    int len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    if (len >= 4) {
        char temp1, temp2;

        for (int i = 0; i < len / 4; i++) {
            temp1 = str[i * 2];
            temp2 = str[i * 2 + 1];
            str[i * 2] = str[len - 2 - i * 2];
            str[i * 2 + 1] = str[len - 1 - i * 2];
            str[len - 2 - i * 2] = temp1;
            str[len - 1 - i * 2] = temp2;
        }
        printf("%s\n", str);
    }
}