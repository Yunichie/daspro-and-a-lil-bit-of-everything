#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int spasi = n - 1;
    int asterisk = (n - spasi);

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= spasi; j++) {
            printf(" ");
        }
        for (int k = 1; k <= asterisk; k++) {
            printf("*");
        }
        asterisk += 2;
        spasi--;
        printf("\n");
    }
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char a, b, c, d, e;
    scanf("%c %c %c %c %c", &a, &b, &c, &d, &e);
    char input[5];
    input[0] = a;
    input[1] = b;
    input[2] = c;
    input[3] = d;
    input[4] = e;

    for (int i = 0; i < 5; i++) {
        switch (input[i]) {
            case 'P':
                printf("Ghost");
            break;
            case 'G':
                printf("Meteor");
            break;
            case 'D':
                printf("Clay");
            break;
            case 'A':
                printf("Zupzup");
            break;
            case 'H':
                printf("Purina");
            break;
            case 'daspro-and-a-lil-bit-of-everything':
                printf("Queen");
            break;
            case 'E':
                printf("Eternal");
        }
        printf(" ");
    }
}

 */

/*
#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);

    if (a % 2 == 0) {
        printf("%c adalah genap.", a);
    } else {
        printf("%c adalah ganjil.", a);
    }
}
 */

/*
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    switch (c) {
        case 1:
            printf("%d\n", a <<= b);
            break;
        case 2:
            printf("%d\n", a >>= b);
            break;
        case 3:
            printf("%d\n", a & b);
            break;
        case 4:
            printf("%d\n", a | b);
            break;
        case 5:
            printf("%d\n", a ^ b);
            break;
    }
}
 */

/*
#include <stdio.h>

int main() {
    int x, result;
    scanf("%d",&x);

    for (int i = 1; i <= x; i++) {
        result += i * i * i;
    }
    printf("%d",result);
}
 */


/*
#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    int mod[4];

    if (x % 2 != 0) {
        mod[0] = x % 2;
    }
    if (x % 4 != 0) {
        mod[1] = x % 4;
    }
    if (x % 7 != 0) {
        mod[2] = x % 7;
    }
    if (x % 9 != 0) {
        mod[3] = x % 9;
    }


}
 */

/*
#include <stdio.h>

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a*a + b*b == c*c) {
        printf("YEY GO GET ANOTHER ONE DHIKA!");
    } else {
        printf("OH NOOOO");
    }
}
 */

/*
#include <stdio.h>

int main() {
    unsigned long long int x;
    scanf("%llu",&x);
    printf("%llu",(x * (x + 1)/2) * (x * (x + 1)/2));
}
 */

/*
#include <stdio.h>

int main() {
    int n, m, power = 1, counter;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        if (m > 0) {
            m -= power;
            counter++;
        } else {
            break;
        }
        power *= 2;
    }
    printf("Merpy berhasil menaklukan kurcaci hingga lantai %d", counter);
}

 */

/*
#include <stdio.h>

int main() {
    unsigned long long int x;
    scanf("%llu",&x);
    int mod[4];
    mod[0]= x % 2;
    mod[1]= x % 4;
    mod[2]= x % 7;
    mod[3]= x % 9;

    printf("aku suka ");
    for (int i = 0; i < 4; i++) {
        if (mod[i] == 0) {
            continue;
        }
        printf("%d",mod[i]);
    }
    printf(" dasar pemrograman");
}
 */