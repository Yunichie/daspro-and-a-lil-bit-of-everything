#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    int isPalindrome = 0, ignoreCase = 0;
    scanf("%s", str);

    int kiri = 0;
    int kanan = strlen(str) - 1;

    if ((str[kiri] >= 'A' && str[kiri] <= 'Z' || str[kiri] >= 'a' && str[kiri] <= 'z')
        && (str[kanan] >= 'A' && str[kanan] <= 'Z') || (str[kanan] >= 'a' && str[kanan] <= 'z')) {
        ignoreCase = (str[kiri] | 32) == (str[kanan] | 32);
    } else {
        ignoreCase = str[kiri] == str[kanan];
    }

    while (kiri < kanan) {
        if (!ignoreCase) {
            isPalindrome = 0;
        } else {
            isPalindrome = 1;
        }
        kiri++;
        kanan--;
    }

    if (isPalindrome == 0) {
        printf("NO");
    } else {
        printf("YES");
    }
}
