#include <stdio.h>
#include <string.h>

int main() {
    int key;
    scanf("%d\n", &key);
    char str[1001];
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            continue;
        }
        str[i] = ((str[i] - 'a' + key + 26) % 26) + 'a';
    }
    printf("%s\n", str);
}