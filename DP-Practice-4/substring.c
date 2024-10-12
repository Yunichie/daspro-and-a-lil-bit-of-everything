#include <stdio.h>
#include <string.h>

int main() {
    char main[100], sub[100];
    gets(main);
    gets(sub);

    if (strstr(main, sub) != NULL) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }
}