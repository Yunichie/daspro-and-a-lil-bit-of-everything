#include <stdio.h>
#include <string.h>

/*
void decodeMessage(int K, char *S) {
    char triangle[100][100] = {0};
    int len = strlen(S);
    int col = 0, row = 0;
    int idx = 0;

    // Fill the triangle column by column
    while (idx < len) {
        for (row = 0; row < K && idx < len; row++) {
            if (row >= col) {
                triangle[row][col] = S[idx++];
            }
        }
        col++;
    }

    // Read the message row by row
    char result[1001] = {0};
    int resultIdx = 0;

    for (row = 0; row < K; row++) {
        for (col = 0; col <= row; col++) {
            if (triangle[row][col] != '_') {
                result[resultIdx++] = triangle[row][col];
            }
        }
    }

    printf("%s\n", result);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int K;
        char S[1001];
        scanf("%d %s", &K, S);
        decodeMessage(K, S);
    }

    return 0;
}
*/
#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        scanf("%d",&n);
        int counter = 0;
        for (int i = 0; i < n; i++) {
            if (i % 3 == 0 || i % 5 == 0) {
                counter += i;
            }
        }
        printf("%d", counter);
    }
    return 0;
}