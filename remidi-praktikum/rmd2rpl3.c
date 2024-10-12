#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, e;
        scanf("%d", &n);

        int slime[n], counter = n;
        for (int j = 0; j < n; j++) {
            scanf("%d", &slime[j]);
        }

        scanf("%d", &e);

        int min = slime[0], idxmin = 0;
        for (int j = 0; j < e; j++) {
            for (int k = 1; k < n; k++) {
                if (slime[j] < min) {
                    min = slime[i];
                    idxmin = k;
                }
                if (e >= min && slime[i] != -1) {
                    e -= min;
                    slime[idxmin] = -1;
                    counter--;
                } else if (e < min) {
                    break;
                }
            }
        }

        if (counter > 0) {
            printf("Kaburlah Furina! akan kuhadapi %d Slime terakhir dengan cara lain!", )
        }
    }
}