#include <stdio.h>

int get_digit(int x) {
     int res = 0;
     while (x != 0) {
          x /= 10;
          ++res;
     }
     return res;
}

int armstrong(int x) {
     int digit = get_digit(x);
     int res = 0;

     for (int i = x; i != 0; i /= 10) {
          int num = i % 10;
          int n = 1;
          for (int j = 0; j < digit; j++) {
               n *= num;
          }
          res += n;
     }
     return res == x;
}

int main() {
     int x;
     scanf("%d", &x);
     printf(armstrong(x) ? "true" : "false");
}