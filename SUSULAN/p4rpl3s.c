#include <stdio.h>

typedef struct {
    int key;
    char isi[11];
} Peti;

void linear_search(Peti* arr, int len, int target) {
    int isfound = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i].key == target) {
            printf("%s\n", arr[i].isi);
            isfound = 1;
        }
    }
    if (isfound == 0) printf("========= Emangnya ada isinya? ============\n");
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    Peti peti[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &peti[i].key, &peti[i].isi);
    }

    int cari;
    for (int i = 0; i < q; i++) {
        scanf("%d", &cari);
        linear_search(peti, n, cari);
    }
}