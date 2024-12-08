#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char word[101];
    scanf("%d\n%s", &t, word);

    int len = strlen(word), idx = 0;
    char decrypt[101] = {0};
    for (int i = 0; i < t; i++) {
        int skip = i;
        while (skip < len) {
            decrypt[skip] = word[idx++];
            skip += t;
        }
    }
    for (int i = 0; i < len; i++) if (decrypt[i] == '_')decrypt[i] = ' ';
    printf("%s", decrypt);
}