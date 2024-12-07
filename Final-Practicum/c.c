#include <stdio.h>

int main() {
    double x1, y1, x2, y2, m;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    if (x2 - x1 != 0) {
        m = (y2-y1)/(x2-x1);
        printf("%.2lf %.2lf", m, y1 - m * x1);
    }
    else printf("-_-");
}