#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char cmd[8], strA[1001], strB[1001];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", cmd, strA, strB);

        int asciiAnagramFlip = 0;
        for (int j = 0; j < strlen(cmd); j++) {
            asciiAnagramFlip += cmd[j];
        }

        if (asciiAnagramFlip == 503) { // ANAGRAM
            int count_a[26] = {0};
            int count_b[26] = {0};

            for (int j = 0; j < strlen(strA); j++) {
                count_a[strA[j] - 'a']++;
                count_b[strB[j] - 'a']++;
            }

            int isAnagram = 1;
            for (int j = 0; j < 26; j++) {
                if (count_a[j] != count_b[j]) {
                    isAnagram = 0;
                    break;
                }
            }

            if (isAnagram) {
                printf("Hhm %s can be arranged into %s\n", strA, strB);
            } else {
                printf("This cannot lah bro\n");
            }
        }
        else if (asciiAnagramFlip == 299) { // FLIP
            int isFlip = 1;
            int len = strlen(strA);

            for (int j = 0; j < len; j++) {
                if (strA[j] != strB[len - 1 - j]) {
                    isFlip = 0;
                    break;
                }
            }

            if (isFlip) {
                printf("Flip %s to get %s\n", strA, strB);
            } else {
                printf("This cannot lah bro\n");
            }
        }
    }
    return 0;
}