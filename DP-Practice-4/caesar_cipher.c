#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int key;
    scanf("%s", str);
    scanf("%d", &key);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] - 'A' + key) % 26 + 26 + 'A';
        } else {
            str[i] = str[i] - 'A' + key % 26 + 'A';
        }
    }
    printf("%s\n", str);
}