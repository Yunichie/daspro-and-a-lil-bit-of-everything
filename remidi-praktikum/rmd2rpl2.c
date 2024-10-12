#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    int len, count[26] = {0}, high = 0, idx = -1;
    scanf("%[^\n]", str);
    len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i + 'a', count[i]);
            if (high < count[i]) {
                idx = i;
                high = count[i];
            }
        }
    }
    if (idx != -1) {
        printf("Most frequent character: %c with count: %d", idx + 'a', count[idx]);
    } else {
        printf("hmmm, i don't have anything to show");
    }
}