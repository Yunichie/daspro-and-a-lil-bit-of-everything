#include <stdio.h>
#include <limits.h>

int main() {
    int size, max = INT_MIN, freq;
    scanf("%d", &size);
    int nums[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);

        if (nums[i] > max) {
            max = nums[i];
            freq = 1;
        } else if (nums[i] == max) {
            freq++;
        }
    }

    printf("%d", freq);
}