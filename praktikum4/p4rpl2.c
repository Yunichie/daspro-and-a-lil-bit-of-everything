#include <float.h>
#include <math.h>
#include <stdio.h>

typedef struct {
    unsigned long long x;
    unsigned long long y;
} Pos;

int main() {
    int n;
    scanf("%d", &n);

    Pos pos[n];
    for (int i = 0; i < n; i++) {
        scanf("%llu %llu", &pos[i].x, &pos[i].y);
    }

    double d = DBL_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            double temp_d = sqrt(((pos[j].x - pos[i].x) * (pos[j].x - pos[i].x)) + ((pos[j].y - pos[i].y) * (pos[j].y - pos[i].y)));
            if (temp_d < d && temp_d != 0) d = temp_d;
        }
    }

    printf("%.2lf", d);
}