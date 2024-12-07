#include <stdio.h>
#include <string.h>

int main() {
    char word[6], biner[6][46], arr[6][6];
    scanf("%s", word);

    for(int i = 0; i < 5; i++) {
        scanf(" %[^\n]", biner[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            char temp = 0, *ptr = *(biner + i) + j * 9;
            if (*(ptr + 0) == '1') temp += 128;
            if (*(ptr + 1) == '1') temp += 64;
            if (*(ptr + 2) == '1') temp += 32;
            if (*(ptr + 3) == '1') temp += 16;
            if (*(ptr + 4) == '1') temp += 8;
            if (*(ptr + 5) == '1') temp += 4;
            if (*(ptr + 6) == '1') temp += 2;
            if (*(ptr + 7) == '1') temp += 1;
            *(*(arr + i) + j) = temp;
        }
    }
    int found = 0, len = strlen(word);
    
    for(int i = 0; i < 5 && !found; i++) {
        for(int j = 0; j <= 5 - len && !found; j++) {
            int match = 1;
            for(int k = 0; k < len; k++) {
                if(*(*(arr + i) + j + k) != *(word + k)) {
                    match = 0;
                    break;
                }
            }
            if (match) found = 1;
        }
    }
    
    for(int i = 0; i < 5 && !found; i++) {
        for(int j = 0; j <= 5 - len && !found; j++) {
            int match = 1;
            for(int k = 0; k < len; k++) {
                if(*(*(arr + j + k) + i) != *(word + k)) {
                    match = 0;
                    break;
                }
            }
            if (match) found = 1;
        }
    }
    printf(found ? "%s found\n" : "Failed to find the specified word: %s\n", word);
}