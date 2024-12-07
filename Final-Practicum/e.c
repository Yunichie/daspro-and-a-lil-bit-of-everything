#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char word[101];
    scanf("%d\n%s", &t, word);

    char grid[t*t][t];
    memset(grid, ' ', sizeof(grid));
    int idx = 0;
    for (int i = 0; i < t*t; i++) {
        for (int j = 0; j < t; j += t) {
            grid[i][j] = word[idx];
            idx++;
        }
    }

    int i = 0, j = 0;
    for (i; i < t*t; i++) {
        for (j = 0; j < t; j++) {
            printf("%c", grid[i][j]);
        }
        i += t;
    }
}
