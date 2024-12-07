#include <stdio.h>
#include <math.h>

int main() {
    long long xa, ya, za, xb, yb, zb, xc, yc, zc, ra, rb, rd;
    scanf("%lld %lld %lld\n%lld %lld %lld\n%lld %lld %lld\n%d %d %d", &xa, &ya, &za, &xb, &yb, &zb, &xc, &yc, &zc, &ra, &rb, &rd);

    long long ac = sqrt(pow((double)(xc - xa), 2) + pow((double)(yc - ya), 2) + pow((double)(zc - za), 2));
    long long ke_c = ra * rd, backup = (ra + rb) * rd;

    if (ke_c >= ac) printf("NAH ID WIN, NO NEED TO STOP");
    else if (ke_c < ac && backup > ac) printf("HHM BETTER TAKE ROCKET, STILL CAN WIN");
    else printf("GIVE UP ALREADY, MINING BETTER");
}