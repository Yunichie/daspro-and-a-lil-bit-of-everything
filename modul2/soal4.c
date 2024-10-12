#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    char nums[a];
    scanf("%s", nums);
    int collect[a];

    for (int i = 0; i < a; i++) {
        collect[i] = nums[i];
    }

    for (int i = sizeof(collect); i > 0; i--) {
        printf("%d\n",collect[i]);
    }
}
