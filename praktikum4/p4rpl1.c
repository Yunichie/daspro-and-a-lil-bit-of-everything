#include <stdio.h>

typedef struct {
    char trainer[101];
    char pokemon[101];
    int hp;
    int atk;
    int def;
    int spd;
} Attr;

int main() {
    int n;
    scanf("%d", &n);

    Attr attr;
    int avg = 0;
    for (int i = 0; i < n; i++) {
        Attr temp_attr;
        scanf("%s %s %d %d %d %d", &temp_attr.trainer, &temp_attr.pokemon, &temp_attr.hp, &temp_attr.atk, &temp_attr.def, &temp_attr.spd);

        int temp_avg = (temp_attr.hp + temp_attr.atk + temp_attr.def + temp_attr.spd) / 4;
        if (temp_avg > avg) {
            attr = temp_attr;
            avg = temp_avg;
        }
    }

    printf("%s wins! %s said ez", attr.pokemon, attr.trainer);
}