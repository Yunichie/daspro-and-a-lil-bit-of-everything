#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char str1[100], str2[100];
        scanf("%s %s", str1, str2);
        if (strcmp(str1, str2) == 0) {
            printf("Sama\n");
        } else {
            printf("Berbeda\n");
        }
    }
}