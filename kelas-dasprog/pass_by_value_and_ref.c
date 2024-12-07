#include <stdio.h>

void num_add(int num) {
    num += num;
}

int num_add_int(int num) {
    return num += num;
}

void num_add_ptr(int* num) {
    *num += *num;
}

int main() {
    int num = 5;
    num_add(num);
    printf("%d\n", num); // 5 karena berbeda scope

    num = num_add_int(num);
    printf("%d\n", num); // 10

    num = 5;
    num_add_ptr(&num);
    printf("%d\n", num); // 10
}